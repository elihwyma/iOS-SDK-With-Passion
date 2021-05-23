/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNNode, SCNView;

@interface SCNEventHandler : NSObject

{
    SCNView *_view;
    _Bool _enableFreeCamera;
    _Bool _autoSwitchToFreeCamera;
}

@property (readonly) SCNView *view;
@property _Bool enableFreeCamera;
@property _Bool autoSwitchToFreeCamera;
@property (readonly) SCNNode *freeCamera;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setView:(id)arg1;
- (id)gestureRecognizers;
- (void)sceneWillChange;
- (void)sceneDidChange;
- (void)viewWillDrawAtTime:(double)arg1;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (_Bool)wantsRedraw;
- (void)activateFreeCamera;

@end
