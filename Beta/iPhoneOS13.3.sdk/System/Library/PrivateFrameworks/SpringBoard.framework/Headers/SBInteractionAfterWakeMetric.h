/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETDistributionEventTracker, PETGoalConversionEventTracker;

@interface SBInteractionAfterWakeMetric : SBAnalyticsStateMachineEventHandler

{
    PETGoalConversionEventTracker *_unlockTracker;
    PETDistributionEventTracker *_sessionTimeTracker;
    double _screenOnTimestamp;
    struct {
        _Bool usedQuickActionButton;
        _Bool scrolledInNotifications;
        _Bool longLookedNotification;
        _Bool interactedNotifcation;
        _Bool clearedNotifcations;
        _Bool activatedCamera;
        _Bool prewarmedCameraFalsePositive;
        _Bool cameraSwipeFailed;
        _Bool activatedControlCenter;
        _Bool activatedSpotlight;
        _Bool unlockDismissed;
    } _sessionInteractions;
    _Bool _shouldReport;
}

- (id)init;
- (_Bool)_determineIfShouldReport;
- (void)_trackUnlockOpportunity;
- (void)_trackUnlockConversion:(_Bool)arg1;
- (void)_trackSessionWithDuration:(double)arg1;

@end
