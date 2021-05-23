/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProactiveML/PMLProtoBufTracker.h>

@class NSArray, PMLTrackerMockAdapter;

@interface PMLAWDEvaluationTrackerMock : PMLProtoBufTracker

{
    PMLTrackerMockAdapter *_adapter;
}

@property (readonly) NSArray *trackedEvaluations;

+ (id)mockTracker;
+ (id)mockTrackerForPlanId:(struct NSString *)arg1;

- (id)initWithModel:(id)arg1;
- (void)clearTrackedMessages;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;

@end
