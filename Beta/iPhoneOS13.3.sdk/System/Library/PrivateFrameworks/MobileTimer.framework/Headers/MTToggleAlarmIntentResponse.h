/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Intents/INIntentResponse.h>

@class MTIntentAlarm;

@interface MTToggleAlarmIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;
@property (nonatomic) long long state;
@property (copy, nonatomic) MTIntentAlarm *alarm;

+ (id)unspecifiedIntentResponseWithState:(long long)arg1;
+ (id)readyIntentResponseWithState:(long long)arg1;
+ (id)continueInAppIntentResponseWithState:(long long)arg1;
+ (id)inProgressIntentResponseWithState:(long long)arg1;
+ (id)successIntentResponseWithState:(long long)arg1 alarm:(id)arg2;
+ (id)failureRequiringAppLaunchIntentResponseWithState:(long long)arg1;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
