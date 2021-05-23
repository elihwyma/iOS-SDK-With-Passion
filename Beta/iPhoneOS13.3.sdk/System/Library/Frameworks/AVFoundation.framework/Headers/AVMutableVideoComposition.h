/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVVideoComposition.h>

@class AVMutableVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition

{
    AVMutableVideoCompositionInternal *_mutableVideoComposition;
}

@property (retain, nonatomic) Class customVideoCompositorClass;
@property (nonatomic) CDStruct_1b6d18a9 frameDuration;
@property (nonatomic) int sourceTrackIDForFrameTiming;
@property (nonatomic) struct CGSize renderSize;
@property (nonatomic) float renderScale;
@property (copy, nonatomic) NSArray *instructions;
@property (retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;

+ (id)videoComposition;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;
+ (id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(CDUnknownBlockType)arg2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 prototypeInstruction:(id)arg2;

- (id)builtInCompositorName;
- (id)colorPrimaries;
- (id)colorYCbCrMatrix;
- (id)colorTransferFunction;
- (void)setBuiltInCompositorName:(id)arg1;
- (void)setColorPrimaries:(id)arg1;
- (void)setColorYCbCrMatrix:(id)arg1;
- (void)setColorTransferFunction:(id)arg1;

@end
