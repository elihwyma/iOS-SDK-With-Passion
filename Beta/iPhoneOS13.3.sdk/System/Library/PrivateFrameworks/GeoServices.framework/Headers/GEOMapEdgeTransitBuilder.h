/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapEdgeBuilder.h>

__attribute__((visibility("hidden")))
@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder

{
    struct deque<geo::TransitEdgePiece, std::__1::allocator<geo::TransitEdgePiece>> _pieces;
}

- (id).cxx_construct;
- (Matrix_8746f91e)_lastPoint;
- (id)initWithMap:(id)arg1 firstPiece:(const struct TransitEdgePiece *)arg2;
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

@end
