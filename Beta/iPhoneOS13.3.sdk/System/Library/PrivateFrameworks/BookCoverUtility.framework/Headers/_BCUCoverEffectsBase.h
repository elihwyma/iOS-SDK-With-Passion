/*
 Image: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
 */

#import <NSObject.h>

@class BCULayerRenderer, NSString, _BCUCoverEffectsAssets, _BCUCoverEffectsShadow;

@interface _BCUCoverEffectsBase : NSObject

{
    _BCUCoverEffectsAssets *_assets;
    _BCUCoverEffectsShadow *_shadow;
    _BCUCoverEffectsShadow *_seriesShadow;
    _Bool _shadowOnly;
    _Bool _restricted;
    NSString *_identifier;
    BCULayerRenderer *_renderer;
}

@property (retain, nonatomic) BCULayerRenderer *renderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;

- (double)cornerRadius;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2 assets:(id)arg3 shadow:(id)arg4 seriesShadow:(id)arg5 shadowOnly:(_Bool)arg6 restricted:(_Bool)arg7;
- (id)_shadowLayerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 tint:(_Bool)arg3 shadow:(id)arg4;
- (id)_coverLayerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
- (struct CGImage *)newRestrictedImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
- (double)_assetsScale;
- (_Bool)includeBinding;
- (id)_layerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 shadow:(id)arg4;
- (id)newOperationWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)coverLayerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3;
- (id)shadowLayerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 kind:(unsigned long long)arg4;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2 assets:(id)arg3 shadow:(id)arg4 seriesShadow:(id)arg5 shadowOnly:(_Bool)arg6;
- (double)tintBlurRadius;

@end
