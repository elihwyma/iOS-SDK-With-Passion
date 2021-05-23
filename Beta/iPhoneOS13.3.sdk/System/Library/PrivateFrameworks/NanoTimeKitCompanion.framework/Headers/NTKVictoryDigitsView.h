/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, CLKDevice, NSString, NTKVictoryLabel, UIColor;

@interface NTKVictoryDigitsView : UIView

{
    CLKDevice *_device;
    NTKVictoryLabel *_label;
    _Bool _hasSetAppearance;
    CAGradientLayer *_dimmingOverlay;
    _Bool _dimIsUpper;
    UIColor *_color;
    double _scale;
    long long _appearance;
    UIColor *_outlineBackgroundColor;
}

@property (retain, nonatomic) UIColor *outlineBackgroundColor;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *digitText;
@property (nonatomic) double scale;
@property (nonatomic) long long appearance;

+ (id)_fontForAppearance:(long long)arg1 forDevice:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateFonts;
- (id)_createLabel;
- (id)initForDevice:(id)arg1;
- (void)prepareAppearance:(long long)arg1;
- (void)applyColor;
- (void)setDimmingFactor:(double)arg1 isUpper:(_Bool)arg2;

@end
