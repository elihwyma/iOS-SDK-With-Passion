/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UIInterfaceActionVisualStyle, UISpringLoadedInteraction;

@protocol UIFocusEnvironment, UIFocusItemContainer, UIInterfaceActionVisualBackgroundDisplaying;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionRepresentationView : UIView <Swift>

{
    _Bool _hasLoadedBackgroundView;
    _Bool _canKeepContentsInHierarchy;
    _Bool _hasLoadedContentFirstTime;
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisible;
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisibleValue;
    _Bool _contentsInsertedIntoViewHierarchy;
    _Bool _ownsActionContent;
    _Bool _highlighted;
    _Bool _pressed;
    _Bool _canRemoveContentFromHierarchyWhenNotVisible;
    UIInterfaceAction *_action;
    unsigned long long _visualCornerPosition;
    id _actionViewStateContext;
    UIView<UIInterfaceActionVisualBackgroundDisplaying> *_backgroundHighlightView;
    NSLayoutConstraint *_minimumWidthConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSArray *_viewsToDisappearWhenHighlighted;
    NSString *_sectionID;
    UISpringLoadedInteraction *_interactionForSpringLoading;
}

@property (nonatomic, readonly) UIView<UIInterfaceActionVisualBackgroundDisplaying> *backgroundHighlightView;
@property (nonatomic, readonly) NSLayoutConstraint *minimumWidthConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *minimumHeightConstraint;
@property (retain, nonatomic) NSArray *viewsToDisappearWhenHighlighted;
@property (nonatomic) _Bool canRemoveContentFromHierarchyWhenNotVisible;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic, setter=_setContentsInsertedIntoViewHierarchy:) _Bool _contentsInsertedIntoViewHierarchy;
@property (retain, nonatomic) UISpringLoadedInteraction *interactionForSpringLoading;
@property (nonatomic, readonly) UIInterfaceAction *action;
@property (nonatomic, readonly) UIInterfaceActionVisualStyle *visualStyle;
@property (nonatomic) _Bool ownsActionContent;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, getter=isPressed) _Bool pressed;
@property (retain, nonatomic) id actionViewStateContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property (weak, nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, getter=isSpringLoaded) _Bool springLoaded;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)isFocused;
- (id)initWithAction:(id)arg1;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)_applyVisualStyle;
- (void)updateConstraints;
- (void)invalidateIntrinsicContentSize;
- (void)_initializeHorizontalMarginsForAction;
- (void)updateContentsInsertedIntoHierarchy;
- (void)_updateHighlightAndPressedFeedback;
- (void)_removeLoadedContentsFromHierarchyIfNotVisible;
- (void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;
- (id)_actionViewState;
- (void)_updateFittingContentSizingViewToFitSize;
- (void)_loadContentsIntoHierarchyAndPrepareIfNecessary;
- (id)__fittingContentSizingViewIfNotSelf;
- (void)layoutMarginsDidChange;
- (id)__fittingContentSizingViewAllowingSelf;
- (struct CGSize)_fittingContentSizeWithFittingViewSize:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGRect)_fittingContentSizingViewFrameInBounds:(struct CGRect)arg1;
- (id)_fittingContentSizingView;
- (struct UIEdgeInsets)_fittingContentSizingViewMargins;
- (_Bool)_showsFocusForFocusedView:(id)arg1;
- (void)_showVisualFeedbackForPressed:(_Bool)arg1;
- (_Bool)_handleVisualFeedbackForPress:(id)arg1 pressed:(_Bool)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldShowPressFeedbackForEventWithPresses:(id)arg1;
- (void)_applyVisualStyleToMinimumSizeConstraints;
- (void)_applyVisualStyleToLayoutMargins;
- (void)_applyVisualStyleToBackgroundViewAndHighlighting;
- (_Bool)_fittingContentViewHasItsOwnActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;
- (void)_setHorizontalMargins:(struct UIEdgeInsets)arg1 preservesSuperviewLayoutMargins:(_Bool)arg2;
- (void)_reloadBackgroundHighlightView;
- (_Bool)_canLoadContentsIntoHierarchy;
- (void)_addLoadedContentsToHierarchyFirstTime;
- (void)_addLoadedContentsToHierarchyIfAllowed;
- (void)loadContents;
- (_Bool)_isVisibleWithinContainmentAncestor;
- (void)invokeInterfaceAction;
- (_Bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;
- (void)_enforceActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisible:(_Bool)arg1;
- (void)_didScroll;
- (id)_viewDisplayingBackground;
- (void)_clearBackgroundPressedState;

@end
