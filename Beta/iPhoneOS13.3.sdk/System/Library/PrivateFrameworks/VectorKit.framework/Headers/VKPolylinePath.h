/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOComposedRouteSection, GEOSnappedRoutePath, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface VKPolylinePath : NSObject

{
    VKPolylineOverlay *_overlay;
    GEOComposedRouteSection *_section;
    GEOSnappedRoutePath *_snappedPath;
    vector_d9a07fc0 _points;
    struct optional<std::__1::vector<double, std::__1::allocator<double>>> _distances;
    _Bool _distanceSnapping;
    struct PolylineCoordinate _routeStart;
    struct PolylineCoordinate _routeEnd;
    double _startDistance;
    unsigned char _trafficSpeed;
    double _sectionLengthScaleFactor;
}

@property (nonatomic) unsigned char trafficSpeed;
@property (nonatomic, readonly) Matrix_8746f91e *points;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic) struct PolylineCoordinate routeStart;
@property (nonatomic) struct PolylineCoordinate routeEnd;
@property (readonly) _Bool hasCompletedMapMatching;
@property (readonly) _Bool isMapMatched;
@property (nonatomic, readonly) GEOComposedRouteSection *section;
@property (nonatomic, readonly) GEOSnappedRoutePath *snappedPath;
@property (nonatomic) double startDistance;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (id)initWithOverlay:(id)arg1 section:(id)arg2;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment *)arg2;
- (void)updateDistances:(_Bool)arg1;
- (void)assignPoints:(Matrix_8746f91e *)arg1 count:(unsigned int)arg2;
- (id)initWithOverlay:(id)arg1 snappedPath:(id)arg2;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(struct TrafficSegmentsAlongRoute *)arg2 shouldSnap:(_Bool)arg3;

@end
