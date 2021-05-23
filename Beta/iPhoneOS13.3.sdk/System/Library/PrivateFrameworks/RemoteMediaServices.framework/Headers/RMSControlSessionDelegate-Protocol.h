/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <RemoteMediaServices/Swift-Protocol.h>

@protocol RMSControlSessionDelegate <Swift>

- (unsigned short)controlSession:didReceivePairingChallengeRequestWithCredentials:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)controlSession:didUpdateNowPlayingInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)controlSession:artworkDataDidBecomeAvailable:identifier: /* Error: Ran out of types for this method. */;
- (unsigned short)controlSession:didUpdateAudioRoutes: /* Error: Ran out of types for this method. */;
- (unsigned short)controlSession:didUpdateVolume: /* Error: Ran out of types for this method. */;
- (unsigned short)controlSessionDidBeginEditingText: /* Error: Ran out of types for this method. */;
- (unsigned short)controlSessionDidEndEditingText: /* Error: Ran out of types for this method. */;
- (unsigned short)controlSessionDidEnd: /* Error: Ran out of types for this method. */;

@end
