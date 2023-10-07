// 0x0E000900
const GeoLayout wf_geo_000900[] = {
    GEO_CULLING_RADIUS(1600),
    GEO_OPEN_NODE(),
        GEO_RENDER_RANGE(-2048, 5000),
        GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_07009780),
        GEO_CLOSE_NODE(),
        GEO_RENDER_RANGE(5000, 32767),
        GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_07009890),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
