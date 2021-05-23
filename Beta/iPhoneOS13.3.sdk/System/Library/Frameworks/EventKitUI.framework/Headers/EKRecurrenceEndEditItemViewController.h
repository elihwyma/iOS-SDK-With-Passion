/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class NSDate, NSString, PreferencesValueCell, UIDatePicker, UITableView, UITableViewCell;

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController

{
    PreferencesValueCell *_dateCell;
    NSDate *_preNeverEndDate;
    NSDate *_minimumEndDate;
    int _shorteningStatus;
    unsigned int _updatingPicker:1;
    UITableView *_table;
    UIDatePicker *_datePicker;
    UITableViewCell *_datePickerCell;
    NSDate *_repeatEndDate;
    NSDate *_bestInitialDate;
}

@property (copy, nonatomic) NSDate *repeatEndDate;
@property (copy, nonatomic) NSDate *bestInitialDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_neverLocalizedString;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)datePickerChanged:(id)arg1;
- (void)shortenCell:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;
- (void)applyMinimumEndDateToPicker;
- (void)updatePicker;
- (void)_localeChanged;
- (id)_stringForEndDate;
- (id)_cellForRow:(long long)arg1;
- (void)_updateSelectionForCell:(id)arg1 atRow:(long long)arg2;
- (id)_endDateStringForCurrentShorteningStatus;
- (void)setMinimumEndDate:(id)arg1;
- (_Bool)fitsPopoverWhenKeyboardActive;

@end
