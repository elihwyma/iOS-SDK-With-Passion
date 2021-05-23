/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <BSAction.h>

@class FBSScene, FBSSerialQueue;

@interface FBSSceneAction : BSAction

{
    FBSScene *_scene;
    FBSSerialQueue *_callOutQueue;
}

@property (retain, nonatomic) FBSScene *scene;
@property (retain, nonatomic) FBSSerialQueue *callOutQueue;

@end
