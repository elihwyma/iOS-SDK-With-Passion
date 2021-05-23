/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBDeviceApplicationSceneHandle;

@protocol SBApplicationSceneStatusBarDescribing <Swift>

@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) _Bool statusBarHidden;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) long long statusBarOrientation;
@property (nonatomic, readonly) int statusBarStyleOverridesToSuppress;
@property (nonatomic, readonly) struct CGRect statusBarAvoidanceFrame;
@property (nonatomic, readonly) NSString *statusBarSceneIdentifier;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *statusBarControllingSceneHandle;

- (unsigned short)statusBarStyleForPartWithIdentifier: /* Error: Ran out of types for this method. */;

@end
