/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIActionSheet, UIColor, UIImageView, UIPopoverBackgroundView, UIPopoverController;

__attribute__((visibility("hidden")))
@interface _UIPopoverView : UIView

{
    UIView *_contentView;
    UIPopoverBackgroundView *_backgroundView;
    Class _backgroundViewClass;
    UIImageView *_toolbarShine;
    _Bool _showsBackgroundComponentHighlights;
    _Bool _showsBackgroundViewHighlight;
    _Bool _showsContentViewHighlight;
    _Bool _contentExtendsOverArrow;
    _Bool _chromeHidden;
    UIActionSheet *_presentedActionSheet;
    UIPopoverController *_popoverController;
}

@property (nonatomic) _Bool showsBackgroundComponentHighlights;
@property (nonatomic) _Bool showsBackgroundViewHighlight;
@property (nonatomic) _Bool showsContentViewHighlight;
@property (nonatomic, readonly) _Bool contentExtendsOverArrow;
@property (nonatomic) double arrowOffset;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) long long backgroundStyle;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (nonatomic) _Bool chromeHidden;
@property (retain, nonatomic) UIActionSheet *presentedActionSheet;
@property (nonatomic) UIPopoverController *popoverController;

+ (id)popoverViewContainingView:(id)arg1;

- (int)_style;
- (id)contentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)backgroundView;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_setCornerRadius:(double)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)_definesTintColor;
- (id)_normalInheritedTintColor;
- (void)_setFrame:(struct CGRect)arg1 arrowOffset:(double)arg2;
- (void)_setPopoverContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(_Bool)arg3 contentExtendsOverArrow:(_Bool)arg4;
- (void)prepareForAnimatedTransitioningWithCoordinator:(id)arg1;
- (struct UIEdgeInsets)safeAreaInsetsForContentView;
- (void)setUseToolbarShine:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2;
- (void)_hideArrow;
- (void)_showArrow;
- (struct CGRect)_snapshotBounds;
- (_Bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect)arg1;
- (id)standardChromeView;
- (void)_layoutToolbarShine;
- (void)_performBlockCheckingDefinesTintColor:(CDUnknownBlockType)arg1;
- (id)toolbarShine;
- (_Bool)_allowsCustomizationOfContent;

@end
