/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class SBApplicationSceneHandle;

@protocol SBApplicationSceneViewControllingStatusBarDelegate;

@protocol SBApplicationSceneViewControlling <Swift>

@property (nonatomic, readonly) SBApplicationSceneHandle *sceneHandle;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) long long overrideStatusBarStyle;
@property (weak, nonatomic) id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;

@end
