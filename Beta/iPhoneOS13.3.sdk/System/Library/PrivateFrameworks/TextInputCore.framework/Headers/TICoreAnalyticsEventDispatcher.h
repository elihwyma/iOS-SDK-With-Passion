/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@interface TICoreAnalyticsEventDispatcher : NSObject

+ (void)dispatchKeyboardFeatureUsageEvent:(id)arg1 userModel:(id)arg2;
+ (void)dispatchContinuousPathUsageEvents:(id)arg1 userModel:(id)arg2;
+ (void)dispatchContinuousPathCorrectionsEvents:(id)arg1 userModel:(id)arg2;
+ (void)dispatchLiveConversionUsageEvent:(id)arg1;

@end
