/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNCameraController, SCNNode, SCNScene;

@protocol SCNCameraControlConfiguration;

@protocol SCNViewJSExport <Swift>

@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) _Bool rendersContinuously;
@property (copy, nonatomic) id backgroundColor;
@property (nonatomic) _Bool allowsCameraControl;
@property (nonatomic, readonly) id <SCNCameraControlConfiguration> cameraControlConfiguration;
@property (nonatomic, readonly) SCNCameraController *defaultCameraController;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) double currentTime;
@property (nonatomic) id delegate;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic) _Bool loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) _Bool showsStatistics;

- (unsigned short)snapshot;
- (unsigned short)stop: /* Error: Ran out of types for this method. */;
- (unsigned short)play: /* Error: Ran out of types for this method. */;
- (unsigned short)pause: /* Error: Ran out of types for this method. */;

@end
