/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptNavigationBar, UINavigationController;

@interface SUScriptNavigationController : SUScriptViewController

{
    UINavigationController *_navController;
}

@property (readonly) SUScriptNavigationBar *navigationBar;
@property _Bool navigationBarHidden;
@property (copy) id toolbarHidden;
@property (readonly) SUScriptViewController *topViewController;
@property (retain) id viewControllers;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popToRootViewControllerAnimated:(_Bool)arg1;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)_setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_navigationController;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2;
- (void)didPerformBatchedInvocations;
- (void)willPerformBatchedInvocations;
- (void)_popToRootViewControllerAnimated:(_Bool)arg1;
- (void)_popViewControllerAnimated:(_Bool)arg1;
- (void)_pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_filteredViewControllers;
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1;
- (void)setTopViewController:(id)arg1;

@end
