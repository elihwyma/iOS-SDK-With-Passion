/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <RemoteMediaServices/Swift-Protocol.h>

@class RMSService;

@protocol RMSControlSessionDelegate;

@protocol RMSControlSession <Swift>

@property (weak, nonatomic) id <RMSControlSessionDelegate> delegate;
@property (nonatomic, readonly) RMSService *service;

- (unsigned short)logout;
- (unsigned short)sendText:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)connectToService:pairingGUID:allowPairing:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)beginObservingNowPlaying;
- (unsigned short)endObservingNowPlaying;
- (unsigned short)sendPlaybackCommand:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)pickAudioRoute:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setVolume:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)seekToPlaybackTime:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setLikedState:itemID:databaseID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addToWishlist:databaseID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendTouchMoveWithDirection:repeatCount: /* Error: Ran out of types for this method. */;
- (unsigned short)sendTouchEndWithDirection:repeatCount: /* Error: Ran out of types for this method. */;
- (unsigned short)sendNavigationCommand: /* Error: Ran out of types for this method. */;

@end
