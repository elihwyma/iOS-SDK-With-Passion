/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class CalendarEventAlarmTable, EKCalendar, EKUIAlarm, EKUIRecurrenceAlertController, NSString;

__attribute__((visibility("hidden")))
@interface EKAlarmEditItemViewController : EKEditItemViewController

{
    CalendarEventAlarmTable *_table;
    _Bool _immediateAlarmCreation;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    _Bool _allDay;
    _Bool _shouldAllowAlarmsTriggeringAfterStartDate;
    _Bool _shouldShowLeaveNowOption;
    _Bool _eventHasTravelTime;
    EKUIAlarm *_alarm;
    EKUIAlarm *_previousAlarm;
    EKCalendar *_calendar;
    unsigned long long _alarmIndex;
}

@property (retain, nonatomic) EKUIAlarm *alarm;
@property (retain, nonatomic) EKUIAlarm *previousAlarm;
@property (retain, nonatomic) EKCalendar *calendar;
@property (nonatomic) unsigned long long alarmIndex;
@property (nonatomic) _Bool allDay;
@property (nonatomic) _Bool shouldAllowAlarmsTriggeringAfterStartDate;
@property (nonatomic) _Bool shouldShowLeaveNowOption;
@property (nonatomic) _Bool eventHasTravelTime;
@property (nonatomic) long long presetIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)tableHeaderView;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;
- (_Bool)customSelected;
- (void)_storeChanged:(id)arg1;
- (void)alarmTable:(id)arg1 didSelectRowAtIndexPath:(id)arg2 commitSelectionBlock:(CDUnknownBlockType)arg3;
- (void)setCustomString:(id)arg1;

@end
