/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

@class NSString;

@interface UIViewController (GKAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long gkFocusBubbleType;
@property (retain, nonatomic, setter=_gkSetSourcePresentingViewController:) UIViewController *_gkSourcePresentingViewController;

+ (id)_gkKeyWindowRootViewController;

- (id)_gkExtensionViewController;
- (void)_gkPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_gkModifyTopConstraintToLayoutGuideForSubview:(id)arg1;
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;
- (id)_gkPresentAlertForError:(id)arg1 title:(id)arg2 defaultMessage:(id)arg3;
- (void)_gkAddMenuButtonTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_gkRemoveViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_gkShowViewController:(id)arg1;
- (id)_gkPresentActivityViewControllerForActivityItems:(id)arg1 fromView:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_gkOriginatingViewController;
- (void)_gkPushViewController:(id)arg1 replaceCurrent:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_gkSaveStatusBarStyleAnimated:(_Bool)arg1 setToStyle:(long long)arg2;
- (void)_gkRestoreStatusBarStyle:(_Bool)arg1;
- (void)_gkForceNextContentUpdate;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkDismissActivityViewControllerAnimated:(_Bool)arg1;
- (void)_gkPresentActivityViewController:(id)arg1 fromView:(id)arg2;
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (_Bool)_gkUsesBubbleFlowModalPresentation;
- (_Bool)_gkCanBeRemovedFromParentWhenCovered;
- (void)_gkDismissViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 dismissHandler:(CDUnknownBlockType)arg4;
- (id)_gkPresentConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)_gkAlertControllerForBarButtonItem:(id)arg1;
- (id)_gkInGameUIUnavailableAlertWithRestrictionMode:(long long)arg1 dismissHandler:(CDUnknownBlockType)arg2;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;
- (id)_gkViewControllersForRestoringPopover;
- (void)_gkPresentSendDialogForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)_gkPresentChallengeVC:(id)arg1;
- (void)_gkPresentSendDialogForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3;
- (CDStruct_b207fc29)_gkBubbleFlowAdoptionInfo;
- (CDStruct_b207fc29)_gkMakeBubbleFlowAdoptionInfo;
- (id)_gkBorrowBubbleViewFromOverlayWithBubbleType:(long long)arg1 expectedFrame:(struct CGRect)arg2 andMoveTo:(id)arg3;
- (void)_gkAddPositionConstraintsForOverlayBubble:(id)arg1 center:(struct CGPoint)arg2 movingFromView:(id)arg3 toView:(id)arg4;
- (id)_gkReturnBubbleViewToOverlayWithBubbleType:(long long)arg1 expectedFrame:(struct CGRect)arg2;
- (id)_gkBorrowBubbleViewFromOverlayWithBubbleType:(long long)arg1 andMoveTo:(id)arg2;
- (id)_gkReturnBubbleViewToOverlayWithBubbleType:(long long)arg1;
- (_Bool)_gkIsTransitioningFromTheLocalPlayerViewController;
- (_Bool)_gkIsTransitioningToTheLocalPlayerViewController;
- (long long)_gkDesiredUserInterfaceIdiom;
- (_Bool)_gkShouldUsePadUI;
- (void)_gkPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_gkRepresentedObject;
- (_Bool)_gkUsesFormSheetForBubbleFlowModalPresentationOnPad;
- (void)_gkWillTransitionModalPresentationForTraitCollection:(id)arg1;
- (void)_gkDidTransitionModalPresentationForTraitCollection:(id)arg1;
- (_Bool)_gkShouldPushViewControllerInsteadOfUsingPopoverOnCompactWidthPad;
- (_Bool)_gkWantsCustomRightBarButtonItemInViewService;
- (_Bool)_gkWantsCustomRightBarButtonItemInViewService;
- (void)_gkSaveStatusBarStyle:(_Bool)arg1;
- (void)_gkSetOriginatingViewController:(id)arg1;
- (id)_gkOriginatingViewControllerAutoDetermined;
- (void)_gkPresentViewController:(id)arg1 asPopoverFromView:(id)arg2 animated:(_Bool)arg3;
- (void)_gkPopViewControllerAnimated:(_Bool)arg1;

@end
