/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

@class CalendarEventAlarmTable, EKAlarmsViewModel, NSArray;

__attribute__((visibility("hidden")))
@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem

{
    CalendarEventAlarmTable *_alarmTable;
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    _Bool _userChangedAlarm;
    _Bool _hasLeaveNowAlarm;
    _Bool _canHaveLeaveNowAlarm;
    EKAlarmsViewModel *_alarmsViewModel;
}

@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel;

- (id)init;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)_updateAlarms;
- (void)updateInternalTravelTimeStateForCalendarItem:(id)arg1;
- (_Bool)_calendarItemHasLeaveNowAlarm;
- (_Bool)_alarmsMatchCalendarItem;

@end
