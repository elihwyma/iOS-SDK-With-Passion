/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class NSString, PETGoalConversionEventTracker;

@interface SBIconLaunchMetric : SBAnalyticsStateMachineEventHandler

{
    PETGoalConversionEventTracker *_trackerV1;
    PETGoalConversionEventTracker *_trackerV2;
    _Bool _isFolder;
    NSString *_iconLocationValue;
    unsigned long long _layoutLocation;
}

- (id)init;
- (void)_processAndReportTappedEventPayload:(id)arg1;
- (void)_processAndReportLaunchedEventPayload:(id)arg1;

@end
