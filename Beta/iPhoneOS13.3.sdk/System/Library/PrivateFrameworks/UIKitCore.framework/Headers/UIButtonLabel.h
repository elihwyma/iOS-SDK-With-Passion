/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILabel.h>

@class NSDictionary, UIButton;

__attribute__((visibility("hidden")))
@interface UIButtonLabel : UILabel

{
    _Bool _reverseShadow;
    UIButton *_button;
    NSDictionary *_cachedDefaultAttributes;
    _Bool _fontIsDefaultForIdiom;
}

@property (nonatomic, readonly) _Bool _fontIsDefaultForIdiom;

+ (id)_defaultAttributes;

- (void)setLineBreakMode:(long long)arg1;
- (struct CGSize)shadowOffset;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)tintColorDidChange;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_setWantsAutolayout;
- (id)_defaultAttributes;
- (void)_setFont:(id)arg1 isDefaultForIdiom:(_Bool)arg2;
- (void)_setMinimumFontSize:(double)arg1;
- (void)_invalidateCachedDefaultAttributes;
- (void)_updateTextColorWithFallbackColorIfNeeded;
- (id)_initWithFrame:(struct CGRect)arg1 button:(id)arg2;
- (void)setReverseShadow:(_Bool)arg1;
- (double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2;

@end
