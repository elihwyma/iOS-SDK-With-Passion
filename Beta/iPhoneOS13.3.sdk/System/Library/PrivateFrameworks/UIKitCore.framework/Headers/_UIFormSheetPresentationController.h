/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISheetPresentationController.h>

@interface _UIFormSheetPresentationController : _UISheetPresentationController

{
    _Bool _layoutStateShouldAvoidKeyboard;
    double _keyboardYOrigin;
}

+ (long long)_initialMode;

- (void)presentationTransitionWillBegin;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (void)dismissalTransitionWillBegin;
- (_Bool)_presentationPotentiallyUnderlapsStatusBar;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (_Bool)shouldSubscribeToKeyboardNotifications;
- (void)_changeLayoutModeToAvoidKeyboard:(_Bool)arg1 withOrigin:(double)arg2;
- (_Bool)_shouldHideBottomCorner;

@end
