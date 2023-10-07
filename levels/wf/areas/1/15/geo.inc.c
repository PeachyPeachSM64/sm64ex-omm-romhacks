// 0x0E000958
const GeoLayout wf_geo_000958[] = {
    GEO_CULLING_RADIUS(2000),
    GEO_OPEN_NODE(),
        GEO_RENDER_RANGE(-2000, 8000),
        GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_0700ABA0),
        GEO_CLOSE_NODE(),
        GEO_RENDER_RANGE(8000, 20000),
        GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_0700AEC8),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
