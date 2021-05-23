/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETDistributionEventTracker;

@interface SBReachabilityMetric : SBAnalyticsStateMachineEventHandler

{
    double _activateTimestamp;
    PETDistributionEventTracker *_tracker;
    unsigned long long _activateLocation;
    unsigned long long _deactivationReason;
}

- (id)init;

@end
