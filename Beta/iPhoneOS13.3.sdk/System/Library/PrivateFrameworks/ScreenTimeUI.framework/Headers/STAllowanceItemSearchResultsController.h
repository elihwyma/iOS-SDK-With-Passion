/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableOrderedSet, NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface STAllowanceItemSearchResultsController : UITableViewController

{
    _Bool _hasNewSelection;
    NSMutableOrderedSet *_selectedBundleIdentifiers;
    NSMutableOrderedSet *_selectedWebDomains;
    NSArray *_allowanceItemSpecifiers;
    NSArray *_filteredAllowanceItemSpecifiers;
    NSOrderedSet *_initialWebDomains;
    NSOrderedSet *_initalBundleIdentifiers;
}

@property (copy) NSArray *filteredAllowanceItemSpecifiers;
@property _Bool hasNewSelection;
@property (copy) NSOrderedSet *initialWebDomains;
@property (copy) NSOrderedSet *initalBundleIdentifiers;
@property (retain) NSMutableOrderedSet *selectedBundleIdentifiers;
@property (retain) NSMutableOrderedSet *selectedWebDomains;
@property (copy) NSArray *allowanceItemSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;

@end
