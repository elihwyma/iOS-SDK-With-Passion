/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <SUViewController.h>

@class NSArray, SUSegmentedControl, UIView;

@interface MSPurchasesViewController : SUViewController

{
    long long _activeViewControllerIndex;
    UIView *_containerView;
    SUSegmentedControl *_segmentedControl;
    NSArray *_viewControllers;
}

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithSection:(id)arg1;
- (void)_segmentedControlAction:(id)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)copyArchivableContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)invalidateForMemoryPurge;
- (id)_activeViewController;
- (id)_newSegmentedControlWithPageSectionGroup:(id)arg1;
- (void)_tabConfigurationChangedNotification:(id)arg1;
- (void)_reloadSegmentedControlPlacement;
- (void)_reloadViewControllersWithSection:(id)arg1;
- (void)_showActiveViewController;
- (void)_setActiveViewControllerIndex:(long long)arg1;
- (id)_newViewControllerForPageSection:(id)arg1;

@end
