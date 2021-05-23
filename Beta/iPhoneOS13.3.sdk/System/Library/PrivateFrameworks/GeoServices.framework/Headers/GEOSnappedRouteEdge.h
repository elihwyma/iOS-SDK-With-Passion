/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOSnappedRouteEdge : NSObject

{
    CDStruct_02837cd9 _localBounds;
    shared_ptr_92bc9970 _mapEdge;
    struct vector<GEOPosition2f, std::__1::allocator<GEOPosition2f>> _points;
    struct vector<geo::PolylineCoordinate, std::__1::allocator<geo::PolylineCoordinate>> _routeOffsets;
    unsigned long long _mapEdgeOffset;
    _Bool _clippedFront;
    _Bool _clippedBack;
}

@property (nonatomic, readonly) shared_ptr_92bc9970 mapEdge;
@property (nonatomic, readonly) CDStruct_c8b5ad3f *feature;
@property (nonatomic, readonly) CDStruct_6e3f967a *points;
@property (nonatomic, readonly) unsigned long long pointCount;
@property (nonatomic, readonly) struct PolylineCoordinate routeOffsetA;
@property (nonatomic, readonly) struct PolylineCoordinate routeOffsetB;
@property (nonatomic, readonly) struct PolylineCoordinate *routeOffsets;
@property (nonatomic, readonly) unsigned long long mapEdgeOffset;
@property (nonatomic, readonly) _Bool clippedFront;
@property (nonatomic, readonly) _Bool clippedBack;

- (id)description;
- (id).cxx_construct;
- (id)initWithRoadPath:(const RoadPathElement_1a15aef6 *)arg1 sectionRect:(const CDStruct_90e2a262 *)arg2;
- (void)calculateRouteOffsetsBetweenA:(struct PolylineCoordinate)arg1 andB:(struct PolylineCoordinate)arg2 overLength:(float)arg3 onRoute:(id)arg4;

@end
