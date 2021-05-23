/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <UIKit/UIView.h>

@class CABackdropLayer, LAUIPearlGlyphView, NSObject, NSString, UIColor, UIFont, UILabel;

@protocol OS_dispatch_source;

@interface LAUIPearlGlyphLabel : UIView

{
    UIView *_container;
    CABackdropLayer *_background;
    UIView *_labelContainer;
    UILabel *_label;
    UIView *_glyphContainer;
    LAUIPearlGlyphView *_glyph;
    struct map<CALayer *__unsafe_unretained, CALayer *, std::__1::less<CALayer *__unsafe_unretained>, std::__1::allocator<std::__1::pair<CALayer *const __unsafe_unretained, CALayer *>>> _masks;
    struct vector<UIView *, std::__1::allocator<UIView *>> _labelSnapshots;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIFont *_baseFont;
    struct CGSize _currentLabelSize;
    struct CGSize _currentMaximumSize;
    NSObject<OS_dispatch_source> *_visibilityTimer;
    _Bool _inWindow;
    _Bool _textNeedsUpdate;
    _Bool _textUpdateNeedsAnimation;
    _Bool _visible;
    _Bool _visibleNeedsUpdate;
    _Bool _allowDelayedVisibility;
    _Bool _animated;
    _Bool _reduceBlur;
    _Bool _shimmerEnabled;
    long long _style;
    NSString *_text;
    struct CGSize _maximumSize;
}

@property (nonatomic) _Bool inApplicationContext;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, getter=isShimmerEnabled) _Bool shimmerEnabled;
@property (copy, nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) struct CGSize maximumSize;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (void)didMoveToWindow;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateText;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)_applyStyle;
- (void)layoutIfNeededAnimated:(_Bool)arg1;
- (void)_updateVisibilityAnimated:(_Bool)arg1;
- (void)reduceTransparencyDidChange:(id)arg1;
- (void)reduceMotionDidChange:(id)arg1;
- (void)boldTextStatusDidChange:(id)arg1;
- (void)_updateFontAnimated:(_Bool)arg1;
- (void)_applyVisibilityAnimated:(_Bool)arg1;
- (void)_updateGlyphPaused;
- (void)_updateBoundsSizeAnimated:(_Bool)arg1;
- (void)_updateReduceBlurState;
- (void)setShimmerEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setText:(id)arg1 animated:(_Bool)arg2;
- (void)setMaximumSize:(struct CGSize)arg1 animated:(_Bool)arg2;

@end
