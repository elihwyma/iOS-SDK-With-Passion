/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface _APRFeedback : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)resetData;
- (void)decayCounts;
- (void)intentType:(id)arg1 experience:(unsigned long long)arg2 feedbackSource:(unsigned long long)arg3 engagementType:(unsigned long long)arg4 launchedBundleId:(id)arg5 predictedBundleIds:(id)arg6;

@end
