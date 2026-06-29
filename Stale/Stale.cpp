#include <gst/gst.h>

int main(int argc, char* argv[]) {
    gst_init(&argc, &argv);
    g_print("GStreamer version: %s\n", gst_version_string());
    return 0;
}   