/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <Foundation/NSObject.h>

@class MCPeerID, NSMutableDictionary, NSNetServiceBrowser, NSString;

@protocol MCNearbyServiceBrowserDelegate, OS_dispatch_queue;

@interface MCNearbyServiceBrowser : NSObject

{
    id <MCNearbyServiceBrowserDelegate> _delegate;
    _Bool _isBrowsing;
    _Bool _wasBrowsing;
    _Bool _AWDLDisabled;
    MCPeerID *_myPeerID;
    NSString *_serviceType;
    NSString *_formattedServiceType;
    NSMutableDictionary *_netServices;
    NSMutableDictionary *_peers;
    NSNetServiceBrowser *_networkBrowser;
    long long _outgoingInviteID;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_invites;
}

@property (retain, nonatomic) NSMutableDictionary *netServices;
@property (retain, nonatomic) NSMutableDictionary *peers;
@property (retain, nonatomic) NSNetServiceBrowser *networkBrowser;
@property (nonatomic) long long outgoingInviteID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *invites;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *formattedServiceType;
@property (nonatomic) _Bool isBrowsing;
@property (nonatomic) _Bool wasBrowsing;
@property (nonatomic, getter=isAWDLDisabled) _Bool AWDLDisabled;
@property (weak, nonatomic) id <MCNearbyServiceBrowserDelegate> delegate;
@property (nonatomic, readonly) MCPeerID *myPeerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (id)initWithPeer:(id)arg1 serviceType:(id)arg2;
- (void)startBrowsingForPeers;
- (void)stopBrowsingForPeers;
- (void)invitePeer:(id)arg1 toSession:(id)arg2 withContext:(id)arg3 timeout:(double)arg4;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncCloseConnectionForPeer:(id)arg1;
- (void)parseIDString:(id *)arg1 displayName:(id *)arg2 fromIdentifier:(id)arg3;
- (void)syncReceivedData:(id)arg1 fromPeer:(id)arg2;
- (void)syncAttachConnection:(id)arg1 toPeer:(id)arg2;
- (void)syncHandleDeclinedInviteWithInfo:(id)arg1;
- (void)syncStartBrowsingForPeers;
- (void)syncStopBrowsingForPeers;
- (long long)syncNextOutgoingInviteID;
- (void)syncHandleInviteTimeout:(id)arg1 forPeer:(id)arg2;
- (void)syncInitiateConnectionToPeer:(id)arg1;
- (void)syncHandleInviteResponse:(id)arg1 fromPeer:(id)arg2;
- (void)syncInvitePeer:(id)arg1 toSession:(id)arg2 withContext:(id)arg3 timeout:(double)arg4;
- (id)rebuildUserDiscoveryInfoFromTXTRecordDictionary:(id)arg1;

@end
