/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableView.h>

@class NSIndexPath, NSString;

@protocol CalendarEventAlarmTableDelegate, EKStyleProvider;

@interface CalendarEventAlarmTable : UITableView

{
    long long _alarmIdentifier;
    NSString *_customString;
    _Bool _immediateAlarmCreation;
    NSIndexPath *_selectedItem;
    _Bool _useAllDayAlarms;
    _Bool _shouldAllowAlarmsTriggeringAfterStartDate;
    _Bool _customSelected;
    _Bool _shouldShowLeaveNowOption;
    _Bool _leaveNowAlarmSelected;
    _Bool _eventHasTravelTime;
    id <CalendarEventAlarmTableDelegate> _alarmTableDelegate;
    id <EKStyleProvider> _styleProvider;
}

@property (weak, nonatomic) id <CalendarEventAlarmTableDelegate> alarmTableDelegate;
@property (retain, nonatomic) id <EKStyleProvider> styleProvider;
@property (nonatomic) _Bool useAllDayAlarms;
@property (nonatomic) _Bool shouldAllowAlarmsTriggeringAfterStartDate;
@property (nonatomic) _Bool customSelected;
@property (nonatomic) _Bool shouldShowLeaveNowOption;
@property (nonatomic) _Bool leaveNowAlarmSelected;
@property (nonatomic) _Bool eventHasTravelTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_selectIndexPath:(id)arg1;
- (id)_indexPathForPresetIdentifier:(long long)arg1;
- (unsigned long long)countOfPresets;
- (long long)_presetIdentifierForRow:(long long)arg1;
- (int)intervalForPresetIdentifier:(long long)arg1;
- (void)setPresetIdentifier:(long long)arg1;
- (long long)presetIdentifier;
- (void)setCustomString:(id)arg1;
- (long long)presetIdentifierAtIndex:(unsigned long long)arg1;

@end
