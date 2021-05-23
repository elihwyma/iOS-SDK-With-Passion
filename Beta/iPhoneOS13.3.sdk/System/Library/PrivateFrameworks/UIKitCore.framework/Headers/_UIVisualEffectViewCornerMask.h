/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewCornerMask : NSObject <Swift>

{
    UIImage *_image;
    struct CGRect _imageCenter;
    unsigned long long _appliedCorners;
    _Bool _continuous;
    _Bool _effectsEdges;
    double _radius;
}

@property (nonatomic, readonly) double radius;

+ (id)cornerMaskWithRadius:(double)arg1 continuous:(_Bool)arg2 cornerMask:(unsigned long long)arg3;
+ (id)cornerMaskWithRadius:(double)arg1;
+ (id)continuousCornerMaskWithRadius:(double)arg1;
+ (id)imageCornerMaskWithImage:(id)arg1 radius:(double)arg2;
+ (void)_applyZeroMaskToLayer:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_clone;
- (id)cornerMaskAppliedToCorners:(unsigned long long)arg1;
- (id)cornerMaskEffectingEdges:(_Bool)arg1;
- (void)_applyToLayer:(id)arg1;
- (_Bool)_isCornerWithRadius:(double)arg1 continuous:(_Bool)arg2 mask:(unsigned long long)arg3;

@end
