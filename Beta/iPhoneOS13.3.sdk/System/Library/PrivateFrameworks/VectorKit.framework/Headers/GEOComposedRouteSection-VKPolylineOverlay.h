/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <GeoServices/GEOComposedRouteSection.h>

@interface GEOComposedRouteSection (VKPolylineOverlay)

@property (nonatomic, readonly) Box_3d7e3c2c vkBounds;

- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 excludedSegments:(const vector_488ed546 *)arg3;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(_Bool)arg3 verifySnapping:(_Bool)arg4;

@end
