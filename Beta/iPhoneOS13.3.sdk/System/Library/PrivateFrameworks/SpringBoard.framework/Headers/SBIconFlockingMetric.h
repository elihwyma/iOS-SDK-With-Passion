/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETDistributionEventTracker, PETScalarEventTracker;

@interface SBIconFlockingMetric : SBAnalyticsStateMachineEventHandler

{
    PETDistributionEventTracker *_flockingDistributionTracker;
    PETScalarEventTracker *_flockingUsageTracker;
}

- (id)init;

@end
