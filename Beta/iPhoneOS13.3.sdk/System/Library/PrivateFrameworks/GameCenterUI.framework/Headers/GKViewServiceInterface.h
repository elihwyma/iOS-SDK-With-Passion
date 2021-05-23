/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSXPCInterface.h>

@interface GKViewServiceInterface : NSXPCInterface

+ (id)extensionInterface;
+ (id)extensionHostInterface;
+ (id)challengeIssueServiceViewControllerInterface;
+ (id)challengeIssueHostViewControllerInterface;
+ (id)gameCenterServiceViewControllerInterface;
+ (id)gameCenterHostViewControllerInterface;
+ (id)turnBasedServiceViewControllerInterface;
+ (id)turnBasedHostViewControllerInterface;
+ (id)signInServiceViewControllerInterface;
+ (id)remoteSignInViewControllerInterface;
+ (id)matchmakerServiceViewControllerInterface;
+ (id)matchmakerHostViewControllerInterface;
+ (void)_configureKVOTypes:(id)arg1;
+ (void)setClassesForHostInterface:(id)arg1;
+ (void)setClassesForExtensionInterface:(id)arg1;
+ (id)remoteFriendRequestViewControllerInterface;
+ (id)serviceFriendRequestViewControllerInterface;

@end
