/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock, NSMutableDictionary, NSString, PVEffect;

@interface JTEffect : NSObject

{
    NSString *_effectID;
    int _type;
    PVEffect *_renderEffect;
    NSMutableDictionary *_effectParameters;
    NSMutableDictionary *_dirtyEffectParameters;
    NSLock *_paramLock;
    _Bool _isNone;
    struct CGSize _renderSize;
}

@property (nonatomic, readonly) NSString *effectID;
@property (nonatomic, readonly) _Bool isNone;
@property (nonatomic, readonly) int type;
@property _Bool forceRenderAtPosterFrame;
@property _Bool forceDisableLooping;
@property (copy, nonatomic) NSDictionary *effectParameters;
@property (nonatomic) struct CGSize renderSize;
@property (nonatomic) double outputAspect;
@property (nonatomic, readonly) _Bool renderEffectResourcesAreReady;

+ (_Bool)supportsSecureCoding;
+ (_Bool)effectIDIsNone:(id)arg1;
+ (_Bool)posterFrameCannotBeCached:(id)arg1;
+ (double)rotationFromAffineTransform:(struct CGAffineTransform)arg1;
+ (struct CGPoint)scaleFromAffineTransform:(struct CGAffineTransform)arg1;
+ (_Bool)loopedRangeRenderCanBeCached:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (id)parameterForKey:(id)arg1;
- (id)accessibilityName;
- (_Bool)enablePresentationState:(_Bool)arg1;
- (id)renderEffect;
- (id)initWithEffectID:(id)arg1;
- (id)_cachedRenderEffect;
- (struct CGAffineTransform)transform:(struct CGRect)arg1 basisOrigin:(int)arg2;
- (struct CGRect)_convertRenderEffectRect:(struct CGRect)arg1 toBasisRect:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (void)_convertRenderEffectPoints:(struct CGPoint *)arg1 toBasisRect:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (void)_convertRenderEffectPoints:(struct CGPoint *)arg1 numPoints:(unsigned long long)arg2 toBasisRect:(struct CGRect)arg3 basisOrigin:(int)arg4;
- (void)_convertRenderEffectPoints:(struct CGPoint *)arg1 numPoints:(unsigned long long)arg2 fromBasisRect:(struct CGRect)arg3 basisOrigin:(int)arg4;
- (struct CGAffineTransform)_affineTransformFromEffectRect:(struct CGRect)arg1 toSize:(struct CGSize)arg2 basisOrigin:(int)arg3;
- (CDStruct_e83c9415)rangeForPresentationRange:(CDStruct_e83c9415)arg1;
- (struct CGAffineTransform)applyTransform:(struct CGAffineTransform)arg1 withComponentTime:(CDStruct_1b6d18a9)arg2 relativeTo:(struct CGRect)arg3 basisOrigin:(int)arg4;
- (_Bool)loadRenderEffect;
- (void)setBuildInAnimation:(_Bool)arg1;
- (id)serializableEffectParameters;
- (_Bool)isConfiguredForOutputAspect:(double)arg1;
- (void)setIsInInteractiveMode:(_Bool)arg1;
- (_Bool)isInInteractiveMode;
- (id)parametersClassWhitelist;
- (void)_createCachedRenderEffect_noLock;
- (_Bool)isConfiguredForOutputAspectMatchingSize:(struct CGSize)arg1;
- (_Bool)buildInAnimation;
- (void)setBuildOutAnimation:(_Bool)arg1;
- (_Bool)buildOutAnimation;
- (id)getParentTransformAnimation;
- (void)setParentTransformAnimation:(id)arg1;
- (void)setTransform:(id)arg1 relativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (void)setTopLevelAdditionalScale:(struct CGPoint)arg1;
- (void)removeTopLevelAdditionalScale;

@end
