/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIImageView, UIPreviewAction, UIView, UIViewController, _UIPlatterMenuDynamicsController, _UIPreviewActionSheetView, _UIPreviewQuickActionView, _UIStatesFeedbackGenerator;

@protocol _UIPreviewActionsControllerDelegate;

@interface _UIPreviewActionsController : NSObject

{
    _Bool _hasBegun;
    UIView *_containerView;
    UIView *_platterView;
    UIView *_affordanceView;
    UIImageView *_affordanceImageView;
    UIViewController *_presentedViewController;
    id <_UIPreviewActionsControllerDelegate> _delegate;
    _UIPlatterMenuDynamicsController *_platterDynamicsController;
    _UIPreviewActionSheetView *_previewActionsView;
    NSArray *_currentPreviewActionItems;
    UIPreviewAction *_leadingPreviewAction;
    UIPreviewAction *_trailingPreviewAction;
    _UIPreviewQuickActionView *_leadingPreviewActionView;
    _UIPreviewQuickActionView *_trailingPreviewActionView;
    _UIStatesFeedbackGenerator *_swipeFeedbackGenerator;
    struct CGSize _totalPanningTranslation;
    struct CGPoint _lastPanningLocation;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIView *affordanceView;
@property (retain, nonatomic) UIImageView *affordanceImageView;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic) id <_UIPreviewActionsControllerDelegate> delegate;
@property (nonatomic) _Bool hasBegun;
@property (retain, nonatomic) _UIPlatterMenuDynamicsController *platterDynamicsController;
@property (retain, nonatomic) _UIPreviewActionSheetView *previewActionsView;
@property (copy, nonatomic) NSArray *currentPreviewActionItems;
@property (retain, nonatomic) UIPreviewAction *leadingPreviewAction;
@property (retain, nonatomic) UIPreviewAction *trailingPreviewAction;
@property (retain, nonatomic) _UIPreviewQuickActionView *leadingPreviewActionView;
@property (retain, nonatomic) _UIPreviewQuickActionView *trailingPreviewActionView;
@property (nonatomic) struct CGPoint lastPanningLocation;
@property (nonatomic) struct CGSize totalPanningTranslation;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator;
@property (nonatomic, readonly) struct CGRect frameForActionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)actionsControllerWithContainerView:(id)arg1 platterView:(id)arg2 presentedViewController:(id)arg3 delegate:(id)arg4;

- (void)dealloc;
- (void)_dismissWithAction:(id)arg1;
- (_Bool)_shouldDismiss;
- (void)_configureFeedbackGenerator;
- (void)_activateFeedbackIfNeeded;
- (void)_deactivateFeedbackIfNeeded;
- (struct CGPoint)centerForPlatterWithMenuViewDismissed;
- (struct CGPoint)centerForMenuDismissed;
- (struct CGPoint)centerForPlatterWithMenuViewPresented;
- (double)minimumSpacingBetweenPlatterAndMenu;
- (void)translationDidUpdateForPlatterMenuDynamicsController:(id)arg1;
- (struct CGPoint)centerForMenuPresented;
- (void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1;
- (id)leadingSwipeActionView;
- (id)trailingSwipeActionView;
- (struct CGPoint)initialCenterForLeadingSwipeActionView;
- (struct CGPoint)initialCenterForTrailingSwipeActionView;
- (void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(struct CGPoint)arg3;
- (void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(_Bool)arg1 finalSelectionState:(_Bool)arg2;
- (_Bool)platterPanned;
- (void)setLeadingSwipeActionViewSelected:(_Bool)arg1;
- (void)setTrailingSwipeActionViewSelected:(_Bool)arg1;
- (void)_actionsControllerCommonInit;
- (id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg1;
- (void)_memoizePreviewActionViews;
- (void)_configurePlatterDynamicsController;
- (_Bool)_hasPreviewSwipeActions;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 presentedViewController:(id)arg3 delegate:(id)arg4;
- (_Bool)_hasSelectedSwipeAction;
- (void)_dismissForSelectedSwipeAction;
- (void)_setAffordanceAlpha:(double)arg1 withDuration:(double)arg2 hideOnCompletion:(_Bool)arg3;
- (void)_hideChromeAndSetAffordanceHidden:(_Bool)arg1;
- (double)_platterOffsetDistance;
- (_Bool)_isSwipeActionVisible;
- (void)_updateAffordanceIfNecessary;
- (struct CGPoint)_centerForMenuDismissedForActionSheet:(id)arg1;
- (void)_presentSubactionsForActionGroup:(id)arg1;
- (double)_quickActionSelectionOffset;
- (double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)arg1;
- (void)_disablePlatterController;
- (_Bool)_previewActionsSheetIsVisible;
- (struct CGPoint)_centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg1;
- (struct CGPoint)_centerForMenuPresentedForActionSheet:(id)arg1;
- (_Bool)_platterIsInInitialPositionMostly;
- (struct CGPoint)_applyLayoutAdjustmentsForManagedViewWithPosition:(struct CGPoint)arg1;
- (struct CGRect)_initialPlatterFrame;
- (void)_updateSwipeActionsState;
- (void)beginPanningAtLocation:(struct CGPoint)arg1;
- (void)updatePanningLocation:(struct CGPoint)arg1;
- (void)endPanningAtLocation:(struct CGPoint)arg1;
- (void)dismissPreviewActionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)flashScrollAffordance;

@end
