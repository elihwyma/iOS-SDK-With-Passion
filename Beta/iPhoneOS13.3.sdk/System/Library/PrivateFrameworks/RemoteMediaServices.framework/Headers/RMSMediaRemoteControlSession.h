/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString, RMSService;

@protocol RMSControlSessionDelegate;

__attribute__((visibility("hidden")))
@interface RMSMediaRemoteControlSession : NSObject

{
    void *_television;
    CDUnknownBlockType _connectionResponseBlock;
    void *_textEditingSession;
    _Bool _observingNowPlaying;
    void *_origin;
    unsigned int _state;
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
- (void)_updateNowPlayingInfo;
- (void)logout;
- (void)sendText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
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
- (_Bool)_isSystemVersionSupported:(void *)arg1;
- (_Bool)_isPairingAllowed:(void *)arg1;
- (void)_didReceivePairingCallbackWithCredentials:(CDStruct_d008d4b8)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didReceiveConnectionStateCallbackWithConnectionState:(unsigned int)arg1 error:(struct __CFError *)arg2;
- (void)_handleConnected;
- (void)_endObservingTextEditingEvents;
- (void)_handleMediaRemoteOriginNowPlayingInfoDidChangeNotification:(id)arg1;
- (void)_handleMediaRemoteNowPlayingApplicationPlaybackStateDidChangeNotification:(id)arg1;
- (void)_handleDisconnectedWithError:(struct __CFError *)arg1;
- (void)_beginObservingTextEditingEvents;
- (void)_unpairExternalDevice;
- (_Bool)_isExternalDeviceConnected;
- (void)_disconnectExternalDevice;
- (void)_didReceiveTextEditingCallbackWithSession:(void *)arg1 eventType:(unsigned int)arg2;
- (void)_didGetTextEditingSession:(void *)arg1 error:(struct __CFError *)arg2;
- (void)_handleDidBeginEditingWithSession:(void *)arg1;
- (void)_handleDidEndEditing;
- (id)_nowPlayingInfoWithNowPlayingMetadata:(id)arg1;
- (id)_artworkDataWithArtwork:(void *)arg1;
- (void)_updateNowPlayingInfo:(id)arg1 withPlaybackState:(unsigned int)arg2;

@end
