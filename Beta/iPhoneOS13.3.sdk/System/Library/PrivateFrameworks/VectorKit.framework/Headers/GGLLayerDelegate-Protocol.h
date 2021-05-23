/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@protocol GGLLayerDelegate

- (unsigned short)didPresent;
- (unsigned short)renderQueueForTimestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)isDelayedRenderQueueConsumptionSupported;
- (unsigned short)prepareTexture: /* Error: Ran out of types for this method. */;
- (unsigned short)drawToTexture:withRenderQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)willPresent;
- (unsigned short)willUpdateFrameTexture;
- (unsigned short)didUpdateFrameTexture;

@end
