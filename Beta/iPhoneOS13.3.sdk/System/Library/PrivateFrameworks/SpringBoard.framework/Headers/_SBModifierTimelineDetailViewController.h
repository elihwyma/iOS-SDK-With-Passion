/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSString, SBSwitcherModifierTimelineEntry, UITableView, _SBModifierTimelineModifierDetailViewController, _SBModifierTimelineTextViewController;

@interface _SBModifierTimelineDetailViewController : UIViewController

{
    UITableView *_tableView;
    _SBModifierTimelineModifierDetailViewController *_modifierDetailViewController;
    _SBModifierTimelineTextViewController *_actionDetailViewController;
    SBSwitcherModifierTimelineEntry *_entry;
}

@property (retain, nonatomic) SBSwitcherModifierTimelineEntry *entry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_done;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)_numberOfModifiersInStackSnapshot:(id)arg1;
- (id)_stackSnapshotAtIndex:(long long)arg1;

@end
