/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXDisplayCacheLockscreenFilter : NSObject

+ (_Bool)shouldPredictActionOnLockScreen:(id)arg1;
+ (id)indicesOfLockScreenActionsForActionPredictions:(id)arg1 criteria:(CDUnknownBlockType)arg2;
+ (id)indicesOfLockScreenActionsForActionPredictions:(id)arg1;
+ (unsigned long long)_getPredictionConfidenceForActions:(id)arg1;

@end
