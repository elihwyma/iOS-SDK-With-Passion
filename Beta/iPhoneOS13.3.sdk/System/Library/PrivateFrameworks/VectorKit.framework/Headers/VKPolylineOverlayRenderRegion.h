/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKPolylineOverlayRenderRegion : NSObject

{
    set_8caf8a88 _routeLineDatas;
    Box_3d7e3c2c _visibleRect;
    struct MultiRectRegion _snappingRegion;
}

@property (nonatomic, readonly) const set_8caf8a88 *routeLineDatas;
@property (nonatomic, readonly) Box_3d7e3c2c visibleRect;

- (id).cxx_construct;
- (id)initForVisibleRect:(const Box_3d7e3c2c *)arg1 snappingRegion:(const struct MultiRectRegion *)arg2 routeLineDatas:(const set_8caf8a88 *)arg3;
- (_Bool)isEquivalentToNewRegion:(id)arg1;
- (const struct MultiRectRegion *)snappingRegion;

@end
