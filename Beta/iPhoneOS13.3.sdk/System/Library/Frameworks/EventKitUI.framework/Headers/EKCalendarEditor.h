/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class EKCalendar, EKCalendarColorEditItem, EKCalendarShareesEditItem, EKEventStore, EKSource, NSArray, NSString, UITableView;

@protocol EKCalendarEditorDelegate, EKStyleProvider;

@interface EKCalendarEditor : UIViewController

{
    UITableView *_tableView;
    NSArray *_editItems;
    EKCalendarShareesEditItem *_shareesEditItem;
    EKCalendarColorEditItem *_colorEditItem;
    unsigned long long _entityType;
    EKSource *_limitedToSource;
    _Bool _isNewCalendar;
    EKEventStore *_eventStore;
    EKCalendar *_calendar;
    id <EKCalendarEditorDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
}

@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKCalendar *calendar;
@property (weak, nonatomic) id <EKCalendarEditorDelegate> delegate;
@property (nonatomic) _Bool isNewCalendar;
@property (weak, nonatomic) id <EKStyleProvider> styleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)tableView;
- (struct CGSize)preferredContentSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)isModalInPresentation;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_localeChanged;
- (void)calendarItemStartedEditing:(id)arg1;
- (id)owningNavigationController;
- (void)_eventStoreChanged:(id)arg1;
- (id)_editItems;
- (void)setupForCalendar;
- (void)_deleteClicked:(id)arg1;
- (_Bool)_shouldShowDeleteButton;
- (void)_presentValidationAlert:(id)arg1;
- (void)_deleteCalendar;
- (int)sectionForCalendarEditItem:(id)arg1;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3 limitedToSource:(id)arg4;

@end
