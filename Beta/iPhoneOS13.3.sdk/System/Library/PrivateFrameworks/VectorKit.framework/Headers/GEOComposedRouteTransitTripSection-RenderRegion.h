/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <GeoServices/GEOComposedRouteTransitTripSection.h>

@interface GEOComposedRouteTransitTripSection (RenderRegion)

- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(_Bool)arg3 verifySnapping:(_Bool)arg4;
- (id)unsnappedPathsInOverlay:(id)arg1;
- (_Bool)_getEndPoints:(id)arg1 rect:(const Box_3d7e3c2c *)arg2 result:(array_39cc276d *)arg3;
- (_Bool)_validateSnappedPaths:(id)arg1 snappedTileBounds:(const Box_3d7e3c2c *)arg2 overlay:(id)arg3;

@end
