/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class NSArray, NSString, UITableView, WDProfile;

@interface WDTableViewController : HKTableViewController

{
    NSArray *_tableSections;
    WDProfile *_profile;
}

@property (nonatomic, readonly) NSArray *tableSections;
@property (retain, nonatomic) WDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UITableView *tableView;

+ (id)tableViewSectionClasses;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)indexPathForCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_addObservers;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)reloadSection:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)reloadTable;
- (id)_section:(long long)arg1;
- (id)_sectionAtIndexPath:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)sectionAddedChildViewController:(id)arg1;

@end
