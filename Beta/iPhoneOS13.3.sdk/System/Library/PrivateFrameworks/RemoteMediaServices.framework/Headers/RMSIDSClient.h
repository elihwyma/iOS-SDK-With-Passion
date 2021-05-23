/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RMSIDSClient : NSObject

{
    NSMutableDictionary *_messageRecords;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_idsDispatchQueue;
    NSObject<OS_dispatch_queue> *_idsOutgoingQueue;
    _Bool _companionAvailable;
}

@property (nonatomic, getter=isCompanionAvailable) _Bool companionAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedClient;

- (id)init;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)beginDiscoverySessionWithDiscoveryTypes:(int)arg1 pairedNetworkNames:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePairedNetworkNames:(id)arg1 sessionIdentifier:(int)arg2;
- (void)endDiscoverySession:(int)arg1;
- (void)sendHeartbeatWithSessionIdentifier:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAvailableServicesDidUpdate:(id)arg1;
- (void)_handlePairingChallengeRequest:(id)arg1;
- (void)_handleNowPlayingInfoDidUpdate:(id)arg1;
- (void)_handleNowPlayingArtworkAvailable:(id)arg1;
- (void)_handleAudioRoutesDidUpdate:(id)arg1;
- (void)_handleVolumeDidUpdate:(id)arg1;
- (void)_handlePairingDidSucceed:(id)arg1;
- (void)_handlePairingDidFail:(id)arg1;
- (void)_handleSessionDidEnd:(id)arg1;
- (void)_handleWifiAvailabilityDidChange:(id)arg1;
- (void)_handleDidBeginEditingText:(id)arg1;
- (void)_handleDidEndEditingText:(id)arg1;
- (void)_handleBeginDiscoverySessionResponse:(id)arg1;
- (void)_handleConnectToServiceResponse:(id)arg1;
- (void)_handleNowPlayingArtworkDataResponse:(id)arg1;
- (void)_handleBeginPairingSessionResponse:(id)arg1;
- (void)_handleHeartbeatResponse:(id)arg1;
- (void)_handlePickAudioRouteResponse:(id)arg1;
- (void)_handleSetLikedStateResponse:(id)arg1;
- (void)_handleBeginObservingNowPlayingResponse:(id)arg1;
- (void)_handleSendTextResponse:(id)arg1;
- (void)_handleUnpairServiceResponse:(id)arg1;
- (void)_updateCompanionAvailability;
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 timeout:(int)arg3 queueOneID:(id)arg4 priority:(long long)arg5 responseBlock:(id)arg6;
- (void)_invokeBeginDiscoveryResponseBlock:(id)arg1 success:(_Bool)arg2 session:(int)arg3;
- (void)_handleResponseCodeMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 sendTimeout:(int)arg3 responseTimeout:(int)arg4 queueOneID:(id)arg5 priority:(long long)arg6 responseBlock:(id)arg7;
- (void)_invokeConnectToServiceResponseBlock:(id)arg1 responseCode:(long long)arg2 responseData:(int)arg3 controlInterface:(id)arg4 session:(int)arg5;
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 timeout:(int)arg3 queueOneID:(id)arg4 priority:(long long)arg5 inResponseToProtobuf:(id)arg6;
- (void)_invokeArtworkDataResponseBlock:(id)arg1 artworkData:(id)arg2;
- (void)_invokeBeginPairingResponseBlock:(id)arg1 responseCode:(long long)arg2 session:(int)arg3;
- (void)endPairingSession:(int)arg1;
- (void)_invokeSetTextResponseBlock:(id)arg1 responseCode:(long long)arg2 session:(int)arg3;
- (void)_invokeResponseCodeResponseBlock:(id)arg1 responseCode:(long long)arg2;
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 sendTimeout:(int)arg3 responseTimeout:(int)arg4 queueOneID:(id)arg5 priority:(long long)arg6 inResponseToProtobuf:(id)arg7 responseBlock:(id)arg8;
- (void)_handleTimeoutForMessageWithIdentifier:(id)arg1;
- (_Bool)_isCompanionAvailable;
- (_Bool)_isInMinimalConfiguration;
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 allowPairing:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)logoutWithSessionIdentifier:(int)arg1;
- (void)_invokeCompletePairingChallengeResponseBlock:(id)arg1 responseCode:(long long)arg2 controlInterface:(id)arg3;
- (void)sendPlaybackCommand:(long long)arg1 sessionIdentifier:(int)arg2;
- (void)setVolume:(float)arg1 sessionIdentifier:(int)arg2;
- (void)pickAudioRouteWithMacAddress:(unsigned long long)arg1 sessionIdentifier:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekToPlaybackTime:(int)arg1 sessionIdentifier:(int)arg2;
- (void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 sessionIdentifier:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 sessionIdentifier:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleAddToWishlistResponse:(id)arg1;
- (void)beginObservingNowPlayingWithSessionIdentifier:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endObservingNowPlayingWithSessionIdentifier:(int)arg1;
- (void)requestArtworkDataForNowPlayingInfo:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 compressionQuality:(float)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2 sessionIdentifier:(int)arg3;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2 sessionIdentifier:(int)arg3;
- (void)sendNavigationCommand:(long long)arg1 sessionIdentifier:(int)arg2;
- (void)beginPairingSessionWithPasscode:(id)arg1 appName:(id)arg2 deviceName:(id)arg3 deviceModel:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)unpairService:(id)arg1 sessionIdentifier:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendText:(id)arg1 sessionIdentifier:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
