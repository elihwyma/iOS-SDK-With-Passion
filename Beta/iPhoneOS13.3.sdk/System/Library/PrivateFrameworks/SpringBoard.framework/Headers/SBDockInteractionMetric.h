/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETGoalConversionEventTracker;

@interface SBDockInteractionMetric : SBAnalyticsStateMachineEventHandler

{
    PETGoalConversionEventTracker *_swipeInTracker;
    PETGoalConversionEventTracker *_dismissTracker;
    unsigned long long _locationAtSwipeIn;
}

- (id)init;

@end
