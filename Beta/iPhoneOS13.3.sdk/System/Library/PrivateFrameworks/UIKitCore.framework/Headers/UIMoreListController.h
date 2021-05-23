/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIMoreListCellLayoutManager, UITableView;

@interface UIMoreListController : UIViewController <Swift>

{
    UITableView *_table;
    _Bool _allowsCustomizing;
    _Bool _disableCustomizing;
    _Bool _hideNavigationBar;
    NSArray *_moreViewControllers;
    UIMoreListCellLayoutManager *_layoutManager;
    UIBarButtonItem *_moreEditButtonItem;
    _Bool _moreViewControllersChanged;
}

@property (retain, nonatomic) NSArray *moreViewControllers;
@property (nonatomic) _Bool allowsCustomizing;
@property (nonatomic) _Bool moreViewControllersChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)table;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)_layoutCells;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)_updateEditButton;
- (id)_targetNavigationController;
- (id)tabBarItem;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)_viewControllerWasSelected;

@end
