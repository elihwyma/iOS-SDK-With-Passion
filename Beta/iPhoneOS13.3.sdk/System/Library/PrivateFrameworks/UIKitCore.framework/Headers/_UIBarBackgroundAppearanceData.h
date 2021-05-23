/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarAppearanceData.h>

@class NSArray, UIBlurEffect, UIColor, UIImage, UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundAppearanceData : _UIBarAppearanceData

{
    struct {
        unsigned int backgroundEffectsAreSingular:1;
        unsigned int hasBackground:1;
        unsigned int hasShadow:1;
        unsigned int needsToCalculateVibrantEffect:1;
    } _flags;
    UIVibrancyEffect *_shadowViewEffect;
    UIVibrancyEffect *_defaultVibrancyEffect;
    NSArray *_backgroundEffects;
    UIColor *_backgroundColor;
    UIImage *_backgroundImage;
    long long _backgroundImageContentMode;
    UIColor *_shadowColor;
    UIImage *_shadowImage;
    UIVibrancyEffect *_shadowEffect;
}

@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (copy, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIImage *shadowImage;
@property (copy, nonatomic) UIVibrancyEffect *shadowEffect;
@property (nonatomic, readonly) _Bool hasBackground;
@property (nonatomic, readonly) _Bool hasShadow;
@property (nonatomic, readonly) UIVibrancyEffect *shadowViewEffect;
@property (nonatomic, readonly) UIColor *shadowViewBackgroundColor;
@property (nonatomic, readonly) UIColor *shadowViewTintColor;
@property (nonatomic, readonly) UIVibrancyEffect *defaultVibrancyEffect;

+ (id)standardBackgroundData;
+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)opaqueBackgroundData;
+ (id)transparentBackgroundData;

- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (void)describeInto:(id)arg1;
- (void)configureWithDefaultShadow;
- (void)configureWithoutShadow;
- (id)replicate;
- (long long)hashInto:(long long)arg1;
- (_Bool)checkEqualTo:(id)arg1;
- (void)_updateBackgroundFlags;
- (void)_updateShadowFlags;
- (long long)behaviorForTransitioningTo:(id)arg1;

@end
