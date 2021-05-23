/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVAppNavigationController.h>

@interface _TVAppNavigationController_iOS : _TVAppNavigationController

{
    _Bool _shouldFakeStatusBarVisible;
    _Bool _shouldPreventContentFromShiftingVertically;
    _Bool _originalValueForNavigationBarForceFullHeightInLandscape;
}

@property (nonatomic) _Bool shouldFakeStatusBarVisible;
@property (nonatomic) _Bool shouldPreventContentFromShiftingVertically;
@property (nonatomic) _Bool originalValueForNavigationBarForceFullHeightInLandscape;

- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)willPresentTraitsOverridingViewController;
- (void)didPresentTraitsOverridingViewController;

@end
