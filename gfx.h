#include <inttypes.h>

typedef struct gfxstate gfxstate;

struct gfxstate {
    /* info */
    uint32_t hdisplay;
    uint32_t vdisplay;
    uint32_t stride;

    uint32_t bits_per_pixel;
    uint32_t rlen, glen, blen, tlen;
    uint32_t roff, goff, boff, toff;

    /* calls */
    void (*restore_display)(void);

    /* FIXME: legacy */
    int fb_fd;
};