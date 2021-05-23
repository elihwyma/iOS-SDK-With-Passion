/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/Swift-Protocol.h>

@protocol GKDaemonProtocol <Swift>

- (unsigned short)handleCloudKitShareMetadata:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setHostPID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setTestGame:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getAuthenticatedPlayerIDWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAccountNameWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAuthenticatedPlayerInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)getAuthenticatedLocalPlayersWithStatus:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)localizedMessageFromDictionary:forBundleID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadRemoteImageDataForURL:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)processQuickAction: /* Error: Ran out of types for this method. */;
- (unsigned short)resetLoginCancelCount;
- (unsigned short)getServicesForPID:localPlayer:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getPrivateServicesForPID:localPlayer:reply: /* Error: Ran out of types for this method. */;

@end
