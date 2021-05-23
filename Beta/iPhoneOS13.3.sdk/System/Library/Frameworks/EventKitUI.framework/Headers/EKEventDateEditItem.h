/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@class NSDate, NSDateComponents, NSString, NSTimeZone, PreferencesTwoPartValueCell, UIDatePicker, UITableViewCell;

@protocol EKEventDateEditItemDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDateEditItem : EKEventEditItem

{
    NSDateComponents *_startComponents;
    NSDateComponents *_endComponents;
    _Bool _allDay;
    NSTimeZone *_startTimeZone;
    NSTimeZone *_endTimeZone;
    _Bool _showTimeZones;
    PreferencesTwoPartValueCell *_startDateCell;
    PreferencesTwoPartValueCell *_endDateCell;
    UITableViewCell *_allDayCell;
    UITableViewCell *_startTimeZoneCell;
    UITableViewCell *_endTimeZoneCell;
    UITableViewCell *_startDatePickerCell;
    UITableViewCell *_endDatePickerCell;
    long long _selectedSubitem;
    UIDatePicker *_startDatePicker;
    UIDatePicker *_endDatePicker;
    _Bool _endTimeWasMessedUp;
    _Bool _changingDate;
    int _shorteningStatus;
    _Bool _pushingTZController;
    _Bool _showsAllDay;
    _Bool _proposedTime;
    NSDate *_pendingProposedTime;
    id <EKEventDateEditItemDelegate> _eventDateEditItemDelegate;
}

@property (nonatomic) _Bool showsAllDay;
@property (nonatomic) _Bool proposedTime;
@property (retain, nonatomic) NSDate *pendingProposedTime;
@property (weak, nonatomic) id <EKEventDateEditItemDelegate> eventDateEditItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_timeZoneLocalizedString;

- (id)init;
- (void)dealloc;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)isInline;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)refreshFromCalendarItemAndStore;
- (void)_setStartTimeZone:(id)arg1;
- (void)_setEndTimeZone:(id)arg1;
- (id)_calendarForEventComponents:(_Bool)arg1;
- (void)_setEndDate:(id)arg1;
- (void)_setAllDay:(_Bool)arg1;
- (void)_adjustStartAndEndComponentsForEventIfNeeded:(id)arg1;
- (void)_refreshDatePicker;
- (void)_resetStartString:(_Bool)arg1 endString:(_Bool)arg2;
- (void)_updateDateColors;
- (void)_updateTimeWidths;
- (void)_updateDatePickerAnimated:(_Bool)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)_shouldShowTimeZone;
- (void)_allDayChanged:(id)arg1;
- (void)_datePickerChanged:(id)arg1;
- (void)_datePickerDoubleTapped:(id)arg1;
- (id)_newDatePicker;
- (void)_adjustDatePickerFrame:(id)arg1 toFillEnclosingViewWidth:(id)arg2;
- (id)_dateComponentsInSystemCalendarFromDate:(id)arg1;
- (id)_dateInSystemCalendarFromComponents:(id)arg1;
- (long long)_subitemForRow:(long long)arg1;
- (id)_startDateCell;
- (id)_endDateCell;
- (id)_allDayCell;
- (id)_startTimeZoneCell;
- (id)_endTimeZoneCell;
- (id)_timeZoneDescription:(id)arg1;
- (id)_startDatePickerCell;
- (id)_endDatePickerCell;
- (void)_hideInlineDateControls;
- (long long)_rowForSubitem:(long long)arg1;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (void)_pickNextReasonableTime;
- (void)_validateTimezones;
- (id)_dateFromComponents:(id)arg1 timeZone:(id)arg2;
- (_Bool)_endDateIsBeforeStartDate;
- (void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2;
- (void)timeZoneViewControllerDidCancel:(id)arg1;
- (void)shortenCell:(id)arg1;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)forceRefreshInviteesItemOnSave;
- (_Bool)forceRefreshLocationItemOnSave;
- (void)endInlineEditing;

@end
