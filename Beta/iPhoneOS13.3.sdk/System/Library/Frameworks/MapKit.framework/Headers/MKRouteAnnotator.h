/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute;

__attribute__((visibility("hidden")))
@interface MKRouteAnnotator : NSObject

{
    CDStruct_b7cb895d _boundingRegion;
    GEOComposedRoute *_composedRoute;
    CDStruct_c3b9c2ee *_mapPoints;
    CDStruct_34734122 _topLeftCorner;
    struct CGSize _snapshotSize;
    double _zoomLevel;
}

- (void)dealloc;
- (void)_generateMapPoints;
- (CDStruct_b7cb895d)_calculateBoundingRegionForRoute;
- (double)_zoomLevelForCoordinateRegion:(CDStruct_b7cb895d)arg1 contentRect:(struct CGRect)arg2;
- (struct CGAffineTransform)_overviewAffineTransformForRect:(struct CGRect)arg1 zoomLevel:(double)arg2;
- (void)_drawRouteLineInRect:(struct CGRect)arg1 zoomLevel:(double)arg2 transform:(struct CGAffineTransform)arg3 inImage:(id)arg4;
- (id)_createSnapshotter;
- (id)_drawRouteInImage:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 contentSize:(struct CGSize)arg2;
- (void)createSnapshotOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
