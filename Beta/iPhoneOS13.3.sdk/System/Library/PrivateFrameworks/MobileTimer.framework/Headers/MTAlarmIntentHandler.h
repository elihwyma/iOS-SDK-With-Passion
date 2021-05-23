/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarmManager;

@interface MTAlarmIntentHandler : NSObject

{
    MTAlarmManager *_alarmManager;
}

@property (nonatomic, readonly) MTAlarmManager *alarmManager;

+ (id)createUserInfoWithIntentName:(id)arg1 alarmIDString:(id)arg2 time:(id)arg3 label:(id)arg4;

- (id)initWithAlarmManager:(id)arg1;

@end
