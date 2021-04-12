//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOComposedRouteObserver-Protocol.h>
#import <VectorKit/VKRouteOverlay-Protocol.h>

@class GEOComposedRoute, GEOComposedRouteTraffic, GEOMapRegion, VKRouteLine;
@protocol VKPolylineOverlayRouteRibbonObserver;

@interface VKPolylineOverlay : NSObject <VKRouteOverlay, GEOComposedRouteObserver>
{
    struct __CFSet _observers;
    GEOComposedRoute *_composedRoute;
    BOOL _isReadyForSnapping;
    VKRouteLine *_routeRibbon;
    id <VKPolylineOverlayRouteRibbonObserver> _routeRibbonObserver;
    double _trafficTimeStamp;
    struct unique_ptr<md::TrafficSegmentsAlongRoute, std::__1::default_delete<md::TrafficSegmentsAlongRoute>> _trafficSegments;
    BOOL _selected;
    BOOL _hasFocus;
    BOOL _showTraffic;
    GEOComposedRouteTraffic *_traffic;
}

@property(nonatomic) BOOL showTraffic; // @synthesize showTraffic=_showTraffic;
@property(nonatomic) BOOL hasFocus; // @synthesize hasFocus=_hasFocus;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) id <VKPolylineOverlayRouteRibbonObserver> routeRibbonObserver; // @synthesize routeRibbonObserver=_routeRibbonObserver;
@property(nonatomic) VKRouteLine *routeRibbon; // @synthesize routeRibbon=_routeRibbon;
@property(readonly, nonatomic) double trafficTimeStamp; // @synthesize trafficTimeStamp=_trafficTimeStamp;
@property(readonly, nonatomic) GEOComposedRouteTraffic *traffic; // @synthesize traffic=_traffic;
@property(readonly, nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredLeg:(id)arg2 fromIndex:(NSUInteger)arg3 toIndex:(NSUInteger)arg4;
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;
- (struct DebugTreeNode)createDebugNode;
- (BOOL)isSnappingForSceneTiles;
- (id)getPathsForRenderRegion:(id)arg1 shouldSnapToRoads:(BOOL)arg2 verifySnapping:(BOOL)arg3 observer:(id)arg4;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (void)updateTraffic:(id)arg1;
- (NSRange)sectionRangeForBounds:(Box_3d7e3c2c)arg1;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) BOOL containsTransit;
- (void)_setNeedsLayout;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 traffic:(id)arg2;

@end

