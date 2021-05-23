/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class CLLocation, GEOAutomobileOptions, GEOComposedWaypoint, MNRouteUpdateFreshness, MNTimeballService, MapsSuggestionsETARequirements, MapsSuggestionsNetworkRequester, NSLock, NSMutableDictionary, NSString;

@protocol MapsSuggestionsPredictor, OS_dispatch_queue;

@interface MapsSuggestionsETARequester : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_currentLocationUsed;
    GEOComposedWaypoint *_currentLocationWaypoint;
    NSMutableDictionary *_waypoints;
    NSLock *_waypointsLock;
    id <MapsSuggestionsPredictor> _transportModePredictor;
    int _forcedTransportMode;
    MapsSuggestionsETARequirements *_etaRequirements;
    MNTimeballService *_timeballService;
    MNRouteUpdateFreshness *_updateFreshness;
    int _mapType;
    MapsSuggestionsNetworkRequester *_requester;
    GEOAutomobileOptions *_automobileOptions;
}

@property (weak) MapsSuggestionsNetworkRequester *requester;
@property (retain) GEOAutomobileOptions *automobileOptions;
@property int mapType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (_Bool)_requestWaypointForCurrentLocation:(id)arg1;
- (_Bool)_keepExistingWaypointsForEntries:(struct NSArray *)arg1;
- (_Bool)_requestWaypointsForEntries:(struct NSArray *)arg1;
- (_Bool)_requestETAsToEntries:(struct NSArray *)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_old_requestETAsToEntries:(struct NSArray *)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_timeball_requestETAsToEntries:(struct NSArray *)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_determineTransportTypeFromOrigin:(id)arg1 toEntry:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_transportTypesForDestinationEntries:(id)arg1;
- (id)initWithNetworkRequester:(id)arg1 transportModePredictor:(id)arg2 requirements:(id)arg3;
- (_Bool)ETAsFromLocation:(id)arg1 toEntries:(struct NSArray *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)forceTransportType:(int)arg1;

@end
