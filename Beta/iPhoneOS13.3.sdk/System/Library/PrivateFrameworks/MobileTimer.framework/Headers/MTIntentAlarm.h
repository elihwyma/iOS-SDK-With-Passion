/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Intents/INObject.h>

@class NSArray, NSDateComponents, NSString;

@interface MTIntentAlarm : INObject

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDateComponents *dateComponents;
@property (copy, nonatomic) NSArray *repeatSchedule;

@end
