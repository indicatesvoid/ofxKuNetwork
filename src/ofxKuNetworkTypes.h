#ifndef OFX_KU_NETWORK_TYPES
#define OFX_KU_NETWORK_TYPES

#include "ofMain.h"

typedef struct KuNetworkPixels {
  ofPixels pixels;
  int locationId = -1;
  int cameraId = -1;
} KuNetworkPixels;

#endif
