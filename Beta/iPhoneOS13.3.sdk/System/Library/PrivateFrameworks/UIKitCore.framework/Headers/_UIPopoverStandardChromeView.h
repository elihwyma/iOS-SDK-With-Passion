/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPopoverBackgroundView.h>

@class UIColor, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView

{
    UIView *_arrowBackgroundView;
    UIVisualEffectView *_blurView;
    UIView *_maskView;
    UIColor *_popoverBackgroundColor;
    UIColor *_arrowBackgroundColor;
    _Bool _popoverBackgroundColorIsOpaque;
    double _arrowOffset;
    unsigned long long _arrowDirection;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    _Bool _arrowVisible;
    _Bool _wasPinned;
    _Bool useShortMode;
    _Bool _debugMode;
    UIView *viewToMaskWhenContentExtendsOverArrow;
    UIColor *_contentBlendingColor;
    UIView *_arrowView;
    UIView *_leftCapView;
    UIView *_rightCapView;
}

@property (nonatomic, readonly) UIView *arrowView;
@property (nonatomic, readonly) UIView *leftCapView;
@property (nonatomic, readonly) UIView *rightCapView;
@property (nonatomic, readonly) _Bool hasComponentViews;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, getter=isArrowVisible) _Bool arrowVisible;
@property (nonatomic) _Bool useShortMode;
@property (nonatomic, getter=isDebugModeEnabled) _Bool debugModeEnabled;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (nonatomic, readonly) UIColor *contentBlendingColor;
@property (weak, nonatomic) UIView *viewToMaskWhenContentExtendsOverArrow;

+ (struct UIEdgeInsets)contentViewInsets;
+ (double)arrowHeight;
+ (double)arrowBase;

- (struct CGSize)_shadowOffset;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_shadowPath;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (id)backgroundEffect;
- (_Bool)isPinned;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (void)setArrowOffset:(double)arg1;
- (void)setArrowDirection:(unsigned long long)arg1;
- (struct UIEdgeInsets)safeAreaInsetsForContentView;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)_updateChrome;
- (struct UIEdgeInsets)_shadowInsets;
- (struct CGRect)_contentViewFrame;
- (void)_loadNecessaryViews;
- (double)minNonPinnedOffset;
- (double)maxNonPinnedOffset;
- (_Bool)isRightArrowPinnedToTop;
- (_Bool)isRightArrowPinnedToBottom;
- (_Bool)wouldPinForOffset:(double)arg1;
- (void)_resetComponentViews;
- (void)_layoutArrowViewsUpOrDown;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)_updateBackgroundStyle;
- (_Bool)_shouldUseEqualContentInsetsOnAllSides;
- (void)_configureEffectView;
- (long long)_resolvedBackgroundStyle;
- (void)_removeEffectView;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)setArrowVisible:(_Bool)arg1 animated:(_Bool)arg2;

@end
