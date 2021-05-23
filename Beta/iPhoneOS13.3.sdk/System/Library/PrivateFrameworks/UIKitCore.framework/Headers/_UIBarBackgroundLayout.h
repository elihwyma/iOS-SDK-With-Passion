/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIColor, UIImage, UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundLayout : NSObject <Swift>

{
    double _backgroundAlpha;
    double _shadowAlpha;
    double _backgroundHeight1;
    double _backgroundHeight2;
    double _backgroundTransitionProgress;
    long long _interfaceIdiom;
    long long _interfaceStyle;
    _Bool _useExplicitGeometry;
    _Bool _disableTinting;
    _Bool _shadowHidden;
    UIVibrancyEffect *_bg1ShadowEffect;
    UIVibrancyEffect *_bg2ShadowEffect;
}

@property (nonatomic, readonly) double bgInset;
@property (nonatomic, readonly) _Bool shouldUseExplicitGeometry;
@property (nonatomic, readonly) double bg1Alpha;
@property (nonatomic, readonly) NSArray *bg1Effects;
@property (nonatomic, readonly) UIColor *bg1Color;
@property (nonatomic, readonly) UIImage *bg1Image;
@property (nonatomic, readonly) double bg1ImageAlpha;
@property (nonatomic, readonly) long long bg1ImageMode;
@property (nonatomic, readonly) _Bool bg1HasShadow;
@property (nonatomic, readonly) UIColor *bg1ShadowColor;
@property (nonatomic, readonly) UIImage *bg1ShadowImage;
@property (nonatomic, readonly) UIVibrancyEffect *bg1ShadowEffect;
@property (nonatomic, readonly) UIColor *bg1ShadowTint;
@property (nonatomic, readonly) double bg1ShadowAlpha;
@property (nonatomic, readonly) _Bool bg2Enabled;
@property (nonatomic, readonly) double bg2Alpha;
@property (nonatomic, readonly) NSArray *bg2Effects;
@property (nonatomic, readonly) UIColor *bg2Color;
@property (nonatomic, readonly) UIImage *bg2Image;
@property (nonatomic, readonly) long long bg2ImageMode;
@property (nonatomic, readonly) _Bool bg2HasShadow;
@property (nonatomic, readonly) UIColor *bg2ShadowColor;
@property (nonatomic, readonly) UIImage *bg2ShadowImage;
@property (nonatomic, readonly) UIVibrancyEffect *bg2ShadowEffect;
@property (nonatomic, readonly) UIColor *bg2ShadowTint;
@property (nonatomic, readonly) double bg2ShadowAlpha;
@property (nonatomic) long long interfaceIdiom;
@property (nonatomic) long long interfaceStyle;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) _Bool shadowHidden;
@property (nonatomic) _Bool useExplicitGeometry;
@property (nonatomic) double backgroundHeight1;
@property (nonatomic) double backgroundHeight2;
@property (nonatomic) double backgroundTransitionProgress;
@property (nonatomic, readonly) double topInset;
@property (nonatomic) _Bool disableTinting;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)describeInto:(id)arg1;
- (id)initWithLayout:(id)arg1;
- (_Bool)bg2HasHeight;

@end
