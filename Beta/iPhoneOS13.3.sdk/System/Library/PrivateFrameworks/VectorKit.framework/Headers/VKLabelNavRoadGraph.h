/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoadGraph : NSObject

{
    unordered_set_975bb0ed _tiles;
    unordered_set_975bb0ed _duplicateTiles;
    NSMutableDictionary *_tileDatasByIndex;
    NSMutableArray *_junctions;
    NSMutableArray *_intersections;
    _Bool _oppositeCarriagewayJunctionsValid;
    NSMutableArray *_oppositeCarriagewayJunctions;
    Matrix_8746f91e _unitHeading;
    _Bool _offRouteJunctionsValid;
    Box_3d7e3c2c _offRouteJunctionSelectRect;
    NSMutableArray *_offRouteJunctions;
    struct PolylineCoordinate _routeUserOffset;
    _Bool _routeFeatureMapValid;
    unordered_map_0cbeac3c _routeFeatureMap;
    _Bool _simplifiedRouteValid;
    vector_8c4749e3 _simplifiedRoutePoints;
    unsigned long long _currentRoadStartSimplifiedPointIndex;
    _Bool _screenRouteValid;
    struct vector<RouteSegment, geo::StdAllocator<RouteSegment, mdm::Allocator>> _screenRouteSegments;
    unsigned long long _firstPOIAligningRouteSegment;
}

@property (retain, nonatomic) NSMutableArray *junctions;

- (void)dealloc;
- (void)reset;
- (id).cxx_construct;
- (void)setTiles:(const unordered_set_975bb0ed *)arg1;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const Matrix_8746f91e *)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext *)arg3;
- (id)nextRoadSegmentForRoad:(id)arg1;
- (id)junctionForRoad:(id)arg1 nearJunction:(_Bool)arg2 crossTileEdge:(_Bool)arg3;
- (id)initWithJunctions:(id)arg1;
- (void)routeJunctionsHaveChanged;
- (_Bool)isPriorRouteCollinearWithRoad:(id)arg1 distance:(float)arg2;
- (_Bool)collideRouteWithLabel:(id)arg1 routeCrossProduct:(float *)arg2 context:(struct NavContext *)arg3;
- (Matrix_8746f91e)unitHeading;
- (void)startingLabelLayoutWithContext:(struct NavContext *)arg1 routeUserOffset:(struct PolylineCoordinate)arg2;
- (_Bool)prepareOppositeCarriagewayJunctions;
- (id)oppositeCarriagewayJunctions;
- (unsigned long long)countReadyJunctionLists;
- (id)junctionListForDepth:(unsigned long long)arg1;
- (id)offRouteGraphJunctionsWithNavContext:(struct NavContext *)arg1 maxJunctions:(unsigned long long)arg2 isOnRoute:(_Bool)arg3;
- (id)offRouteJunctionList;
- (void)addRouteRoadEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(_Bool)arg2 isRouteRefineJunction:(_Bool)arg3 tile:(const shared_ptr_702c344d *)arg4 junctionList:(id)arg5;
- (id)overpassJunctionForJunction:(id)arg1;
- (void)evaluateDualCarriagewayForJunction:(id)arg1 outputJunctionList:(id)arg2;
- (id)_junctionForRoadEdge:(const CDStruct_91f75a7f *)arg1 atA:(_Bool)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(const shared_ptr_702c344d *)arg4;
- (id)_findInterTileJunctionForJunction:(id)arg1;
- (id)_nextIntersectionForRoad:(id)arg1;
- (_Bool)_checkIfDualCarriageWayConnectorRoad:(id)arg1 fromJunction:(id)arg2 toJunction:(id)arg3 checkShields:(_Bool)arg4;
- (void)_updateIntersectionsForDepth:(unsigned long long)arg1;
- (void)_findOffRouteJunctions;
- (void)_updateSimplifiedRoute;
- (void)_transformRouteToScreenWithContext:(struct NavContext *)arg1;

@end
