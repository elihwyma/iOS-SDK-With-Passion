/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKCalendarItem, NSMutableArray;

@interface EKAlarmsViewModel : NSObject

{
    _Bool _canHaveLeaveNowAlarm;
    _Bool _hasLeaveNowAlarm;
    _Bool _needsUpdate;
    EKCalendarItem *_calendarItem;
    NSMutableArray *_uiAlarms;
}

@property (retain, nonatomic) EKCalendarItem *calendarItem;
@property (retain, nonatomic) NSMutableArray *uiAlarms;
@property (nonatomic) _Bool needsUpdate;
@property (nonatomic, readonly) _Bool canHaveLeaveNowAlarm;
@property (nonatomic, readonly) _Bool hasLeaveNowAlarm;

+ (id)labelTextForIndex:(unsigned long long)arg1;

- (id)init;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (id)initWithCalendarItem:(id)arg1;
- (void)_updateAlarms;
- (id)createAlarmEditItemViewControllerWithFrame:(struct CGRect)arg1 forAlarmAtIndex:(unsigned long long)arg2;
- (void)updatedUIAlarmFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 atIndex:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_hasUIAlarmChangedFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2;
- (void)_updateLeaveNowFlags;

@end
