/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <Foundation/NSObject.h>

@class MCPeerID, NSData, NSDictionary, NSMutableDictionary, NSNetService, NSString;

@protocol MCNearbyServiceAdvertiserDelegate, OS_dispatch_queue;

@interface MCNearbyServiceAdvertiser : NSObject

{
    id <MCNearbyServiceAdvertiserDelegate> _delegate;
    _Bool _isAdvertising;
    _Bool _wasAdvertising;
    _Bool _AWDLDisabled;
    MCPeerID *_myPeerID;
    NSDictionary *_discoveryInfo;
    NSString *_serviceType;
    NSString *_formattedServiceType;
    NSNetService *_networkServer;
    NSData *_TXTRecordData;
    NSMutableDictionary *_peers;
    long long _outgoingInviteID;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_invites;
}

@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *formattedServiceType;
@property (retain, nonatomic) NSMutableDictionary *peers;
@property (copy, nonatomic) NSDictionary *discoveryInfo;
@property (retain, nonatomic) NSNetService *networkServer;
@property (retain, nonatomic) NSData *TXTRecordData;
@property (nonatomic) long long outgoingInviteID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *invites;
@property (nonatomic) _Bool isAdvertising;
@property (nonatomic) _Bool wasAdvertising;
@property (nonatomic, getter=isAWDLDisabled) _Bool AWDLDisabled;
@property (weak, nonatomic) id <MCNearbyServiceAdvertiserDelegate> delegate;
@property (nonatomic, readonly) MCPeerID *myPeerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netServiceDidPublish:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (id)txtRecordDataWithDiscoveryInfo:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (id)makeTXTRecordDataWithDiscoveryInfo:(id)arg1;
- (void)syncStartAdvertisingPeer;
- (void)syncStopAdvertisingPeer;
- (void)stopAdvertisingPeer;
- (void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncCloseConnectionForPeer:(id)arg1;
- (void)syncHandleInvite:(id)arg1 fromPeer:(id)arg2;
- (void)syncHandleInviteConnect:(id)arg1 fromPeer:(id)arg2;
- (void)parseIDString:(id *)arg1 displayName:(id *)arg2 fromIdentifier:(id)arg3;
- (void)syncReceivedData:(id)arg1 fromPeer:(id)arg2;
- (void)syncAttachConnection:(id)arg1 toPeer:(id)arg2;
- (void)syncHandleIncomingInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithPeer:(id)arg1 discoveryInfo:(id)arg2 serviceType:(id)arg3;
- (void)startAdvertisingPeer;

@end
