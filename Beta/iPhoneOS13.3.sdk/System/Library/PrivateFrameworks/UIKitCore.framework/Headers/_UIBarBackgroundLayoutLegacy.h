/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarBackgroundLayout.h>

@class NSArray, UIColor, UIImage, UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundLayoutLegacy : _UIBarBackgroundLayout

{
    long long _translucence;
    UIImage *_backgroundImage;
    UIColor *_backgroundTintColor;
    NSArray *_backgroundEffects;
    UIImage *_shadowImage;
    UIColor *_shadowColor;
    UIVibrancyEffect *_shadowEffect;
    _Bool _hasShadow;
    double _topInset;
}

@property (nonatomic, readonly) UIImage *shadowImage;
@property (nonatomic) _Bool disableTinting;
@property (nonatomic) double topInset;
@property (nonatomic, readonly) _Bool hasBackgroundEffect;

- (void)describeInto:(id)arg1;
- (void)configureWithoutShadow;
- (_Bool)shouldUseExplicitGeometry;
- (double)bgInset;
- (_Bool)bg1HasShadow;
- (id)bg1ShadowImage;
- (id)bg1Effects;
- (id)bg1Image;
- (id)bg1Color;
- (double)bg1Alpha;
- (double)bg1ImageAlpha;
- (id)bg1ShadowEffect;
- (id)bg1ShadowColor;
- (double)bg1ShadowAlpha;
- (void)configureWithEffects:(id)arg1;
- (void)configureAsTransparent;
- (void)configureImage:(id)arg1 forceOpaque:(_Bool)arg2 barStyle:(long long)arg3;
- (void)configureEffectForStyle:(long long)arg1 backgroundTintColor:(id)arg2 forceOpaque:(_Bool)arg3;
- (void)configureShadowForBarStyle:(long long)arg1;
- (void)configureImage:(id)arg1 forceTranslucent:(_Bool)arg2;
- (void)configureImage:(id)arg1 forceOpaque:(_Bool)arg2 backgroundTintColor:(id)arg3;
- (void)configureShadowImage:(id)arg1;
- (id)initWithLayout:(id)arg1;
- (void)setUseExplicitGeometry:(_Bool)arg1;
- (id)_colorForStyle:(long long)arg1;
- (id)_blurWithStyle:(long long)arg1 tint:(id)arg2;
- (void)configureBackgroundColor:(id)arg1 barStyle:(long long)arg2 translucent:(_Bool)arg3;

@end
