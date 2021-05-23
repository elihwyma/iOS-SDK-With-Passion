/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNNode, SCNOffscreenRenderer, SCNScene, SKTransition;

__attribute__((visibility("hidden")))
@interface SCNRendererTransitionContext : NSObject

{
    double _transitionStartTime;
    SKTransition *_transition;
    SCNScene *_outgoingScene;
    SCNNode *_outgoingPointOfView;
    CDUnknownBlockType completionHandler;
    struct __C3DFXPass *_transitionPass;
    SCNOffscreenRenderer *_renderers[2];
}

@property (retain, nonatomic) SCNScene *outgoingScene;
@property (retain, nonatomic) SKTransition *transition;
@property (nonatomic) double transitionStartTime;
@property (retain, nonatomic) SCNNode *outgoingPointOfView;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __C3DFXPass *)transitionPass;
- (id)prepareRendererAtIndex:(int)arg1 withScene:(id)arg2 renderSize:(struct CGSize)arg3 pointOfView:(id)arg4 parentRenderer:(id)arg5;

@end
