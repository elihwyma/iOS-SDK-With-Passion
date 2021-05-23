/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoCompositionCoreAnimationTool, AVVideoCompositionInternal, NSArray, NSString;

@interface AVVideoComposition : NSObject

{
    AVVideoCompositionInternal *_videoComposition;
}

@property (nonatomic, readonly) NSString *colorPrimaries;
@property (nonatomic, readonly) NSString *colorYCbCrMatrix;
@property (nonatomic, readonly) NSString *colorTransferFunction;
@property (nonatomic, readonly) Class customVideoCompositorClass;
@property (nonatomic, readonly) CDStruct_1b6d18a9 frameDuration;
@property (nonatomic, readonly) int sourceTrackIDForFrameTiming;
@property (nonatomic, readonly) struct CGSize renderSize;
@property (nonatomic, readonly) float renderScale;
@property (copy, nonatomic, readonly) NSArray *instructions;
@property (retain, nonatomic, readonly) AVVideoCompositionCoreAnimationTool *animationTool;

+ (void)initialize;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;
+ (id)_mutableVideoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(CDUnknownBlockType)arg2;
+ (id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setInstructions:(id)arg1;
- (_Bool)_isValidReturningExceptionReason:(id *)arg1;
- (_Bool)_copyFigVideoCompositor:(const void **)arg1 andSession:(id *)arg2 recyclingSession:(id)arg3 forFigRemaker:(_Bool)arg4 error:(id *)arg5;
- (id)_serializableInstructions;
- (unsigned long long)_changeSeed;
- (id)_deepCopy;
- (void)videoCompositionOutputColorPropertiesWithCustomCompositor:(id)arg1 formatDescriptions:(id)arg2 colorPrimaries:(id *)arg3 transferFunction:(id *)arg4 yCbCrMatrix:(id *)arg5;
- (_Bool)isValidForAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 validationDelegate:(id)arg3;
- (_Bool)_hasLayerAsAuxiliaryTrack;
- (id)_auxiliaryTrackLayer;
- (_Bool)_hasPostProcessingLayers;
- (id)_postProcessingRootLayer;
- (int)_auxiliaryTrackID;
- (id)_postProcessingVideoLayers;
- (id)builtInCompositorName;
- (void)setBuiltInCompositorName:(id)arg1;
- (void)setCustomVideoCompositorClass:(Class)arg1;
- (void)setFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)setSourceTrackIDForFrameTiming:(int)arg1;
- (void)setRenderSize:(struct CGSize)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setColorPrimaries:(id)arg1;
- (void)setColorYCbCrMatrix:(id)arg1;
- (void)setColorTransferFunction:(id)arg1;
- (void)setAnimationTool:(id)arg1;
- (void)_bumpChangeSeed;
- (id)_postProcessingVideoLayer;
- (id)instructionForFigInstruction:(void *)arg1;
- (void)_setFrameDurationForFrameRate:(float)arg1 sourceTrackIDForFrameTiming:(int)arg2;

@end
