/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUCardViewController, HUForceInterpolatedPressGestureRecognizer, HUGridActionSetTitleAndDescriptionView, HUGridServiceCell, HUGridServiceCellTextView, HUIconView, HUItemTableViewController, HUPressedItemContext, HUQuickControlContainerViewController, HUQuickControlNavigationController, HUQuickControlPresentationContext, NSMapTable, NSMutableSet, NSString, UIImpactFeedbackGenerator, UILabel, UITapGestureRecognizer, UITraitCollection, UIView, UIViewController, UIVisualEffectView, _UIClickPresentationInteraction;

@protocol HUQuickControlPresentationCoordinatorDelegate, NACancelable;

@interface HUQuickControlPresentationCoordinator : NSObject

{
    HUCardViewController *_cardViewController;
    HUQuickControlPresentationContext *_presentationContext;
    HUQuickControlContainerViewController *_quickControlViewController;
    HUGridServiceCell *_pressedTile;
    UIView *_targetView;
    id <HUQuickControlPresentationCoordinatorDelegate> _delegate;
    HUQuickControlNavigationController *_cardNavigationController;
    HUItemTableViewController *_settingsViewController;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    HUForceInterpolatedPressGestureRecognizer *_pressGestureRecognizer;
    NSMutableSet *_mutuallyExclusiveGestureRecognizers;
    id <NACancelable> _pressGestureActiveTimerCancellationToken;
    NSMapTable *_pressedItemContexts;
    _UIClickPresentationInteraction *_presentationInteraction;
    UIVisualEffectView *_pressedTileBlurEffectView;
    UIView *_pressedTilePrerenderedView;
    HUIconView *_transitionIconView;
    HUIconView *_transitionIconViewVibrant;
    UILabel *_transitionPrimaryLabel;
    HUGridServiceCellTextView *_transitionTextView;
    HUGridServiceCellTextView *_transitionTextViewVibrant;
    UIVisualEffectView *_transitionTextViewVibrantEffectView;
    HUGridActionSetTitleAndDescriptionView *_transitionTitleAndDescriptionView;
    UIVisualEffectView *_transitionTitleAndDescriptionVibrantEffectView;
    UILabel *_transitionSecondaryLabel;
    UIVisualEffectView *_transitionSecondaryLabelVibrantEffectView;
    UIVisualEffectView *_transitionBlurView;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

@property (retain, nonatomic) HUQuickControlPresentationContext *presentationContext;
@property (retain, nonatomic) HUQuickControlNavigationController *cardNavigationController;
@property (retain, nonatomic) HUCardViewController *cardViewController;
@property (retain, nonatomic) HUQuickControlContainerViewController *quickControlViewController;
@property (retain, nonatomic) HUItemTableViewController *settingsViewController;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (retain, nonatomic) HUForceInterpolatedPressGestureRecognizer *pressGestureRecognizer;
@property (nonatomic, readonly) NSMutableSet *mutuallyExclusiveGestureRecognizers;
@property (retain, nonatomic) id <NACancelable> pressGestureActiveTimerCancellationToken;
@property (nonatomic, readonly) NSMapTable *pressedItemContexts;
@property (nonatomic, readonly) HUPressedItemContext *activePressedItemContext;
@property (retain, nonatomic) _UIClickPresentationInteraction *presentationInteraction;
@property (retain, nonatomic) UIVisualEffectView *pressedTileBlurEffectView;
@property (retain, nonatomic) UIView *pressedTilePrerenderedView;
@property (retain, nonatomic) HUIconView *transitionIconView;
@property (retain, nonatomic) HUIconView *transitionIconViewVibrant;
@property (retain, nonatomic) UILabel *transitionPrimaryLabel;
@property (retain, nonatomic) HUGridServiceCellTextView *transitionTextView;
@property (retain, nonatomic) HUGridServiceCellTextView *transitionTextViewVibrant;
@property (retain, nonatomic) UIVisualEffectView *transitionTextViewVibrantEffectView;
@property (retain, nonatomic) HUGridActionSetTitleAndDescriptionView *transitionTitleAndDescriptionView;
@property (retain, nonatomic) UIVisualEffectView *transitionTitleAndDescriptionVibrantEffectView;
@property (retain, nonatomic) UILabel *transitionSecondaryLabel;
@property (retain, nonatomic) UIVisualEffectView *transitionSecondaryLabelVibrantEffectView;
@property (retain, nonatomic) UIVisualEffectView *transitionBlurView;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) HUGridServiceCell *pressedTile;
@property (weak, nonatomic, readonly) UIView *targetView;
@property (weak, nonatomic) id <HUQuickControlPresentationCoordinatorDelegate> delegate;
@property (nonatomic, readonly, getter=isQuickControlPresented) _Bool quickControlIsPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)presentationControllerWillDismiss:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (_Bool)_isRTL;
- (id)_sheetPresentationControllerViewForTouchContinuation:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_handlePressGesture:(id)arg1;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (_Bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (_Bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)_handleSingleTapGesture:(id)arg1;
- (id)dismissQuickControlAnimated:(_Bool)arg1 wasDismissed:(_Bool *)arg2;
- (id)presentQuickControlWithContext:(id)arg1 animated:(_Bool)arg2;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (id)initWithTargetView:(id)arg1 delegate:(id)arg2;
- (void)addMutuallyExclusiveGestureRecognizer:(id)arg1;
- (void)_prepareForTapticFeedback;
- (void)_actuateTapticFeedback;
- (id)cardViewControllerRequestingDismissal:(id)arg1;
- (_Bool)hasDetailsActionForQuickControlViewController:(id)arg1 item:(id)arg2;
- (double)quickControlViewController:(id)arg1 sourceViewInitialScaleForPresentation:(_Bool)arg2;
- (id)quickControlViewController:(id)arg1 applierForSourceViewTransitionWithAnimationSettings:(id)arg2 presenting:(_Bool)arg3;
- (id)detailsViewControllerForQuickControlViewController:(id)arg1 item:(id)arg2;
- (void)quickControlViewControllerWillDismissDetailsViewController:(id)arg1 shouldDismissQuickControl:(_Bool)arg2;
- (void)quickControlViewControllerDidTapDetailsButton:(id)arg1;
- (void)_installGestureRecognizer;
- (void)_validatePresentationContext:(id)arg1;
- (void)_handleMutuallyExclusiveGesture:(id)arg1;
- (void)_configureInitialStateForPressedItemContext:(id)arg1 userInitiated:(_Bool)arg2;
- (id)_createPressedContextForItem:(id)arg1 userInitiated:(_Bool)arg2;
- (void)_initiateProgrammaticBounceForItem:(id)arg1;
- (id)_gestureInstallationView;
- (void)_preparePressedItemContextForItem:(id)arg1 startApplier:(_Bool)arg2;
- (void)_pressGestureDidBeginWithLocation:(struct CGPoint)arg1;
- (void)_pressGestureDidEnd:(_Bool)arg1;
- (void)_pressGestureDidBecomeActive;
- (id)_beginControlPresentationAnimated:(_Bool)arg1;
- (void)_updateOverrideAttributesWithScale:(double)arg1 forItem:(id)arg2;
- (void)removeAllTransitionSubviews;
- (_Bool)isTileOff;
- (_Bool)isActionSetTile;
- (unsigned long long)iconSizeInActionSetTile;
- (struct CGRect)iconFrameInActionSetTile;
- (unsigned long long)iconSizeInTile;
- (struct CGRect)iconFrameInTile;
- (struct CGRect)primaryLabelFrameInActionSetTile;
- (struct CGRect)primaryLabelFrameInTile;
- (struct CGRect)secondaryLabelFrameInActionSetTile;
- (struct CGRect)secondaryLabelFrameInTile;
- (void)_createTransitionViewsForPresentation;
- (unsigned long long)iconSizeInNavigationBar;
- (struct CGRect)iconFrameInNavigationBar;
- (struct CGRect)primaryLabelFrameInNavigationBar;
- (struct CGRect)secondaryLabelFrameInNavigationBar;
- (struct CGRect)titleAndDescriptionViewFrameInActionSetTile;
- (void)_createTransitionViewsForDismissal;
- (void)_restoreOriginalTile;
- (void)_cleanupForQuickControlDismissal;
- (void)_pressedStateDidEndForItem:(id)arg1 clearPresentationContext:(_Bool)arg2;
- (void)_updateOverrideAttributesWithTransform:(struct CGAffineTransform)arg1 alpha:(double)arg2 forItem:(id)arg3;
- (_Bool)_allowsCardPresentationWithOnlySettings;
- (_Bool)_shouldCancelPresentation;
- (void)_logUserMetricsAfterPress;
- (id)_prepareSettingsViewController;
- (id)dismissQuickControlAnimated:(_Bool)arg1;
- (id)_dismissQuickControlViewControllerAnimated:(_Bool)arg1;
- (id)_dismissChildViewController;
- (id)_dismissServiceDetailsViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_dismissCardViewController;
- (void)removeMutuallyExclusiveGestureRecognizer:(id)arg1;
- (void)playBounceForItem:(id)arg1;
- (_Bool)shouldDismissWholePresentationHierarchy;

@end
