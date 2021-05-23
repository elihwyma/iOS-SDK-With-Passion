/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class NSString, PETDistributionEventTracker;

@interface SBIconDeleteMetric : SBAnalyticsStateMachineEventHandler

{
    NSString *_location;
    unsigned long long _presentedOptions;
    PETDistributionEventTracker *_tracker;
}

- (id)init;
- (id)_propertyValuesForTracker;

@end
