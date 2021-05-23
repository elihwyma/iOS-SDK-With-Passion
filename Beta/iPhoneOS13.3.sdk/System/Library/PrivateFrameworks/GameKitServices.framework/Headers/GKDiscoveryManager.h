/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class GKDiscoveryBonjour, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface GKDiscoveryManager : NSObject

{
    CDUnknownBlockType _playerFoundHandler;
    CDUnknownBlockType _playerLostHandler;
    CDUnknownBlockType _receiveDataHandler;
    NSString *_playerID;
    NSString *_deviceID;
    NSMutableDictionary *_peers;
    GKDiscoveryBonjour *_bonjour;
    NSObject<OS_dispatch_queue> *_peersQueue;
}

@property (copy, nonatomic) NSString *playerID;
@property (copy, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSMutableDictionary *peers;
@property (retain, nonatomic) GKDiscoveryBonjour *bonjour;
@property (copy, nonatomic) CDUnknownBlockType playerFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType playerLostHandler;
@property (copy, nonatomic) CDUnknownBlockType receiveDataHandler;

+ (id)parseDeviceIDFromServiceName:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)stopAdvertising;
- (void)stopBrowsing;
- (id)localServiceName;
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;
- (void)startBrowsingLocalPlayer:(id)arg1;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (id)generateDeviceID;
- (void)processEvent:(int)arg1 forPeer:(id)arg2 withUserInfo:(id)arg3;
- (void)didLosePeer:(id)arg1;
- (void)passDataToGKLayer:(id)arg1 fromPeer:(id)arg2;
- (void)resolveForPeer:(id)arg1;
- (void)connectToSockAddr:(struct sockaddr *)arg1 port:(unsigned short)arg2 forPeer:(id)arg3;
- (id)serviceNameforDeviceID:(id)arg1 playerID:(id)arg2;
- (id)peersList;
- (void)cleanUpPeersForBrowse;
- (void)addInterface:(unsigned int)arg1 withDiscoveryInfo:(id)arg2 forPeerWithServiceName:(id)arg3;
- (void)removeInterface:(unsigned int)arg1 forPeerWithServiceName:(id)arg2;

@end
