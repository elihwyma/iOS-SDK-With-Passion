/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTEffect.h>

@interface JTFilterEffect : JTEffect

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setForceRenderAtPosterFrame:(_Bool)arg1;
- (_Bool)enablePresentationState:(_Bool)arg1;
- (id)initWithEffectID:(id)arg1;

@end
