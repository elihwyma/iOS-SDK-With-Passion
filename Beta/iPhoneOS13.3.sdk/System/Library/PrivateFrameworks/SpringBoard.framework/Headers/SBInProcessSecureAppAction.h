/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardServices/SBSLockScreenContentAction.h>

@class SBApplicationSceneEntity;

@interface SBInProcessSecureAppAction : SBSLockScreenContentAction

{
    SBApplicationSceneEntity *_applicationSceneEntity;
}

@property (retain, nonatomic) SBApplicationSceneEntity *applicationSceneEntity;

- (id)initWithType:(unsigned long long)arg1 applicationSceneEntity:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)isInProcessAction;

@end
