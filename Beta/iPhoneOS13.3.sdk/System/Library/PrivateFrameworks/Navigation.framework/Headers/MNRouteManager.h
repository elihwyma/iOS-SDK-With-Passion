/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOApplicationAuditToken, GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEOETARoute, GEORouteAttributes, GEORoutePreloader, MNActiveRouteInfo, NSArray, NSMutableArray, NSString;

@interface MNRouteManager : NSObject

{
    MNActiveRouteInfo *_currentRouteInfo;
    NSMutableArray *_alternateRoutes;
    NSArray *_allRoutes;
    NSArray *_contingencyRouteSegments;
    NSArray *_previewRoutes;
    unsigned long long _selectedRouteIndex;
    GEORouteAttributes *_routeAttributes;
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsResponse *_directionsResponse;
    NSString *_requestingAppIdentifier;
    GEOComposedWaypoint *_originalDestination;
    MNActiveRouteInfo *_originalRouteInfo;
    GEORoutePreloader *_preloader;
    NSString *_tileLoaderClientIdentifier;
    GEOApplicationAuditToken *_auditToken;
    GEOComposedRoute *_originalRoute;
}

@property (nonatomic, readonly) GEOComposedRoute *currentRoute;
@property (nonatomic, readonly) MNActiveRouteInfo *currentRouteInfo;
@property (nonatomic, readonly) GEOETARoute *etaRoute;
@property (nonatomic, readonly) NSArray *alternateRoutes;
@property (nonatomic, readonly) NSArray *allRoutes;
@property (nonatomic, readonly) NSArray *contingencyRouteSegments;
@property (nonatomic, readonly) NSArray *previewRoutes;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) GEODirectionsRequest *directionsRequest;
@property (nonatomic, readonly) GEODirectionsResponse *directionsResponse;
@property (nonatomic, readonly) NSString *requestingAppIdentifier;
@property (nonatomic, readonly) GEOComposedWaypoint *originalDestination;
@property (nonatomic, readonly) GEOComposedRoute *originalRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)open;
- (void)close;
- (id)initWithAuditToken:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)_clearPreloader;
- (void)updateWithAlternateRoutes:(id)arg1;
- (void)_createContingencyRoutesForResponse:(id)arg1;
- (void)_updatePreloaderForRoute:(id)arg1;
- (void)updateWithInitialDirectionsRequest:(id)arg1 directionsResponse:(id)arg2 waypoints:(id)arg3;
- (void)updateWithPreviewRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)updateWithStartNavigationDetails:(id)arg1;
- (void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)clearCurrentRoute;

@end
