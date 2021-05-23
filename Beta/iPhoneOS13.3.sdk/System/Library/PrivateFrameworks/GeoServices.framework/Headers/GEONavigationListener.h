/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol GEONavigationListenerDelegate, OS_dispatch_queue;

@interface GEONavigationListener : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _navigationStartedToken;
    int _navigationStoppedToken;
    int _navigationRoutePreviewToken;
    id <GEONavigationListenerDelegate> _delegate;
    CDUnknownBlockType _routeSummaryUpdatedHandler;
    CDUnknownBlockType _transitSummaryUpdatedHandler;
    CDUnknownBlockType _guidanceStateUpdatedHandler;
    CDUnknownBlockType _activeRouteDetailsDataUpdatedHandler;
    CDUnknownBlockType _stepIndexUpdatedHandler;
    CDUnknownBlockType _rideSelectionsUpdatedHandler;
    CDUnknownBlockType _positionFromSignUpdatedHandler;
    CDUnknownBlockType _positionFromManeuverUpdatedHandler;
    CDUnknownBlockType _positionFromDestinationUpdatedHandler;
    CDUnknownBlockType _trafficIncidentAlertDetailsDataUpdatedHandler;
    CDUnknownBlockType _navigationVoiceVolumeUpdatedHandler;
    unsigned long long _navigationState;
    int _transportType;
    NSString *_currentRoadName;
}

@property (weak, nonatomic) id <GEONavigationListenerDelegate> delegate;
@property (nonatomic, readonly) unsigned long long navigationState;
@property (nonatomic, readonly) NSString *currentRoadName;
@property (copy, nonatomic) CDUnknownBlockType routeSummaryUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType transitSummaryUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType guidanceStateUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType activeRouteDetailsDataUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType stepIndexUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType rideSelectionsUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType positionFromSignUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType positionFromManeuverUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType positionFromDestinationUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType trafficIncidentAlertDetailsDataUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType navigationVoiceVolumeUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)_open;
- (void)_close;
- (void)requestRouteSummary;
- (void)_notifyWithRouteSummary:(id)arg1;
- (void)requestTransitSummary;
- (void)_notifyWithTransitSummary:(id)arg1;
- (void)requestGuidanceState;
- (void)_notifyWithGuidanceState:(id)arg1;
- (void)requestActiveRouteDetailsData;
- (void)_notifyWithActiveRouteDetailsData:(id)arg1;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)_notifyWithStepIndex:(unsigned long long)arg1;
- (void)_notifyWithStepNameInfo:(id)arg1;
- (void)requestRideSelections;
- (void)_notifyWithRideSelections:(id)arg1;
- (void)requestPositionFromSign;
- (void)_notifyWithPositionFromSign:(CDStruct_c3b9c2ee)arg1;
- (void)requestPositionFromManeuver;
- (void)_notifyWithPositionFromManeuver:(CDStruct_c3b9c2ee)arg1;
- (void)requestPositionFromDestination;
- (void)_notifyWithPositionFromDestination:(CDStruct_c3b9c2ee)arg1;
- (void)requestTrafficIncidentDetailsData;
- (void)_notifyWithTrafficIncidentDetailsData:(id)arg1;
- (void)requestNavigationVoiceVolume;
- (void)_notifyWithNavigationVoiceVolume:(int)arg1;
- (void)_connectToDaemonIfNeeded;
- (void)navigationStateChanged:(unsigned long long)arg1 transportType:(int)arg2;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1;
- (void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1;
- (void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1;
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1;
- (void)routeSummaryUpdatedWithStepIndexData:(id)arg1;
- (void)routeSummaryUpdatedWithStepNameInfoData:(id)arg1;
- (void)routeSummaryUpdatedWithRideSelectionData:(id)arg1;
- (void)routeSummaryUpdatedWithPositionFromSignData:(id)arg1;
- (void)routeSummaryUpdatedWithPositionFromManeuverData:(id)arg1;
- (void)routeSummaryUpdatedWithPositionFromDestinationData:(id)arg1;
- (void)routeSummaryUpdatedWithTrafficIncidentAlertDetailsData:(id)arg1;
- (void)navigationUpdatedWithVoiceVolumeData:(id)arg1;
- (void)currentRoadNameUpdated:(id)arg1;
- (unsigned long long)_listenerStateForSessionState:(unsigned long long)arg1;

@end
