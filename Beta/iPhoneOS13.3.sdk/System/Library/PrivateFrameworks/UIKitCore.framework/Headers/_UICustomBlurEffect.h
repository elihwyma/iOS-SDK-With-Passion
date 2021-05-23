/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIBlurEffect.h>

@class UIColor, _UIBackdropViewSettings;

@interface _UICustomBlurEffect : UIBlurEffect

{
    _UIBackdropViewSettings *_blurEffect;
}

@property (nonatomic) double grayscaleTintLevel;
@property (nonatomic) double grayscaleTintAlpha;
@property (nonatomic) _Bool lightenGrayscaleWithSourceOver;
@property (retain, nonatomic) UIColor *colorTint;
@property (nonatomic) double colorTintAlpha;
@property (nonatomic) double colorBurnTintLevel;
@property (nonatomic) double colorBurnTintAlpha;
@property (nonatomic) double darkeningTintAlpha;
@property (nonatomic) double darkeningTintHue;
@property (nonatomic) double darkeningTintSaturation;
@property (nonatomic) _Bool darkenWithSourceOver;
@property (nonatomic) double blurRadius;
@property (nonatomic) double saturationDeltaFactor;
@property (nonatomic) double scale;
@property (nonatomic) double zoom;

+ (id)effectWithStyle:(long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)effectSettings;

@end
