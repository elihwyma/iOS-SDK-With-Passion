/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGraphicsRendererFormat.h>

@interface UIGraphicsImageRendererFormat : UIGraphicsRendererFormat

{
    struct CGColorSpace *_overrideColorSpace;
    _Bool _opaque;
    long long _overrideBitsPerComponent;
    double _scale;
    long long _preferredRange;
}

@property (nonatomic, getter=_overrideColorSpace, setter=_setOverrideColorSpace:) struct CGColorSpace *_overrideColorSpace;
@property (nonatomic, getter=_overrideBitsPerComponent, setter=_setOverrideBitsPerComponent:) long long _overrideBitsPerComponent;
@property (nonatomic, readonly, getter=_contextScale) double _contextScale;
@property (nonatomic, getter=_wantsAlphaMask, setter=_setWantsAlphaMask:) _Bool _wantsAlphaMask;
@property (nonatomic, getter=_grayscale, setter=_setGrayscale:) _Bool _grayscale;
@property (nonatomic) double scale;
@property (nonatomic) _Bool opaque;
@property (nonatomic) _Bool prefersExtendedRange;
@property (nonatomic) long long preferredRange;

+ (id)preferredFormat;
+ (id)defaultFormat;
+ (id)formatForTraitCollection:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
