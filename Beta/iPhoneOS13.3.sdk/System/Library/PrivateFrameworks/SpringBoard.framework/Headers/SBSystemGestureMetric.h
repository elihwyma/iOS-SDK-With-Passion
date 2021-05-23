/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETGoalConversionEventTracker;

@interface SBSystemGestureMetric : SBAnalyticsStateMachineEventHandler

{
    PETGoalConversionEventTracker *_goalTracker;
    unsigned long long _beganLocation;
}

- (id)initForType:(unsigned long long)arg1 parentMetric:(id)arg2;

@end
