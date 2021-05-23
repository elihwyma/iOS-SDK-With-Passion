/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, STBlueprintScheduleSimpleItem;

@interface STDeviceBedtime : NSObject

{
    _Bool _deviceBedtimeEnabled;
    _Bool _askForMoreTime;
    _Bool _shouldAllowEditing;
    STBlueprintScheduleSimpleItem *_simpleSchedule;
    NSDictionary *_scheduleByWeekdayIndex;
}

@property (nonatomic) _Bool deviceBedtimeEnabled;
@property (nonatomic) _Bool askForMoreTime;
@property (nonatomic) _Bool shouldAllowEditing;
@property (copy, readonly) NSString *scheduleText;
@property (copy) STBlueprintScheduleSimpleItem *simpleSchedule;
@property (copy) NSDictionary *scheduleByWeekdayIndex;

+ (id)defaultBedtimeSchedule;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBlueprint:(id)arg1;

@end
