/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Intents/INIntent.h>

@class MTIntentAlarm;

@interface MTToggleAlarmIntent : INIntent

@property (nonatomic) long long operation;
@property (nonatomic) long long state;
@property (copy, nonatomic) MTIntentAlarm *alarm;

@end
