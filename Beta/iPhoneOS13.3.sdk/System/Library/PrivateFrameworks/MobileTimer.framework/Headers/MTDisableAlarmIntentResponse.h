/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Intents/INIntentResponse.h>

@interface MTDisableAlarmIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
