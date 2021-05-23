/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <UIKit/UIButton.h>

@class CALayer, MPUTransportButtonEventHandler, NSString, UIColor, UIImage;

@interface MPUTransportButton : UIButton

{
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
    CALayer *_selectionIndicatorLayer;
    _Bool _shouldInferColorsFromTintColor;
    _Bool _shouldShowBackgroundForSelectedState;
    UIColor *_regularColor;
    UIColor *_disabledColor;
    UIColor *_highlightedColor;
    UIColor *_selectedColor;
    UIImage *_transportButtonImage;
}

@property (retain, nonatomic) UIColor *regularColor;
@property (retain, nonatomic) UIColor *disabledColor;
@property (retain, nonatomic) UIColor *highlightedColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) _Bool shouldInferColorsFromTintColor;
@property (nonatomic) _Bool shouldShowBackgroundForSelectedState;
@property (retain, nonatomic) UIImage *transportButtonImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic) _Bool adjustsImageWhenHighlighted;
@property (nonatomic) long long transportButtonImageViewContentMode;

+ (id)transportButton;
+ (id)defaultRegularColor;
+ (id)defaultHighlightedColor;
+ (id)defaultDisabledColor;
+ (id)defaultSelectedColor;
+ (id)_stringForDisplayedSkipInterval:(double)arg1;
+ (id)skipIntervalImageForInterval:(double)arg1 baseImage:(id)arg2 font:(id)arg3 scale:(double)arg4;

- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)shouldTrack;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_updateDisabledTransportButtonImage;
- (void)_updateHighlightedTransportButtonImage;
- (void)_updateRegularTransportButtonImage;
- (void)_updateSelectedTransportButtonImage;
- (void)applyTransportButtonLayoutAttributes:(CDStruct_b7523c42)arg1;
- (_Bool)wantsCustomHighlightAppearance;

@end
