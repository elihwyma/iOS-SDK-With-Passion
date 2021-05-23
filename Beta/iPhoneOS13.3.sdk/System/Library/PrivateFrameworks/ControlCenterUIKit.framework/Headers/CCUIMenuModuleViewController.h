/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

@class CCUIContentModuleContext, CCUIMenuModuleItemView, MTMaterialView, MTVisualStylingProvider, NSMutableArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UILabel, UILongPressGestureRecognizer, UIScrollView, UISelectionFeedbackGenerator, UIStackView, UIView, UIViewPropertyAnimator;

@interface CCUIMenuModuleViewController : CCUIButtonModuleViewController

{
    UILabel *_titleLabel;
    UIView *_transformView;
    UIView *_headerSeparatorView;
    UIView *_footerSeparatorView;
    MTMaterialView *_platterMaterialView;
    MTVisualStylingProvider *_visualStylingProvider;
    UIStackView *_menuItemsContainer;
    NSMutableArray *_menuItems;
    NSMutableDictionary *_identiferToActivityIndicatorView;
    UIScrollView *_contentScrollView;
    UIView *_darkeningBackgroundView;
    UIActivityIndicatorView *_busyIndicatorView;
    UILongPressGestureRecognizer *_pressGestureRecognizer;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    _Bool _allowsMenuInteraction;
    _Bool _ignoreMenuItemAtTouchLocationAfterExpanded;
    struct CGPoint _touchLocationToIgnore;
    CCUIMenuModuleItemView *_footerButtonView;
    _Bool _shouldShowFooterButton;
    _Bool _busy;
    _Bool _shouldProvideOwnPlatter;
    _Bool _useTrailingCheckmarkLayout;
    _Bool _useTrailingInset;
    _Bool _useTallLayout;
    UIView *_contentView;
    unsigned long long _minimumMenuItems;
    double _visibleMenuItems;
    unsigned long long _indentation;
    CCUIContentModuleContext *_contentModuleContext;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) unsigned long long actionsCount;
@property (nonatomic, readonly) unsigned long long menuItemCount;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) _Bool hasFooterButton;
@property (nonatomic) unsigned long long minimumMenuItems;
@property (nonatomic) double visibleMenuItems;
@property (nonatomic) unsigned long long indentation;
@property (nonatomic, getter=isBusy) _Bool busy;
@property (nonatomic) _Bool shouldProvideOwnPlatter;
@property (nonatomic) _Bool useTrailingCheckmarkLayout;
@property (nonatomic) _Bool useTrailingInset;
@property (nonatomic) _Bool useTallLayout;
@property (weak, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius;
@property (nonatomic, readonly) _Bool providesOwnPlatter;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

+ (id)checkmarkImage;

- (void)dealloc;
- (void)removeAllActions;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (_Bool)_canShowWhileLocked;
- (id)_titleFont;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (double)_separatorHeight;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)_handlePressGesture:(id)arg1;
- (void)setMenuItems:(id)arg1;
- (double)_footerHeight;
- (id)viewForTouchContinuation;
- (_Bool)shouldBeginTransitionToExpandedContentModule;
- (void)setGlyphImage:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (void)_setupTitleLabel;
- (double)_maximumHeight;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)willTransitionToExpandedContentMode:(_Bool)arg1;
- (void)didTransitionToExpandedContentMode:(_Bool)arg1;
- (void)contentModuleWillTransitionToExpandedContentMode:(_Bool)arg1;
- (id)_busyIndicatorView;
- (void)addActionWithTitle:(id)arg1 subtitle:(id)arg2 glyph:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_updateMenuItemsTallness;
- (void)_updateMenuItemsSeparatorVisiblity;
- (id)_menuItemFromPlaceholderIndex:(unsigned long long)arg1;
- (void)_setMenuItems:(id)arg1;
- (id)_leadingViewForMenuItem:(id)arg1;
- (id)_trailingViewForMenuItem:(id)arg1;
- (id)leadingImageForMenuItem:(id)arg1;
- (id)leadingViewForMenuItem:(id)arg1;
- (id)trailingImageForMenuItem:(id)arg1;
- (id)trailingViewForMenuItem:(id)arg1;
- (double)preferredExpandedContentHeightWithWidth:(double)arg1;
- (double)headerHeightForWidth:(double)arg1;
- (double)_titleWidthForContainerWidth:(double)arg1;
- (_Bool)_shouldLimitContentSizeCategory;
- (void)_fadeViewsForExpandedState:(_Bool)arg1;
- (void)_setupRootView;
- (void)_layoutViewSubviews;
- (void)_layoutGlyphViewForSize:(struct CGSize)arg1;
- (void)_layoutTransformViewForSize:(struct CGSize)arg1;
- (void)_layoutTitleLabelForSize:(struct CGSize)arg1;
- (void)_layoutBusyIndicatorForSize:(struct CGSize)arg1;
- (void)_layoutHeaderSeparatorForSize:(struct CGSize)arg1;
- (void)_layoutContentViewForSize:(struct CGSize)arg1;
- (void)_layoutFooterSeparatorForSize:(struct CGSize)arg1;
- (void)_layoutFooterButtonForSize:(struct CGSize)arg1;
- (double)_desiredExpandedHeight;
- (double)scrollViewContentHeightForWidth:(double)arg1;
- (void)_updateTitleFont;
- (_Bool)_shouldShowFooterSeparator;
- (double)_menuItemsHeightForWidth:(double)arg1;
- (_Bool)_toggleSelectionForMenuItem:(id)arg1;
- (void)_handleActionTapped:(id)arg1;
- (double)_defaultMenuItemHeight;
- (_Bool)_shouldShowFooterChin;
- (void)addActionWithTitle:(id)arg1 glyph:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)menuItemForIdentifier:(id)arg1;
- (void)setUseIndentedLayout:(_Bool)arg1;
- (void)setFooterButtonTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeFooterButton;
- (void)scrollToTop:(_Bool)arg1;
- (double)_contentScaleForSize:(struct CGSize)arg1;
- (id)_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2;

@end
