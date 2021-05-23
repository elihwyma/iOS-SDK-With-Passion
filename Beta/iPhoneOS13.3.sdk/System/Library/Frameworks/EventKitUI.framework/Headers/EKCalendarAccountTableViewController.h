/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewController.h>

@class EKCalendar, EKEventStore, NSMutableArray, NSString;

@interface EKCalendarAccountTableViewController : UITableViewController

{
    NSString *_currentSourceIdentifier;
    EKEventStore *_eventStore;
    EKCalendar *_calendar;
}

@property (weak) EKEventStore *eventStore;
@property (weak) EKCalendar *calendar;
@property (readonly) NSMutableArray *accounts;
@property (retain) NSString *currentSourceIdentifier;

- (void)loadView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithCalendar:(id)arg1 andStore:(id)arg2;

@end
