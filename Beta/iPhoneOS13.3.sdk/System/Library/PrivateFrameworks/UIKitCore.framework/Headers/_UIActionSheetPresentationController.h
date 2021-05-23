/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPopoverPresentationController.h>

@class NSString, _UIActionSheetCompactPresentationController;

@protocol UIActionSheetPresentationControllerDelegate;

@interface _UIActionSheetPresentationController : UIPopoverPresentationController

{
    _Bool _dismissActionUsesShorterHeightWhenCompactVertically;
    _Bool __shouldUseCompactPresentationControllerWhenPresentedInSheet;
    _Bool _avoidsKeyboardDisabled;
    NSString *_dismissActionTitle;
    id <UIActionSheetPresentationControllerDelegate> _actionSheetDelegate;
    _UIActionSheetCompactPresentationController *_compactPresentationController;
}

@property (retain, nonatomic) _UIActionSheetCompactPresentationController *compactPresentationController;
@property (nonatomic) _Bool avoidsKeyboardDisabled;
@property (copy, nonatomic) NSString *dismissActionTitle;
@property (nonatomic) _Bool dismissActionUsesShorterHeightWhenCompactVertically;
@property (nonatomic, setter=_setShouldUseCompactPresentationControllerWhenPresentedInSheet:) _Bool _shouldUseCompactPresentationControllerWhenPresentedInSheet;
@property (weak, nonatomic) id <UIActionSheetPresentationControllerDelegate> actionSheetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_compactPresentationController;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (_Bool)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)arg1;
- (void)actionSheetCompactPresentationControllerDidDismiss:(id)arg1;
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (void)beginPseudoAlertPresentationMode;
- (void)endPseudoAlertPresentationMode;
- (id)_visualStyleForTraitCollection:(id)arg1;
- (long long)_presentationContextForViewController:(id)arg1;

@end
