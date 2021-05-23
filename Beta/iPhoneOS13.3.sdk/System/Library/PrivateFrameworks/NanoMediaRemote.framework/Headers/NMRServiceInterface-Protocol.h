/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <NanoMediaRemote/Swift-Protocol.h>

@protocol NMRServiceInterface <Swift>

- (unsigned short)refreshMediaRemoteStateIfNecessary;
- (unsigned short)sendMediaRemoteCommand:withCommandOptions:toOriginWithUniqueIdentifier:commandResultHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)prewarmCompanionSystemMusicApp;
- (unsigned short)fetchCompanionCloudAvailabilityWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)discoverAndConnectEndpoints;

@end
