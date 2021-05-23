/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBSSceneTransitionContext, FBScene;

@interface _FBClientSettingObserverContext : NSObject

{
    FBScene *_scene;
    FBSSceneTransitionContext *_transitionContext;
}

@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext;

- (id)initWithScene:(id)arg1 transitionContext:(id)arg2;

@end
