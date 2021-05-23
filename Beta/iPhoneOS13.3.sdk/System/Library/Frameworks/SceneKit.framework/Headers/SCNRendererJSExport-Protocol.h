/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNNode, SCNScene;

@protocol SCNRendererJSExport <Swift>

@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic, readonly) double nextFrameTime;
@property (nonatomic) double currentTime;
@property (nonatomic) _Bool jitteringEnabled;
@property (nonatomic) _Bool temporalAntialiasingEnabled;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic) _Bool loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) id delegate;

+ (unsigned short)rendererWithContext:options: /* Error: Ran out of types for this method. */;
+ (unsigned short)rendererWithDevice:options: /* Error: Ran out of types for this method. */;

- (unsigned short)render;
- (unsigned short)updateAtTime: /* Error: Ran out of types for this method. */;
- (unsigned short)renderAtTime: /* Error: Ran out of types for this method. */;
- (unsigned short)renderWithViewport:commandBuffer:passDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)updateProbes:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)renderAtTime:viewport:commandBuffer:passDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)snapshotAtTime:withSize:antialiasingMode: /* Error: Ran out of types for this method. */;

@end
