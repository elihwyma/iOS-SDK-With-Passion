/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXAWDUtils : NSObject

+ (int)awdScoreWithScore:(double)arg1 type:(unsigned long long)arg2;
+ (double)scoreMultiplierWithInputType:(unsigned long long)arg1;
+ (id)subscoresWithDictionary:(id)arg1;
+ (int)awdConsumerSubTypeWithConsumerSubType:(unsigned char)arg1;
+ (int)awdLOITypeWithRTLOI:(long long)arg1;
+ (int)awdActionEngagementWithEngagement:(unsigned long long)arg1;
+ (int)awdActionTypeWithActionType:(unsigned long long)arg1;
+ (int)awdAppLaunchReasonWithString:(id)arg1;
+ (int)awdMotionTypeWithMotionType:(long long)arg1;
+ (id)appDataAtIndex:(unsigned long long)arg1 forSessionLogDict:(id)arg2;
+ (id)populateAwdAppPredictionSessionForSessionLogDict:(id)arg1;
+ (void)logAppPredictionDictionaryViaAWD:(id)arg1;
+ (int)awdPredictionOutcomeWithATXPredictionOutcome:(unsigned long long)arg1;
+ (int)AWDLOITypeForString:(id)arg1;

@end
