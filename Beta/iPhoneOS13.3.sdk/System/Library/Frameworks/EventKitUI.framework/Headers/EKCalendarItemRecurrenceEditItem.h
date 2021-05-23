/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

@class EKCalendarItemRecurrenceEndCell, EKRecurrenceTypeEditItemViewController, NSDate, NSString, PreferencesValueCell;

__attribute__((visibility("hidden")))
@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem

{
    long long _repeatType;
    long long _originalRepeatType;
    NSDate *_repeatEnd;
    NSDate *_originalRepeatEnd;
    NSString *_customRepeatDescription;
    unsigned long long _disclosedSubitem;
    int _shorteningStatus;
    PreferencesValueCell *_repeatEndDateCell;
    EKRecurrenceTypeEditItemViewController *_recurrenceTypeVC;
    EKCalendarItemRecurrenceEndCell *_repeatEndPickerCell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_neverLocalizedString;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)shortenCell:(id)arg1;
- (long long)repeatTypeForRecurrenceRule:(id)arg1;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (id)stringForDate:(id)arg1;
- (id)recurrenceDate;
- (id)recurrenceTimeZone;
- (id)minRecurrenceEndDate;
- (id)_recurrenceTypeVC;
- (_Bool)_validateRecurrenceType:(id)arg1;
- (void)_updateRepeatEndDateCell;
- (_Bool)editItemViewControllerSave:(id)arg1 notify:(_Bool)arg2;
- (void)_repeatEndDateChanged:(id)arg1;
- (void)_neverRepeatButtonTapped:(id)arg1;
- (id)_repeatEndPickerCell;

@end
