/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBApplicationHosting <Swift>

- (unsigned short)isHostingAnApp;
- (unsigned short)hostedAppSceneHandle;
- (unsigned short)canHostAnApp;
- (unsigned short)hostedAppSceneHandles;
- (unsigned short)hostedAppWillRotateToInterfaceOrientation: /* Error: Ran out of types for this method. */;

@end
