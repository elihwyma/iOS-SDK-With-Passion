/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeBuilder : GEOMapRequest

{
    _Bool _buildAhead;
    _Bool _buildBehind;
    Matrix_8746f91e _firstTilePoint;
    Matrix_8746f91e _lastTilePoint;
    GEOMapTileFinder *_currentTileFinder;
    CDUnknownBlockType _edgeHandler;
    unordered_set_684af1c2 _tileKeysSeen;
    _Bool _searchDirection;
    unsigned long long _buildDirection;
}

@property (copy, nonatomic) CDUnknownBlockType edgeHandler;
@property (nonatomic, readonly) GEOMapAccess *map;
@property (nonatomic) unsigned long long buildDirection;

- (void)cancel;
- (id).cxx_construct;
- (Matrix_8746f91e)_lastPoint;
- (id)initWithMap:(id)arg1;
- (void)buildEdge:(CDUnknownBlockType)arg1;
- (_Bool)_pointConnects:(const Matrix_8746f91e *)arg1 rect:(const CDStruct_90e2a262 *)arg2 to:(const CDStruct_c3b9c2ee *)arg3;
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
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey *)arg1 containingPoint:(const Matrix_8746f91e *)arg2 findAhead:(_Bool)arg3;
- (_Bool)_findEdgeAhead;
- (_Bool)_findEdgeBehind;
- (_Bool)_findNextEdge;
- (_Bool)_edgeStart:(const Matrix_8746f91e *)arg1 end:(const Matrix_8746f91e *)arg2 connectsTo:(const Matrix_8746f91e *)arg3;

@end
