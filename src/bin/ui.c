#ifndef EFL_BETA_API_SUPPORT
#define EFL_BETA_API_SUPPORT
#endif
#ifndef EFL_EO_API_SUPPORT
#define EFL_EO_API_SUPPORT
#endif
#ifndef ELM_INTERNAL_API_ARGESFSDFEFC
#define ELM_INTERNAL_API_ARGESFSDFEFC
#endif
#include <Elementary.h>
#include "elm_widget_container.h"
#include "elm_interface_scrollable.h"
#include "elm_interface_fileselector.h"
#include "ui.h"

Open_With2_Main_Win_Widgets *
open_with2_main_win_create(Eo *__main_parent)
{
   Open_With2_Main_Win_Widgets *pub_widgets = calloc(1, sizeof(*pub_widgets));

   Eo *main_win;
   Eo *elm_bg1;
   Eo *elm_box1;
   Eo *elm_box3;
   Eo *elm_label1;
   Eo *current_app;
   Eo *search;
   Eo *elm_icon1;
   Eo *desktop_list;
   Eo *elm_box2;
   Eo *asdefault;
   Eo *open;
   Eo *elm_win1_main_menu;


   main_win = eo_add(ELM_WIN_CLASS, __main_parent, elm_obj_win_type_set(ELM_WIN_BASIC));
   pub_widgets->main_win = main_win;
   eo_do(main_win, elm_obj_win_title_set("elm_win1"));
   eo_do(main_win, evas_obj_size_hint_weight_set(1.000000, 1.000000));
   eo_do(main_win, elm_obj_win_autodel_set(EINA_TRUE));
   eo_do(main_win, efl_gfx_size_set(428, 391));
   elm_bg1 = eo_add(ELM_BG_CLASS, main_win);
   eo_do(elm_bg1, evas_obj_size_hint_weight_set(1.000000, 1.000000));
   eo_do(elm_bg1, efl_gfx_visible_set(EINA_TRUE));
   elm_box1 = eo_add(ELM_BOX_CLASS, main_win);
   eo_do(elm_box1, evas_obj_size_hint_weight_set(1.000000, 1.000000));
   eo_do(elm_box1, efl_gfx_visible_set(EINA_TRUE));
   eo_do(elm_box1, evas_obj_size_hint_align_set(-1.000000, -1.000000));
   eo_do(elm_box1, efl_gfx_position_set(72, 86));
   eo_do(main_win, elm_obj_win_resize_object_add(elm_bg1));
   eo_do(main_win, elm_obj_win_resize_object_add(elm_box1));
   elm_box3 = eo_add(ELM_BOX_CLASS, elm_box1);
   eo_do(elm_box3, efl_gfx_visible_set(EINA_TRUE));
   eo_do(elm_box3, evas_obj_size_hint_align_set(-1.000000, 0.000000));
   eo_do(elm_box3, elm_obj_box_horizontal_set(EINA_TRUE));
   eo_do(elm_box3, evas_obj_size_hint_weight_set(0.000000, 0.000000));
   elm_label1 = eo_add(ELM_LABEL_CLASS, elm_box3);
   eo_do(elm_label1, efl_gfx_visible_set(EINA_TRUE));
   eo_do(elm_label1, efl_gfx_size_set(60, 30));
   eo_do(elm_label1, evas_obj_size_hint_weight_set(1.000000, 0.000000));
   eo_do(elm_label1, evas_obj_size_hint_align_set(-1.000000, 0.500000));
   eo_do(elm_label1, elm_obj_widget_part_text_set(NULL, "Current default:"));
   current_app = eo_add(ELM_LABEL_CLASS, elm_box3);
   pub_widgets->current_app = current_app;
   eo_do(current_app, evas_obj_size_hint_weight_set(1.000000, 1.000000));
   eo_do(current_app, efl_gfx_visible_set(EINA_TRUE));
   eo_do(current_app, elm_obj_widget_part_text_set(NULL, "Label"));
   eo_do(current_app, efl_gfx_size_set(60, 30));
   eo_do(elm_box3, elm_obj_box_pack_end(elm_label1));
   eo_do(elm_box3, elm_obj_box_pack_end(current_app));
   search = eo_add(ELM_ENTRY_CLASS, elm_box1);
   pub_widgets->search = search;
   eo_do(search, efl_gfx_visible_set(EINA_TRUE));
   eo_do(search, efl_gfx_size_set(60, 30));
   eo_do(search, evas_obj_size_hint_weight_set(1.000000, 0.000000));
   eo_do(search, evas_obj_size_hint_align_set(-1.000000, 0.000000));
   eo_do(search, elm_obj_entry_icon_visible_set(EINA_FALSE));
   eo_do(search, elm_obj_entry_scrollable_set(EINA_TRUE));
   eo_do(search, elm_obj_entry_single_line_set(EINA_TRUE));
   eo_do(search, elm_obj_widget_part_text_set("guide", "search"));
   elm_icon1 = eo_add(ELM_ICON_CLASS, search);
   eo_do(elm_icon1, evas_obj_size_hint_weight_set(1.000000, 1.000000));
   eo_do(elm_icon1, efl_gfx_visible_set(EINA_TRUE));
   eo_do(elm_icon1, efl_gfx_size_set(40, 40));
   eo_do(elm_icon1, elm_obj_icon_standard_set("search"));
   eo_do(search, elm_obj_container_content_set("icon", elm_icon1));
   desktop_list = eo_add(ELM_GENLIST_CLASS, elm_box1);
   pub_widgets->desktop_list = desktop_list;
   eo_do(desktop_list, efl_gfx_visible_set(EINA_TRUE));
   eo_do(desktop_list, efl_gfx_size_set(70, 60));
   eo_do(desktop_list, evas_obj_size_hint_weight_set(1.000000, 1.000000));
   eo_do(desktop_list, evas_obj_size_hint_align_set(-1.000000, -1.000000));
   elm_box2 = eo_add(ELM_BOX_CLASS, elm_box1);
   eo_do(elm_box2, efl_gfx_visible_set(EINA_TRUE));
   eo_do(elm_box2, elm_obj_box_horizontal_set(EINA_TRUE));
   eo_do(elm_box2, evas_obj_size_hint_align_set(-1.000000, -1.000000));
   eo_do(elm_box2, evas_obj_size_hint_weight_set(1.000000, 0.000000));
   eo_do(elm_box1, elm_obj_box_pack_end(elm_box3));
   eo_do(elm_box1, elm_obj_box_pack_end(search));
   eo_do(elm_box1, elm_obj_box_pack_end(desktop_list));
   eo_do(elm_box1, elm_obj_box_pack_end(elm_box2));
   asdefault = eo_add(ELM_BUTTON_CLASS, elm_box2);
   pub_widgets->asdefault = asdefault;
   eo_do(asdefault, evas_obj_size_hint_weight_set(1.000000, 1.000000));
   eo_do(asdefault, efl_gfx_visible_set(EINA_TRUE));
   eo_do(asdefault, efl_gfx_size_set(73, 30));
   eo_do(asdefault, evas_obj_size_hint_align_set(-1.000000, -1.000000));
   eo_do(asdefault, elm_obj_widget_part_text_set(NULL, "Set as default"));
   open = eo_add(ELM_BUTTON_CLASS, elm_box2);
   pub_widgets->open = open;
   eo_do(open, evas_obj_size_hint_weight_set(1.000000, 1.000000));
   eo_do(open, efl_gfx_visible_set(EINA_TRUE));
   eo_do(open, efl_gfx_size_set(73, 30));
   eo_do(open, evas_obj_size_hint_align_set(-1.000000, -1.000000));
   eo_do(open, elm_obj_widget_part_text_set(NULL, "Open"));
   eo_do(elm_box2, elm_obj_box_pack_end(asdefault));
   eo_do(elm_box2, elm_obj_box_pack_end(open));
   elm_win1_main_menu = eo_add(ELM_MENU_CLASS, main_win);
   eo_do(main_win, efl_gfx_visible_set(EINA_TRUE));


   return pub_widgets;
}

