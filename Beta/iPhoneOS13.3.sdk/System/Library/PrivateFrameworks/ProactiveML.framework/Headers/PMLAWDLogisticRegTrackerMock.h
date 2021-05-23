/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProactiveML/PMLProtoBufTracker.h>

@class NSArray, PMLTrackerMockAdapter;

@interface PMLAWDLogisticRegTrackerMock : PMLProtoBufTracker

{
    PMLTrackerMockAdapter *_adapter;
}

@property (readonly) NSArray *trackedGradients;
@property (readonly) NSArray *trackedWeights;

+ (id)mockTracker;
+ (id)mockTrackerForPlanId:(struct NSString *)arg1;

- (id)initWithModel:(id)arg1;
- (void)clearTrackedMessages;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;

@end
