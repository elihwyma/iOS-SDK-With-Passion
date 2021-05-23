/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UINavigationBarVisualProvider.h>

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIFocusContainerGuide, UIView, UIVisualEffectView, _CarTitleView, _UIBarButtonItemAppearanceStorage, _UIButtonBar, _UIButtonBarButton;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderModernCarPlay : _UINavigationBarVisualProvider

{
    _Bool _compactMetrics;
    _Bool _havePrepared;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    UIView *_contentView;
    _CarTitleView *_titleView;
    _UIButtonBar *_leadingBar;
    _UIButtonBar *_trailingBar;
    _UIButtonBarButton *_backBarButton;
    NSLayoutConstraint *_leadingBarConstraint;
    NSLayoutConstraint *_leadingBarNoItemsConstraint;
    NSLayoutConstraint *_trailingBarConstraint;
    NSLayoutConstraint *_trailingBarNoItemsConstraint;
    NSArray *_backButtonConstraints;
    NSLayoutConstraint *_largeTitleLeadingConstraint;
    NSLayoutConstraint *_largeTitleTrailingConstraint;
    NSLayoutConstraint *_regularTitleConstraint;
    NSLayoutConstraint *_leadingBarWithTitleTrailingConstraint;
    NSLayoutConstraint *_leadingBarWithNoTitleTrailingConstraint;
    NSLayoutConstraint *_trailingBarWithTitleLeadingConstraint;
    NSLayoutConstraint *_trailingBarWithNoTitleLeadingConstraint;
    UIVisualEffectView *_backgroundView;
    UIFocusContainerGuide *_focusContainerGuide;
    NSArray *_debugViews;
}

@property (nonatomic) _Bool havePrepared;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) _CarTitleView *titleView;
@property (retain, nonatomic) _UIButtonBar *leadingBar;
@property (retain, nonatomic) _UIButtonBar *trailingBar;
@property (retain, nonatomic) _UIButtonBarButton *backBarButton;
@property (retain, nonatomic) NSLayoutConstraint *leadingBarConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingBarNoItemsConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingBarConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingBarNoItemsConstraint;
@property (retain, nonatomic) NSArray *backButtonConstraints;
@property (retain, nonatomic) NSLayoutConstraint *largeTitleLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *largeTitleTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *regularTitleConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingBarWithTitleTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingBarWithNoTitleTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingBarWithTitleLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingBarWithNoTitleLeadingConstraint;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIFocusContainerGuide *focusContainerGuide;
@property (retain, nonatomic) NSArray *debugViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *appearanceStorage;
@property (nonatomic, readonly) long long barType;
@property (nonatomic, readonly) _Bool compactMetrics;
@property (nonatomic, readonly) _Bool isRTL;
@property (nonatomic, readonly) _Bool barWantsLetterpress;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) _Bool centerTextButtons;
@property (nonatomic, readonly) double defaultEdgeSpacing;
@property (nonatomic, readonly) double defaultTextPadding;
@property (nonatomic, readonly) double backButtonMargin;
@property (nonatomic, readonly) double backButtonMaximumWidth;

- (void)teardown;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)backIndicatorImage;
- (id)backIndicatorMaskImage;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (double)absorptionForItem:(id)arg1;
- (long long)barMetrics;
- (void)changeAppearance;
- (void)prepare;
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;
- (void)setupTopNavigationItem;
- (void)prepareForPush;
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForPop;
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateForSearchPresentation:(_Bool)arg1;
- (void)presentHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (_Bool)navigationItemIsTopItem:(id)arg1;
- (void)navigationItemUpdatedTitleContent:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigationItemIsBackItem:(id)arg1;
- (void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedLargeTitleContent:(id)arg1;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1;
- (void)navigationItemUpdatedBackgroundAppearance:(id)arg1;
- (void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3;
- (void)navigationItemUpdatedPromptContent:(id)arg1;
- (void)navigationItemUpdatedContentLayout:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2;
- (void)navigationItemUpdatedScrollEdgeProgress:(id)arg1;
- (void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2;
- (void)navigationItemUpdatedCanvasView:(id)arg1;
- (void)stackDidChangeFrom:(id)arg1;
- (void)_configureBackground;
- (void)__backButtonAction;
- (void)_updateContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 direction:(unsigned long long)arg3;
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(_Bool)arg3 direction:(unsigned long long)arg4;
- (void)_installGradientLayerMaskForClippingView:(id)arg1;
- (id)defaultFontDescriptor;

@end
