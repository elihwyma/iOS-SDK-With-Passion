/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSPointerArray, NSString, UIFont, UIInterfaceActionGroup, UIInterfaceActionHighlightAttributes, UIInterfaceActionRepresentationView, UIInterfaceActionSelectionTrackingController, UIInterfaceActionSeparatorAttributes, UIInterfaceActionVisualStyle, UILongPressGestureRecognizer, _UIContentConstraintsLayoutGuide, _UIInterfaceActionRepresentationsSequenceView;

@protocol UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionVisualStyleProviding, UISeparatorDisplaying;

@interface UIInterfaceActionGroupView : UIView <Swift>

{
    _Bool _needsUpdateTopLevelViewsArrangement;
    _Bool _needsUpdateActionSequenceViewArrangement;
    _Bool _needsInitialViewLoading;
    _Bool _isSettingVisualStyle;
    UIInterfaceActionVisualStyle *_activeTestingVisualStyle;
    NSString *_cachedSizeCategory;
    _Bool _springLoaded;
    _Bool _showsSeparatorAboveActions;
    _Bool _scrubbingEnabled;
    _Bool _drawsBackground;
    _Bool _alignActionSeparatorLeadingEdgeWithContent;
    id <UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
    UIInterfaceActionSelectionTrackingController *_actionSelectionController;
    UIInterfaceActionGroup *_actionGroup;
    id <UIInterfaceActionHandlerInvocationDelegate> _actionHandlerInvocationDelegate;
    long long _presentationStyle;
    NSArray *_allowedActionLayoutAxisByPriority;
    long long _actionLayoutAxis;
    UIInterfaceActionVisualStyle *_visualStyle;
    UIInterfaceActionVisualStyle *_appliedVisualStyle;
    _UIContentConstraintsLayoutGuide *_contentGuide;
    UIView *_backgroundView;
    UIView *_topLevelItemsView;
    NSArray *_topLevelViewArrangementConstraints;
    NSMutableArray *_arrangedScrollableHeaderViews;
    UIView<UISeparatorDisplaying> *_actionSequenceTopSeparatorView;
    NSLayoutConstraint *_actionSequenceViewWidthAnchoredToConstantConstraint;
    NSLayoutConstraint *_actionSequenceViewWidthAnchoredToContentGuideConstraint;
    NSPointerArray *_weakSimultaneouslyPresentedGroupViews;
    _UIInterfaceActionRepresentationsSequenceView *_actionSequenceView;
    UILongPressGestureRecognizer *_actionSelectionGestureRecognizer;
    double _requiredActionRepresentationWidth;
    UIInterfaceActionRepresentationView *_preferredActionRepresentation;
    UIInterfaceActionHighlightAttributes *_visualStyleOverrideActionHighlightAttributes;
    UIInterfaceActionSeparatorAttributes *_visualStyleOverrideSeparatorAttributes;
    UIFont *_visualStyleOverrideTitleLabelFont;
    double _selectionHighlightContinuousCornerRadius;
}

@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (retain, nonatomic) UIInterfaceActionVisualStyle *appliedVisualStyle;
@property (nonatomic, readonly) _UIContentConstraintsLayoutGuide *contentGuide;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UIView *topLevelItemsView;
@property (nonatomic, readonly) NSArray *topLevelViewArrangementConstraints;
@property (nonatomic, readonly) NSMutableArray *arrangedScrollableHeaderViews;
@property (nonatomic, readonly) UIView<UISeparatorDisplaying> *actionSequenceTopSeparatorView;
@property (nonatomic, readonly) NSLayoutConstraint *actionSequenceViewWidthAnchoredToConstantConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *actionSequenceViewWidthAnchoredToContentGuideConstraint;
@property (nonatomic, readonly) UIInterfaceActionSelectionTrackingController *actionSelectionController;
@property (nonatomic, readonly) NSPointerArray *weakSimultaneouslyPresentedGroupViews;
@property (nonatomic) _Bool showsSeparatorAboveActions;
@property (nonatomic, readonly) _UIInterfaceActionRepresentationsSequenceView *actionSequenceView;
@property (retain, nonatomic) UILongPressGestureRecognizer *actionSelectionGestureRecognizer;
@property (nonatomic) _Bool scrubbingEnabled;
@property (nonatomic) double requiredActionRepresentationWidth;
@property (retain, nonatomic) UIInterfaceActionRepresentationView *preferredActionRepresentation;
@property (retain, nonatomic, setter=_setVisualStyleOverrideActionHighlightAttributes:) UIInterfaceActionHighlightAttributes *visualStyleOverrideActionHighlightAttributes;
@property (retain, nonatomic, getter=_visualStyleOverrideSeparatorAttributes, setter=_setVisualStyleOverrideSeparatorAttributes:) UIInterfaceActionSeparatorAttributes *visualStyleOverrideSeparatorAttributes;
@property (retain, nonatomic, getter=_visualStyleOverrideTitleLabelFont, setter=_setVisualStyleOverrideTitleLabelFont:) UIFont *visualStyleOverrideTitleLabelFont;
@property (nonatomic, getter=_drawsBackground, setter=_setDrawsBackground:) _Bool drawsBackground;
@property (nonatomic, getter=_selectionHighlightContinuousCornerRadius, setter=_setSelectionHighlightContinuousCornerRadius:) double selectionHighlightContinuousCornerRadius;
@property (nonatomic, getter=_alignActionSeparatorLeadingEdgeWithContent, setter=_setAlignActionSeparatorLeadingEdgeWithContent:) _Bool alignActionSeparatorLeadingEdgeWithContent;
@property (nonatomic, readonly) UIInterfaceActionGroup *actionGroup;
@property (weak, nonatomic) id <UIInterfaceActionHandlerInvocationDelegate> actionHandlerInvocationDelegate;
@property (nonatomic) long long presentationStyle;
@property (retain, nonatomic) NSArray *allowedActionLayoutAxisByPriority;
@property (nonatomic, readonly) long long actionLayoutAxis;
@property (nonatomic, readonly) NSArray *arrangedHeaderViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <UIInterfaceActionVisualStyleProviding> visualStyleProvider;
@property (nonatomic, getter=isSpringLoaded) _Bool springLoaded;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredFocusedView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_alertController;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)interfaceActionGroup:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceActionGroup:(id)arg1 reloadDisplayedContentActionGroupProperties:(id)arg2;
- (void)_setUsAsThePresentingViewControllerForAllActions;
- (void)_installContentGuideConstraints;
- (void)_loadTopLevelItemsView;
- (void)_loadActionSequenceView;
- (void)reloadVisualStyle;
- (void)_commonInitWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;
- (void)_removeUsAsThePresentingViewControllerForAllActions;
- (void)_setNeedsUpdateTopLevelViewsArrangement;
- (void)_setNeedsUpdateActionSequenceViewArrangement;
- (void)_updateActionSequenceViewActionLayoutAxis;
- (void)setActionLayoutAxis:(long long)arg1;
- (void)_arrangeTopLevelViews;
- (void)_scrollActionRepresentationViewToVisibleForAction:(id)arg1 animated:(_Bool)arg2;
- (void)_scrollPreferredActionRepresentationViewToVisibleAnimated:(_Bool)arg1;
- (void)_updateRequiredActionRepresentationSizeConstraints;
- (struct UIEdgeInsets)_buttonEdgeInsetsFromGroupViewEdge;
- (void)_addConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1;
- (void)_removeConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1;
- (id)_currentlyFocusedActionView;
- (id)_actionRepresentationViewForAction:(id)arg1;
- (void)_applyVisualStyleToActionsViewScrollView;
- (id)_visualStyleByApplyingOurTraitsToVisualStyle:(id)arg1 traitCollection:(id)arg2;
- (void)_setAndApplyVisualStyle:(id)arg1;
- (void)_applyVisualStyle;
- (id)_loadVisualStyleForTraitCollection:(id)arg1;
- (void)_reloadStackViewContentsIfNeeded;
- (void)updateConstraints;
- (void)_determineActualLayoutAxis;
- (struct CGRect)_contentEdgeFrame;
- (_Bool)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (void)_associateWeakSimultaneouslyPresentedGroupViews:(id)arg1 bidirectional:(_Bool)arg2;
- (id)_allActionViews;
- (double)_topLevelItemsMargin;
- (_Bool)_shouldInstallContentGuideConstraints;
- (void)_loadViewsIfNeeded;
- (void)_reloadTopSeparatorView;
- (void)_arrangeActionViewsInActionSequenceView;
- (void)_updateRoundedCornerPositionForSubviews;
- (_Bool)_shouldShowSeparatorAboveActionsSequenceView;
- (id)_constraintsToPinView:(id)arg1 toObject:(id)arg2 identifier:(id)arg3;
- (void)_updateActionSequenceViewDebugLayoutIdentifier;
- (void)_setLayoutDebuggingIdentifier:(id)arg1;
- (id)_viewContainingTopLevelItems;
- (id)_orderedTopLevelViews;
- (id)_widthAnchoredToContentGuideConstraintForTopLevelView:(id)arg1;
- (id)_defaultOrderingForActionRepresentationViews:(id)arg1;
- (void)_actionSequenceViewContentSizeDidChange;
- (void)_updateActionSequenceScrollability;
- (_Bool)_actionLayoutAxisUnknownDisallowedIsVertical;
- (id)_newSeparatorViewForSeparatingTitleAndButtons;
- (id)_interfaceActionGroupViewState;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
- (void)_applyVisualStyleToBackgroundViewDisplay;
- (void)_addBackgroudViewToViewHierarchy:(id)arg1;
- (void)_applyVisualStyleCornerRadius;
- (_Bool)_isCornerRadiusDisplayEnabled;
- (long long)_actionLayoutAxisUnknowDisallowed;
- (struct CGRect)_actionSequenceVisibleRectForMakingCenteredAction:(id)arg1;
- (id)initWithActionGroup:(id)arg1 actionHandlerInvocationDelegate:(id)arg2;
- (id)_initWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;
- (void)setActionGroup:(id)arg1;
- (void)insertArrangedHeaderView:(id)arg1 atIndex:(unsigned long long)arg2 scrollable:(_Bool)arg3;
- (void)removeArrangedHeaderView:(id)arg1;
- (void)scrollToCenterForInterfaceAction:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)setActiveTestingVisualStyle:(id)arg1;
- (void)setSimultaneouslyPresentedGroupViews:(id)arg1;
- (id)_newActionGroupBackgroundView;
- (id)_interfaceActionOfFocusedRepresentationView;
- (_Bool)_hasLoadedStackViewContents;
- (id)_viewDisplayingRoundedBackground;

@end
