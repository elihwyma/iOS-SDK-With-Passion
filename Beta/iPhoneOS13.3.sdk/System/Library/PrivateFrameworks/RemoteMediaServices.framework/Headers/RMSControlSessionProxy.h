/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <RemoteMediaServices/RMSSessionProxy.h>

@class NSString, RMSIDSClient, RMSNowPlayingInfo, RMSService;

@protocol RMSControlSessionDelegate;

__attribute__((visibility("hidden")))
@interface RMSControlSessionProxy : RMSSessionProxy

{
    RMSIDSClient *_idsClient;
    RMSNowPlayingInfo *_nowPlayingInfo;
    id <RMSControlSessionDelegate> _delegate;
    RMSService *_service;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <RMSControlSessionDelegate> delegate;
@property (nonatomic, readonly) RMSService *service;

- (id)init;
- (void)dealloc;
- (void)logout;
- (void)sendText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)heartbeatDidFail;
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 allowPairing:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginObservingNowPlaying;
- (void)endObservingNowPlaying;
- (void)sendPlaybackCommand:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pickAudioRoute:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setVolume:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToPlaybackTime:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendNavigationCommand:(long long)arg1;
- (void)_handleDidReceivePairingChallengeRequestNotification:(id)arg1;
- (void)_handleNowPlayingInfoDidUpdateNotification:(id)arg1;
- (void)_handleNowPlayingArtworkDidBecomeAvailableNotification:(id)arg1;
- (void)_handleAudioRoutesDidUpdateNotification:(id)arg1;
- (void)_handleVolumeDidUpdateNotification:(id)arg1;
- (void)_handleDidBeginEditingTextNotification:(id)arg1;
- (void)_handleDidEndEditingTextNotification:(id)arg1;
- (void)_notifyDelegateForArtworkChange;

@end
