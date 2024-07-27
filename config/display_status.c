#include <zmk/display/status_screen.h>
#include <zmk/display/widgets/layer_status.h>
#include <zmk/display/widgets/battery_status.h>

static struct zmk_widget_layer_status layer_status;
static struct zmk_widget_battery_status battery_status;

void main(void) {
    zmk_widget_layer_status_init(&layer_status, lv_scr_act());
    zmk_widget_battery_status_init(&battery_status, lv_scr_act());

    lv_obj_align(zmk_widget_layer_status_obj(&layer_status), NULL, LV_ALIGN_IN_TOP_LEFT, 0, 0);
    lv_obj_align(zmk_widget_battery_status_obj(&battery_status), NULL, LV_ALIGN_IN_BOTTOM_LEFT, 0, 0);
}
