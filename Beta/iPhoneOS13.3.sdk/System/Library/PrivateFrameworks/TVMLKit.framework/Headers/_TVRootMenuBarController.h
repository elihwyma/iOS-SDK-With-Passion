/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UITabBarController.h>

@class IKAppTabBar, NSArray, NSString, UINavigationController, UIViewController;

@protocol IKAppNavigationController, _TVAppNavigationControllerDelegate;

@interface _TVRootMenuBarController : UITabBarController

{
    IKAppTabBar *_appTabBar;
    NSArray *_appTabBarItems;
    unsigned long long _previousSelectedIndex;
    id <_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;
}

@property (retain, nonatomic) NSArray *appTabBarItems;
@property (nonatomic) unsigned long long previousSelectedIndex;
@property (retain, nonatomic) id <_TVAppNavigationControllerDelegate> appNavigationControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (nonatomic, readonly) id <IKAppNavigationController> appNavigationController;
@property (nonatomic, readonly) IKAppTabBar *appTabBar;

- (id)init;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (id)tabBar:(id)arg1 setTabItems:(id)arg2;
- (id)selectedTabItemForTabBar:(id)arg1;
- (void)tabBar:(id)arg1 setSelectedTabItem:(id)arg2;
- (id)transientTabItemForTabBar:(id)arg1;
- (void)setAppNavigationControllersDelegate:(id)arg1;
- (unsigned long long)numberOfTabsInTabBar:(id)arg1;
- (id)tabBar:(id)arg1 tabItemAtIndex:(unsigned long long)arg2;

@end
