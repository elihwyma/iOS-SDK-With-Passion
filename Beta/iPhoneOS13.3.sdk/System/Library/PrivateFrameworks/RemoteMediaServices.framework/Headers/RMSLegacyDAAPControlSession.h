/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString, RMSDAAPLoginManager, RMSDAAPNowPlayingManager, RMSDAAPRequestManager, RMSDAAPTouchRemoteManager, RMSNowPlayingInfo, RMSService;

@protocol RMSControlSessionDelegate;

__attribute__((visibility("hidden")))
@interface RMSLegacyDAAPControlSession : NSObject

{
    RMSDAAPRequestManager *_requestManager;
    RMSDAAPLoginManager *_loginManager;
    RMSDAAPNowPlayingManager *_nowPlayingManager;
    RMSDAAPTouchRemoteManager *_touchRemoteManager;
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
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 allowPairing:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)nowPlayingManager:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
- (void)beginObservingNowPlaying;
- (void)nowPlayingManager:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3;
- (void)nowPlayingManager:(id)arg1 didUpdateAudioRoutes:(id)arg2;
- (void)nowPlayingManager:(id)arg1 didUpdateVolume:(float)arg2;
- (void)endObservingNowPlaying;
- (void)requestManagerFailedWithUnknownError:(id)arg1;
- (void)requestManagerFailedWithUnauthorizedError:(id)arg1;
- (void)sendPlaybackCommand:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pickAudioRoute:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setVolume:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToPlaybackTime:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendNavigationCommand:(long long)arg1;
- (void)_initializeManagersWithControlInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_stringFromRMSPlaybackCommand:(long long)arg1;
- (void)touchRemoteManagerDidDisconnect:(id)arg1;

@end
