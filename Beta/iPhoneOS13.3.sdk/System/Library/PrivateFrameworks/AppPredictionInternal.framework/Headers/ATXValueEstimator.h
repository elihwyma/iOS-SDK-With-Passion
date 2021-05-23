/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXValueEstimator : NSObject

+ (id)getIntentSessions:(id)arg1;
+ (void)_addEstimateToDictionary:(id)arg1 estimate:(double)arg2 donation:(id)arg3;
+ (_Bool)_addLazyEstimateToDictionary:(id)arg1 estimate:(id)arg2 donation:(id)arg3;
+ (id)getIntentEstimates:(id)arg1;
+ (void)_donationEstimation:(id)arg1 priorEstimates:(id)arg2;
+ (id)getEstimates:(id)arg1;
+ (id)computeAndLogValueEstimates:(id)arg1;

@end
