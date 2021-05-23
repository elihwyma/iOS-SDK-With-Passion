/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteTraffic, GEOMapRegion, NSString, VKRouteLine;

@protocol VKPolylineOverlayRouteRibbonObserver;

@interface VKPolylineOverlay : NSObject

{
    struct __CFSet *_observers;
    GEOComposedRoute *_composedRoute;
    _Bool _isReadyForSnapping;
    VKRouteLine *_routeRibbon;
    id <VKPolylineOverlayRouteRibbonObserver> _routeRibbonObserver;
    double _trafficTimeStamp;
    struct unique_ptr<md::TrafficSegmentsAlongRoute, std::__1::default_delete<md::TrafficSegmentsAlongRoute>> _trafficSegments;
    _Bool _selected;
    _Bool _hasFocus;
    _Bool _showTraffic;
    GEOComposedRouteTraffic *_traffic;
}

@property (nonatomic, readonly) double trafficTimeStamp;
@property (nonatomic) VKRouteLine *routeRibbon;
@property (nonatomic) id <VKPolylineOverlayRouteRibbonObserver> routeRibbonObserver;
@property (nonatomic, readonly) _Bool containsTransit;
@property (nonatomic, readonly) GEOComposedRoute *composedRoute;
@property (nonatomic, readonly) GEOComposedRouteTraffic *traffic;
@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool hasFocus;
@property (nonatomic) _Bool showTraffic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id).cxx_construct;
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredLeg:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (struct DebugTreeNode)createDebugNode;
- (id)getPathsForRenderRegion:(id)arg1 shouldSnapToRoads:(_Bool)arg2 verifySnapping:(_Bool)arg3 observer:(id)arg4;
- (void)updateTraffic:(id)arg1;
- (void)_setNeedsLayout;
- (id)initWithComposedRoute:(id)arg1 traffic:(id)arg2;
- (struct _NSRange)sectionRangeForBounds:(Box_3d7e3c2c)arg1;
- (_Bool)isSnappingForSceneTiles;

@end
