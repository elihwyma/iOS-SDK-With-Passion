/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEOLocation, GEONameInfo, GEONavigationGuidanceState, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEORouteMatch, NSArray, NSData, NSString, NSXPCConnection;

@protocol GEOServerFormattedStepStringFormatter;

@interface GEONavigationProxy : NSObject

{
    NSXPCConnection *_navdConnection;
    int _navigationStartedToken;
    _Bool _hasNavigationStartedToken;
    NSString *_destinationName;
    GEOComposedRoute *_route;
    GEOLocation *_lastLocation;
    _Bool _locationUnreliable;
    GEORouteMatch *_routeMatch;
    NSString *_currentRoadName;
    _Bool _guidancePromptsEnabled;
    NSData *_activeRouteDetailsData;
    NSArray *_rideSelections;
    unsigned long long _stepIndex;
    unsigned long long _displayedStepIndex;
    GEONameInfo *_stepNameInfo;
    CDStruct_a70066d4 _positionFromSign;
    CDStruct_a70066d4 _positionFromManeuver;
    CDStruct_a70066d4 _positionFromDestination;
    unsigned long long _announcementStage;
    unsigned long long _nextAnnouncementStage;
    double _timeUntilNextAnnouncement;
    GEONavigationRouteSummary *_routeSummary;
    GEONavigationRouteTransitSummary *_transitRouteSummary;
    GEONavigationGuidanceState *_guidanceState;
    NSData *_trafficIncidentAlertDetailsData;
    int _navigationVoiceVolume;
    _Bool _isNavigatingInLowGuidance;
    _Bool _isConnectedToCarplay;
    id <GEOServerFormattedStepStringFormatter> _formatter;
}

@property (retain, nonatomic) id <GEOServerFormattedStepStringFormatter> formatter;

- (void)dealloc;
- (void)stop;
- (void)setRoute:(id)arg1;
- (void)setStepIndex:(unsigned long long)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setLocationUnreliable:(_Bool)arg1;
- (void)_closeNavdConnection;
- (void)_clearState;
- (void)setDestinationName:(id)arg1;
- (void)_sendRouteSummary;
- (void)_openNavdConnection;
- (void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2;
- (void)setNavigationState:(int)arg1;
- (void)_sendGuidanceState;
- (void)_sendCurrentRoadName;
- (void)_sendActiveRouteDetailsData;
- (void)_sendRideSelections;
- (void)_sendStepIndex;
- (void)_sendStepNameInfo;
- (void)_sendPositionFromSign;
- (void)_sendPositionFromManeuver;
- (void)_sendPositionFromDestination;
- (void)_sendTrafficIncidentAlertDetailsData;
- (void)_sendNavigationVoiceVolume;
- (void)setCurrentRoadName:(id)arg1;
- (void)_sendTransitSummary;
- (void)startWithDestinationName:(id)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setActiveRouteDetailsData:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setStepNameInfo:(id)arg1;
- (void)setClusteredSectionSelectedRideFromRoute:(id)arg1;
- (void)setPositionFromSign:(CDStruct_c3b9c2ee)arg1;
- (void)setPositionFromManeuver:(CDStruct_c3b9c2ee)arg1;
- (void)setPositionFromDestination:(CDStruct_c3b9c2ee)arg1;
- (void)setAnnouncementStage:(unsigned long long)arg1;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2;
- (void)setTrafficIncidentDetailsData:(id)arg1;
- (void)setNavigationVoiceVolume:(int)arg1;
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)triggerHaptics:(int)arg1;

@end
