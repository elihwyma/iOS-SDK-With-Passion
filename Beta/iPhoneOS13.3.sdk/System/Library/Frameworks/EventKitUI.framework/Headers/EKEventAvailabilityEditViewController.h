/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class NSMutableArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityEditViewController : EKEditItemViewController

{
    long long _availability;
    unsigned long long _supportedAvailabilities;
    NSMutableArray *_choices;
    UITableView *_table;
}

@property (nonatomic) long long availability;
@property (nonatomic) unsigned long long supportedAvailabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_selectRow:(unsigned long long)arg1;

@end
