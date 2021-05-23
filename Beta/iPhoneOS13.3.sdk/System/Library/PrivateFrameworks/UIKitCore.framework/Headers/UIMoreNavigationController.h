/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UINavigationController.h>

@class NSArray, UIMoreListController, UIViewController;

@interface UIMoreNavigationController : UINavigationController

{
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

@property (nonatomic, readonly) UIViewController *moreListController;
@property (retain, nonatomic) NSArray *moreViewControllers;
@property (nonatomic) _Bool allowsCustomizing;
@property (nonatomic) UIViewController *displayedViewController;
@property (nonatomic) _Bool moreViewControllersChanged;

+ (Class)_moreListControllerClass;

- (id)init;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_restoreOriginalNavigationController;
- (id)_preparedViewController:(id)arg1;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_ensureChildrenHaveParentViewController;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)restoreOriginalNavigationControllerIfNecessary:(id)arg1;
- (id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned long long *)arg2;
- (void)_redisplayMoreTableView;

@end
