/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@protocol GGLLayerDelegate;

@protocol GGLLayer

@property id <GGLLayerDelegate> renderDelegate;
@property (nonatomic, readonly) struct CGSize backingSize;
@property (readonly) int backingFormat;

- (unsigned short)didEnterBackground;
- (unsigned short)onTimerFired: /* Error: Ran out of types for this method. */;

@end
