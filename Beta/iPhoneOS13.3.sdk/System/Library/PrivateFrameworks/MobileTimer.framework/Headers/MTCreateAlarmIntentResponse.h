/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Intents/INIntentResponse.h>

@class MTIntentAlarm;

@interface MTCreateAlarmIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) MTIntentAlarm *alarm;

+ (id)successIntentResponseWithAlarm:(id)arg1;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
