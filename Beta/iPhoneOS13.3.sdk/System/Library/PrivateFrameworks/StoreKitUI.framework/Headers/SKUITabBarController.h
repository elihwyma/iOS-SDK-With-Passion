/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITabBarController.h>

@class NSString, SKUIFloatingOverlayView, UIViewController;

@interface SKUITabBarController : UITabBarController

{
    SKUIFloatingOverlayView *_floatingOverlayView;
    UIViewController *_floatingOverlayViewController;
    _Bool _sizeTransitionInProgress;
    long long _forcedUserInterfaceStyle;
}

@property (nonatomic) _Bool sizeTransitionInProgress;
@property (nonatomic, readonly) _Bool containsTransientViewControllerOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)_moreNavigationControllerClass;

- (id)init;
- (id)traitCollection;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)moreNavigationController;
- (void)setTransientViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setSelectedViewController:(id)arg1;
- (long long)preferredUserInterfaceStyle;
- (void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (long long)forcedUserInterfaceStyle;
- (void)setForcedUserInterfaceStyle:(long long)arg1;
- (void)setFloatingOverlayViewController:(id)arg1 animated:(_Bool)arg2;
- (id)floatingOverlayViewController;
- (void)_layoutFloatingOverlayView;
- (void)cancelTransientViewController:(id)arg1;

@end
