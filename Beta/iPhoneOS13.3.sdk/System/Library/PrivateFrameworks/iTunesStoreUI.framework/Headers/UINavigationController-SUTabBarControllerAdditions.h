/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UINavigationController.h>

@interface UINavigationController (SUTabBarControllerAdditions)

- (void)invalidate;
- (unsigned long long)indexOfViewController:(id)arg1;
- (void)_setStoreBarStyle:(long long)arg1 clientInterface:(id)arg2;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)firstViewController;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;

@end
