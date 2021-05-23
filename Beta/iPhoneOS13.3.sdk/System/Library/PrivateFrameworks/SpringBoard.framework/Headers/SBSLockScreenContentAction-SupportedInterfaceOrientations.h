/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardServices/SBSLockScreenContentAction.h>

@class SBApplicationSceneEntity;

@interface SBSLockScreenContentAction (SupportedInterfaceOrientations)

@property (retain, nonatomic) SBApplicationSceneEntity *applicationSceneEntity;

- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)specifiesSupportedInterfaceOrientations;
- (_Bool)isInProcessAction;

@end
