/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSSet, VKPolylineOverlay, VKPolylineOverlayRenderRegion;

@protocol VKRouteLineObserverProtocol;

__attribute__((visibility("hidden")))
@interface VKRouteLine : NSObject

{
    _Bool _matchToRoads;
    _Bool _hasNewRoadMatches;
    Box_3d7e3c2c _bounds;
    Matrix_08d701e4 _inverseMatrix;
    VKPolylineOverlay *_overlay;
    double _boundsUnitsPerMeter;
    double _metersPerPoint;
    double _boundsInWorldUnit;
    double _simplificationEpsilonPoints;
    double _viewUnitsPerPoint;
    id <VKRouteLineObserverProtocol> _observer;
    vector_78427fd2 _sections;
    struct fast_shared_ptr<md::RouteLineSection, std::allocator> _userLocationSection;
    struct PolylineCoordinate _userLocationIndex;
    Matrix_8746f91e _userLocation;
    double _lastTrafficTimeStamp;
    NSSet *_retainedTiles;
    VKPolylineOverlayRenderRegion *_renderRegion;
    struct ManeuverArrowCoordinates _maneuverArrowCoordinates;
    double _builtViewUnitsPerPoint;
}

@property _Bool hasNewRoadMatches;
@property (nonatomic, readonly) vector_78427fd2 sections;
@property (nonatomic, readonly) Box_3d7e3c2c bounds;
@property (nonatomic, readonly) VKPolylineOverlayRenderRegion *renderRegion;
@property (nonatomic, readonly) VKPolylineOverlay *overlay;
@property (nonatomic) id <VKRouteLineObserverProtocol> observer;
@property (nonatomic) double simplificationEpsilonPoints;

- (void)dealloc;
- (id).cxx_construct;
- (Matrix_08d701e4)inverseManeuverTransform;
- (Matrix_08d701e4)maneuverTransform;
- (double)boundsUnitsPerMeter;
- (id)initWithPolylineOverlay:(id)arg1;
- (_Bool)needsUpdateForViewingScale:(double)arg1;
- (_Bool)buildRouteLine:(id)arg1 matchToRoads:(_Bool)arg2 viewUnitsPerPoint:(double)arg3 force:(_Bool)arg4;
- (void)forEachSection:(CDUnknownBlockType)arg1;
- (void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2;
- (void)createMeshIfNecessary:(long long)arg1;
- (void)splitRouteLineAtAnnotation:(id)arg1;
- (vector_d9a07fc0)maneuverPoints;
- (void)_updateBounds:(id)arg1;
- (void)_updateTilesCovered:(id)arg1;
- (_Bool)isTrafficUpToDate;
- (_Bool)isTrafficUptoDate:(double)arg1;

@end
