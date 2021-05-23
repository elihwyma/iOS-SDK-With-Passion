/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapEdgeBuilder.h>

__attribute__((visibility("hidden")))
@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder

{
    struct deque<GEORoadEdge, std::__1::allocator<GEORoadEdge>> _edges;
}

- (void)dealloc;
- (id).cxx_construct;
- (Matrix_8746f91e)_lastPoint;
- (id)initWithMap:(id)arg1 roadFeature:(CDStruct_c8b5ad3f *)arg2 shouldFlip:(_Bool)arg3;
- (unsigned long long)_maxTileCount;
- (void)_buildCompleteEdge;
- (_Bool)_findEdgeAheadInTile:(id)arg1;
- (_Bool)_findEdgeBehindInTile:(id)arg1;
- (_Bool)_shouldFindEdgeAhead;
- (_Bool)_shouldFindEdgeBehind;
- (Matrix_8746f91e)_firstPoint;
- (id)_firstTile;
- (id)_lastTile;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (unsigned long long)_connectionTypeForEdge:(CDStruct_91f75a7f *)arg1 points:(CDStruct_6e3f967a *)arg2 connectingTilePoint:(Matrix_8746f91e)arg3;

@end
