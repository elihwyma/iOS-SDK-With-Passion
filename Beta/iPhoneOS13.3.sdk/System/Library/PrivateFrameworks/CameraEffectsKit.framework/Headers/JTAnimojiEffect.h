/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTEffect.h>

@class UIImage;

@interface JTAnimojiEffect : JTEffect

@property (nonatomic, readonly) UIImage *thumbnail;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isAvatarKitAvailable;
+ (id)animojiIDs;

- (id)displayName;
- (id)renderEffect;
- (id)initWithEffectID:(id)arg1;
- (id)_cachedRenderEffect;
- (struct CGAffineTransform)transform:(struct CGRect)arg1 basisOrigin:(int)arg2;
- (struct CGRect)_convertRenderEffectRect:(struct CGRect)arg1 toBasisRect:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (void)_convertRenderEffectPoints:(struct CGPoint *)arg1 toBasisRect:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (void)_convertRenderEffectPoints:(struct CGPoint *)arg1 numPoints:(unsigned long long)arg2 toBasisRect:(struct CGRect)arg3 basisOrigin:(int)arg4;
- (void)_convertRenderEffectPoints:(struct CGPoint *)arg1 numPoints:(unsigned long long)arg2 fromBasisRect:(struct CGRect)arg3 basisOrigin:(int)arg4;
- (struct CGAffineTransform)_affineTransformFromEffectRect:(struct CGRect)arg1 toSize:(struct CGSize)arg2 basisOrigin:(int)arg3;

@end
