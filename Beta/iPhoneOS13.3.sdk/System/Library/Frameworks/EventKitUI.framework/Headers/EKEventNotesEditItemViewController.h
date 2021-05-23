/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class CalendarNotesCell, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface EKEventNotesEditItemViewController : EKEditItemViewController

{
    UITableView *_table;
    CalendarNotesCell *_cell;
    NSString *_text;
}

@property (copy, nonatomic) NSString *noteText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)resignFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)validateAllowingAlert:(_Bool)arg1;

@end
