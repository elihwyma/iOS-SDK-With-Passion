/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UINavigationBarVisualProvider.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIFocusContainerGuide, UIImageView, UILayoutGuide, UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy, _UINavBarPrompt, _UINavigationBarGestureHandler, _UINavigationBarLegacyContentView;

@protocol UIViewControllerTransitionCoordinator;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderLegacyIOS : _UINavigationBarVisualProvider

{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_currentCanvasView;
    UIView *_titleView;
    NSArray *_leftViews;
    NSArray *_rightViews;
    UIImageView *_backIndicatorView;
    _UINavBarPrompt *_prompt;
    _UINavigationBarGestureHandler *_gestureHandler;
    NSMutableArray *_slideTransitionClippingViews;
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;
    _UINavigationBarLegacyContentView *_layoutView;
    UIView *_contentView;
    UILayoutGuide *_userContentGuide;
    NSLayoutConstraint *_userContentGuideLeading;
    NSLayoutConstraint *_userContentGuideTrailing;
    UIFocusContainerGuide *_contentFocusContainerGuide;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredFocusedView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)_updateBackIndicatorImage;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (double)_shim_shadowAlpha;
- (void)_shim_setShadowAlpha:(double)arg1;
- (_Bool)_shim_disableBlurTinting;
- (void)_shim_setDisableBlurTinting:(_Bool)arg1;
- (double)_shim_backgroundHeight;
- (void)changeAppearance;
- (id)_shim_userContentGuide;
- (_Bool)_supportsCanvasView;
- (void)_shim_setUseContentView:(_Bool)arg1;
- (void)prepare;
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;
- (void)updateTopNavigationItemTitleView;
- (id)_shim_promptText;
- (id)_shim_contentView;
- (void)setupTopNavigationItem;
- (void)updateArchivedSubviews:(id)arg1;
- (void)prepareForPush;
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForPop;
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldUseHeightRangeFittingWidth;
- (_Bool)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;
- (id)_shim_customHitTest:(struct CGPoint)arg1 forView:(id)arg2;
- (void)_shim_pressBackIndicator:(_Bool)arg1 initialPress:(_Bool)arg2;
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint)arg1;
- (_Bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_shim_updateBackIndicator;
- (_Bool)_shim_throwConstraintExceptions;
- (long long)statusBarStyle;
- (_Bool)_shim_34415965;
- (_Bool)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2;
- (void)_shim_setPromptText:(id)arg1 animated:(_Bool)arg2;
- (void)setBackButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)barSizeChanged;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(_Bool)arg1;
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;
- (void)_shim_30244716;
- (long long)_shim_backdropStyle;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(CDUnknownBlockType)arg2;
- (double)_effectiveBackIndicatorLeftMargin;
- (_Bool)_suppressBackIndicator;
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldGestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;
- (void)gestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;
- (void)updateBackgroundGroupName;
- (id)_shim_layoutView;
- (id)_shim_backIndicatorView;
- (void)_layoutSubviewsFromContentView;
- (void)_setUpContentFocusContainerGuide;
- (id)_navigationItemAtPoint:(struct CGPoint)arg1;
- (void)_popForTouchAtPoint:(struct CGPoint)arg1;
- (_Bool)_shouldPopForTouchAtPoint:(struct CGPoint)arg1;
- (struct CGSize)_preferredContentSizeForItem:(id)arg1;
- (void)_layoutInBounds:(struct CGRect)arg1 withVisualStyle:(id)arg2;
- (struct CGRect)_frameForCanvasView:(id)arg1 inBounds:(struct CGRect)arg2;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5;
- (struct CGRect)_contentViewFrameInBounds:(struct CGRect)arg1 style:(id)arg2;
- (void)_updateBackground;
- (void)_startPushAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_startPopAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_setViewsAnimated:(_Bool)arg1 forTopNavigationItem:(id)arg2 backNavigationItem:(id)arg3 previousTopItem:(id)arg4;
- (void)_getLeftMargin:(double *)arg1 rightMargin:(double *)arg2 forNavigationItem:(id)arg3 showingBackButton:(_Bool)arg4 visualStyle:(id)arg5;
- (id)_defaultTitleFontForItem:(id)arg1 fittingHeight:(double)arg2 withScaleAdjustment:(double)arg3;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 returnedIdealWidthOfTextContent:(double *)arg6 availableLayoutWidthForTextContent:(double *)arg7 idealBackButtonWidth:(double *)arg8;
- (unsigned long long)_subviewIndexAboveBackground;
- (id)_effectiveBackIndicatorImage;
- (void)_updateBackIndicatorViewTintColor;
- (double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3;
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(_Bool)arg5 rightMaskImage:(id)arg6;
- (double)_backIndicatorClippingMargin;
- (id)_effectiveBackIndicatorTransitionMaskImage;
- (_Bool)_prepareTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (_Bool)_performCanvasViewTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (void)_completeTransitionFromCanvasView:(id)arg1 toCanvasView:(id)arg2 updateSize:(_Bool)arg3 transitionAssistant:(id)arg4;
- (void)_completeNavigationTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 transitionAssistant:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_completeTopItemTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 previousLeftViews:(id)arg3 previousRightViews:(id)arg4 enableUserInteraction:(id)arg5 transitionAssistant:(id)arg6;
- (void)_handleMouseDownAtPoint:(struct CGPoint)arg1;
- (void)_handleMouseUpAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)frameOriginForStatusBarLocatedAt:(struct CGPoint)arg1;

@end
