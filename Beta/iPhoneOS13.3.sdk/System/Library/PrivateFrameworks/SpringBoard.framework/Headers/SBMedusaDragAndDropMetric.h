/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETGoalConversionEventTracker;

@interface SBMedusaDragAndDropMetric : SBAnalyticsStateMachineEventHandler

{
    unsigned long long _activateLocation;
    PETGoalConversionEventTracker *_medusaDropTracker;
}

- (id)init;

@end
