/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEORouteMatch, NSArray, NSHashTable;

@interface VKNavContext : NSObject

{
    GEOComposedRoute *_route;
    GEORouteMatch *_routeMatch;
    unsigned long long _currentStepIndex;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> _pointsToFrame;
    NSHashTable *_observers;
    NSArray *_groupedManeuverCounts;
    unsigned long long _navCameraHeadingOverride;
    struct vector<AdditionalRouteInfo, std::__1::allocator<AdditionalRouteInfo>> _additionalRoutesToFrame;
    unsigned long long _navigationCameraHeadingOverride;
}

@property (nonatomic, readonly) GEOComposedRoute *route;
@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (nonatomic) unsigned long long currentStepIndex;
@property (nonatomic, readonly) unsigned long long groupedManeuverCount;
@property (copy, nonatomic) NSArray *groupedManeuverCounts;
@property (nonatomic) unsigned long long navigationCameraHeadingOverride;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id).cxx_construct;
- (void)clearAdditionalRoutesToFrame;
- (void)_notifyObserversStateChanged;
- (void)updateWithNewRoute:(id)arg1 currentStepIndex:(unsigned long long)arg2;
- (void)clearPointsToFrame;
- (void)addPointToFrame:(CDStruct_c3b9c2ee)arg1;
- (void)enumeratePointsToFrameUsingBlock:(CDUnknownBlockType)arg1;
- (void)addRouteToFrame:(id)arg1 divergenceCoord:(struct PolylineCoordinate)arg2 convergenceCoord:(struct PolylineCoordinate)arg3;
- (void)enumerateAdditionalRoutesToFrameUsingBlock:(CDUnknownBlockType)arg1;

@end
