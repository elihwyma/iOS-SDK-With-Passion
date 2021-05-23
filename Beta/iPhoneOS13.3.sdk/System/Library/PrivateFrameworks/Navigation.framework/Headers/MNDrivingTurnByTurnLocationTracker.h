/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNTurnByTurnLocationTracker.h>

@class MNAlternateRoutesUpdater, MNTrafficIncidentAlertUpdater, MNTunnelLocationProjector, NSString;

@interface MNDrivingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker

{
    MNTunnelLocationProjector *_tunnelLocationProjector;
    MNAlternateRoutesUpdater *_alternateRoutesUpdater;
    MNTrafficIncidentAlertUpdater *_trafficIncidentAlertUpdater;
    int _detectedTransportType;
    _Bool _exitedVehicle;
    unsigned long long _vehicleExitConfidence;
    CDStruct_2c43369c _vehicleExitCoordinate;
    double _lastKnownCourse;
    double _consecutiveValidCourseCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)transportType;
- (void)stopTracking;
- (void)startTracking;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3;
- (_Bool)wantsETAUpdates;
- (id)userLocationForUpdateManager:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (_Bool)shouldProjectAlongRoute;
- (void)tracePaused;
- (void)_updateForArrival;
- (id)_contingencyRouteForLocation:(id)arg1;
- (void)didUpdateAlternateRoutes:(id)arg1 traffic:(id)arg2;
- (void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;
- (void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(_Bool)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;
- (void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 traffic:(id)arg3 forAlert:(id)arg4;
- (double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(id)arg1;
- (double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1;
- (double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1;
- (_Bool)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg1;
- (void)tunnelLocationProjector:(id)arg1 didUpdateLocation:(id)arg2;
- (id)_newMapMatcherForRoute:(id)arg1;
- (id)_overrideLocationForLocation:(id)arg1;
- (void)_updateForLocation:(id)arg1;
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (int)_detectedMotionForLocation:(id)arg1;
- (_Bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (id)_alternateRouteForOffRouteLocation:(id)arg1;

@end
