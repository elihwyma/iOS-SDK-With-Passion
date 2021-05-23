/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/Swift-Protocol.h>

@class FBSceneSnapshot;

@protocol FBSceneHostSnapshotView <Swift>

@property (retain, nonatomic, readonly) FBSceneSnapshot *sceneSnapshot;
@property (retain, nonatomic, readonly) id IOSurface;

@end
