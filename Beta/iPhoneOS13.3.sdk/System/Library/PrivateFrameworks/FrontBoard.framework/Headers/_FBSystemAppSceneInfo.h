/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBSScene, FBSSceneTransitionContext, UIScene, UIWindow;

@interface _FBSystemAppSceneInfo : NSObject

{
    _Bool _isWindowScene;
    _Bool _hasSentFBSWorkspaceDelegateSceneCreate;
    FBSScene *_FBSScene;
    UIScene *_UIScene;
    UIWindow *_primaryWindow;
    FBSSceneTransitionContext *_pendingTransitionContext;
}

@property (retain, nonatomic) FBSScene *FBSScene;
@property (retain, nonatomic) UIScene *UIScene;
@property (weak, nonatomic) UIWindow *primaryWindow;
@property (nonatomic, readonly) _Bool isWindowScene;
@property (nonatomic) _Bool hasSentFBSWorkspaceDelegateSceneCreate;
@property (retain, nonatomic) FBSSceneTransitionContext *pendingTransitionContext;

@end
