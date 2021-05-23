/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIMoreListController.h>

@class UITabBarItem;

@interface SUMoreListController : UIMoreListController

{
    UITabBarItem *_tabBarItem;
}

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tabBarItem;
- (long long)ITunesStoreUIBarStyle;
- (void)_reloadPreviewOverlayVisibility;
- (void)_badgeDidChangeNotification:(id)arg1;

@end
