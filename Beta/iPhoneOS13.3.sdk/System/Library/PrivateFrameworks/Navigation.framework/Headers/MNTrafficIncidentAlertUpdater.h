/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNLocation, MNTrafficIncidentAlert, NSTimer;

@protocol MNTrafficIncidentAlertUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTrafficIncidentAlertUpdater : NSObject

{
    id <MNTrafficIncidentAlertUpdaterDelegate> _delegate;
    MNLocation *_lastLocation;
    MNTrafficIncidentAlert *_pendingAlert;
    MNTrafficIncidentAlert *_activeAlert;
    _Bool _isSpeakingAlert;
    int _trafficIncidentStatus;
    NSTimer *_alertRetryTimer;
}

@property (weak, nonatomic) id <MNTrafficIncidentAlertUpdaterDelegate> delegate;

- (void)dealloc;
- (void)updateForLocation:(id)arg1;
- (void)clearAlerts;
- (void)updateForReroute:(id)arg1;
- (void)updateRerouteProposalStatusForRequest:(id)arg1;
- (void)updateForAlertFromResponse:(id)arg1;
- (void)_activateAlertForLocation:(id)arg1;
- (void)_alertRetryTimerFired:(id)arg1;
- (void)_removeActiveAlert;
- (void)_updateAlertDistanceAndETA:(id)arg1;

@end
