/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVVideoCompositionLayerInstruction.h>

@class AVMutableVideoCompositionLayerInstructionInternal;

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction

{
    AVMutableVideoCompositionLayerInstructionInternal *_mutableLayerInstruction;
}

@property (nonatomic) int trackID;

+ (id)videoCompositionLayerInstructionWithAssetTrack:(id)arg1;
+ (id)videoCompositionLayerInstruction;

- (void)setTransform:(struct CGAffineTransform)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setOpacity:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setCropRectangle:(struct CGRect)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setTransformRampFromStartTransform:(struct CGAffineTransform)arg1 toEndTransform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setCropRectangleRampFromStartCropRectangle:(struct CGRect)arg1 toEndCropRectangle:(struct CGRect)arg2 timeRange:(CDStruct_e83c9415)arg3;

@end
