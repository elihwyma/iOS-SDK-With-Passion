/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNNode, SCNView;

@protocol SCNEventHandler <Swift>

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool enableFreeCamera;
@property (nonatomic, readonly) SCNNode *freeCamera;
@property (nonatomic) SCNView *view;

- (unsigned short)gestureRecognizers;
- (unsigned short)sceneWillChange;
- (unsigned short)sceneDidChange;
- (unsigned short)viewWillDrawAtTime: /* Error: Ran out of types for this method. */;
- (unsigned short)viewDidDrawAtTime: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraWillChange;
- (unsigned short)cameraDidChange;
- (unsigned short)wantsRedraw;
- (unsigned short)activateFreeCamera;

@end
