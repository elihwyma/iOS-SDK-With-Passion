//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"


@class NSMutableDictionary, _UIFloatingShadowView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTVBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
    BOOL _isHighlighted;
    BOOL _isPressed;
    UIView *_backgroundView;
    _UIFloatingShadowView *_shadowView;
    NSMutableDictionary *_alphas;
    BOOL _shouldUseTintColorAsBackgroundColor;
    BOOL _shouldShowShadow;
}

+ (CGSize)backgroundInsetAmount;
@property(nonatomic) BOOL shouldShowShadow; // @synthesize shouldShowShadow=_shouldShowShadow;
@property(nonatomic) BOOL shouldUseTintColorAsBackgroundColor; // @synthesize shouldUseTintColorAsBackgroundColor=_shouldUseTintColorAsBackgroundColor;
// - (void).cxx_destruct;
- (id)_displayedBackgroundColor;
- (double)_alphaForHighlighted:(BOOL)arg1 pressed:(BOOL)arg2;
- (void)setPressed:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setRoundedCornerPosition:(NSUInteger)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (double)alphaForState:(NSUInteger)arg1;
- (void)setAlpha:(double)arg1 forState:(NSUInteger)arg2;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

