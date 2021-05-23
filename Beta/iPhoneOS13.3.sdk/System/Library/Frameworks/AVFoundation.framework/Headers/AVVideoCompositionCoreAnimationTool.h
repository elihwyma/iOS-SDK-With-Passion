/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject

{
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;
}

+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg1 inLayer:(id)arg2;

- (void)dealloc;
- (_Bool)_hasLayerAsAuxiliaryTrack;
- (id)_auxiliaryTrackLayer;
- (_Bool)_hasPostProcessingLayers;
- (id)_postProcessingRootLayer;
- (int)_auxiliaryTrackID;
- (id)_postProcessingVideoLayers;
- (id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayers:(id)arg3;

@end
