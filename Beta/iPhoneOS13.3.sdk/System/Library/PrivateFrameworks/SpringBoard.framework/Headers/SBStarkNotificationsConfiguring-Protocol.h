/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class BSServiceConnectionEndpoint, FBSDisplayIdentity, UIWindow;

@protocol SBStarkNotificationsConfiguring <Swift>

@property (nonatomic, readonly) UIWindow *focusWindow;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *openServiceEndpoint;

- (unsigned short)policyForApp: /* Error: Ran out of types for this method. */;

@end
