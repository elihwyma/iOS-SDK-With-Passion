/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoardServices/FBSSceneSnapshotAction.h>

@class NSString, RBSAssertion;

@interface FBSceneSnapshotAction : FBSSceneSnapshotAction

{
    NSString *_sceneID;
    RBSAssertion *_assertion;
}

@property (nonatomic, readonly) NSString *sceneID;

- (void)dealloc;
- (id)initWithScene:(id)arg1 requests:(id)arg2 expirationInterval:(double)arg3 responseHandler:(CDUnknownBlockType)arg4;

@end
