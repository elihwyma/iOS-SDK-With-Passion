/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTableViewController.h>

@class HKWorkoutEvent, NSMutableArray;

@interface HKWorkoutEventDetailViewController : HKTableViewController

{
    NSMutableArray *_sections;
    HKWorkoutEvent *_event;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) HKWorkoutEvent *event;

- (id)initWithEvent:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)_loadSections;
- (void)_addSectionIfNotNil:(id)arg1;

@end
