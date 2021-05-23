/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Intents/INIntentResponse.h>

@class NSArray;

@interface MTGetAlarmsIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) NSArray *alarms;

+ (id)successIntentResponseWithAlarms:(id)arg1;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
