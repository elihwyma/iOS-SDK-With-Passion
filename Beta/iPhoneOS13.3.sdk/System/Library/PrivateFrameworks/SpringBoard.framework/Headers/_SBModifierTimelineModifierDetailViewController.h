/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSString, SBSwitcherModifierStackSnapshot, UITableView, _SBModifierTimelineTextViewController;

@interface _SBModifierTimelineModifierDetailViewController : UIViewController

{
    UITableView *_tableView;
    _SBModifierTimelineTextViewController *_textViewController;
    SBSwitcherModifierStackSnapshot *_stackSnapshot;
}

@property (retain, nonatomic) SBSwitcherModifierStackSnapshot *stackSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
