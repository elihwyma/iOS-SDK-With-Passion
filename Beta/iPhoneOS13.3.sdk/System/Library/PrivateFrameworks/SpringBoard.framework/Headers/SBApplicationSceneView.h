/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBSceneView.h>

@class SBApplication, SBApplicationSceneHandle;

@interface SBApplicationSceneView : SBSceneView

@property (nonatomic, readonly) SBApplicationSceneHandle *sceneHandle;
@property (nonatomic, readonly) SBApplication *application;

- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4;
- (id)deviceApplicationSceneView;

@end
