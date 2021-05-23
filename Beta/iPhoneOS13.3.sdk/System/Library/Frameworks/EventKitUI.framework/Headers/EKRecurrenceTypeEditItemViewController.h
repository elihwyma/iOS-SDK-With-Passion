/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class EKCalendarItem, EKRecurrenceRule, EKUICustomRecurrenceViewController, NSDate, NSIndexPath, NSString, UITableView;

@protocol EKRecurrenceTypeEditItemViewControllerDelegate;

@interface EKRecurrenceTypeEditItemViewController : EKEditItemViewController

{
    NSString *_summaryString;
    long long _repeatType;
    UITableView *_table;
    NSIndexPath *_checkedItem;
    EKRecurrenceRule *_recurrenceRule;
    NSDate *_suggestedStartDate;
    id <EKRecurrenceTypeEditItemViewControllerDelegate> _delegate;
    EKUICustomRecurrenceViewController *_customRecurrenceViewController;
    EKCalendarItem *_calendarItem;
}

@property (retain) EKUICustomRecurrenceViewController *customRecurrenceViewController;
@property (nonatomic) long long repeatType;
@property (retain) EKCalendarItem *calendarItem;
@property (retain, nonatomic) EKRecurrenceRule *recurrenceRule;
@property (retain, nonatomic) NSDate *suggestedStartDate;
@property (weak) id <EKRecurrenceTypeEditItemViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;
- (void)_checkItemAtIndexPath:(id)arg1;
- (id)_recurrenceCellForIndexPath:(id)arg1;
- (void)setRecurrenceRuleFromRepeatType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3;

@end
