/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNNode, SCNScene;

@protocol SCNMetalLayerJSExport <Swift>

@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) double currentTime;
@property (nonatomic) id delegate;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic) _Bool loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) _Bool showsStatistics;

- (unsigned short)stop: /* Error: Ran out of types for this method. */;
- (unsigned short)play: /* Error: Ran out of types for this method. */;
- (unsigned short)pause: /* Error: Ran out of types for this method. */;

@end
