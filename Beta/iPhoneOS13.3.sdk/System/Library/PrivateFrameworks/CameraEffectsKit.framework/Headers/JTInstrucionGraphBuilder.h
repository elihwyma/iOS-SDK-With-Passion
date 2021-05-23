/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface JTInstrucionGraphBuilder : NSObject

{
    int _renderingIntent;
    int _timeScale;
    struct CGSize _outputSize;
}

@property (nonatomic) struct CGSize outputSize;
@property (nonatomic) int renderingIntent;
@property (nonatomic) int timeScale;

- (id)initWithOutputSize:(struct CGSize)arg1;
- (id)instructionGraphForJTClip:(id)arg1 presentationTimeRange:(CDStruct_e83c9415)arg2 sourceTransform:(struct CGAffineTransform)arg3 compositionTrackID:(int)arg4 liveTransform:(struct PVTransformAnimationInfo *)arg5 excludingEffectType:(int)arg6 customRendererProperties:(struct NSDictionary *)arg7;
- (id)_sourceNodeForVideoMediaItem:(id)arg1 sourceTransform:(struct CGAffineTransform)arg2 compositionTrackID:(int)arg3 transformAnimation:(id)arg4;
- (id)_sourceNodeForStillMediaItem:(id)arg1 sourceTransform:(struct CGAffineTransform)arg2 transformAnimation:(id)arg3 presentationRange:(CDStruct_e83c9415)arg4;
- (id)applyEffectStack:(id)arg1 presentationRange:(CDStruct_e83c9415)arg2 toInput:(id)arg3;
- (id)applyTrackedEffects:(id)arg1 presentationRange:(CDStruct_e83c9415)arg2 renderDelegate:(id)arg3 transform:(struct CGAffineTransform)arg4 metadata:(id)arg5 toInput:(id)arg6;
- (id)sourceNodeForMediaItem:(id)arg1 sourceTransform:(struct CGAffineTransform)arg2 compositionTrackID:(int)arg3 transformAnimation:(id)arg4 presentationTimeRange:(CDStruct_e83c9415)arg5;
- (struct CGAffineTransform)JT_calculateCompositeNodeTransformForCrop;
- (id)blendNodeForClipSourceNodes:(id)arg1;
- (id)aggregateAndApplyTrackableEffects:(id)arg1 presentationRange:(CDStruct_e83c9415)arg2 renderDelegate:(id)arg3 transform:(struct CGAffineTransform)arg4 metadata:(id)arg5 toInput:(id)arg6;
- (id)sourceNodeForImageBuffer:(id)arg1 sourceTransform:(struct CGAffineTransform)arg2;
- (id)sourceNodeForGeneratorEffect:(id)arg1 effectRange:(CDStruct_e83c9415)arg2;
- (id)applyEffectStack:(id)arg1 toInput:(id)arg2;
- (id)arSelfieEffectNode:(id)arg1 inputNode:(id)arg2 maskNode:(id)arg3 bgImageNodes:(id)arg4;
- (id)_buildTestXFormAnimation:(CDStruct_e83c9415)arg1 baseTransform:(struct CGAffineTransform)arg2 clipNaturalSize:(struct CGSize)arg3;

@end
