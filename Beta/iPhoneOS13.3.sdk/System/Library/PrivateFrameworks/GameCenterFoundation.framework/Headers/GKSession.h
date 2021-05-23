/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKConnection, NSString;

@protocol GKSessionDelegate, GKSessionPrivateDelegate;

@interface GKSession : NSObject

{
    id _session;
}

@property id <GKSessionPrivateDelegate> privateDelegate;
@property (getter=isBusy) _Bool busy;
@property _Bool wifiEnabled;
@property (readonly) GKConnection *connection;
@property id <GKSessionDelegate> delegate;
@property (readonly) NSString *sessionID;
@property (readonly) NSString *displayName;
@property (readonly) int sessionMode;
@property (readonly) NSString *peerID;
@property (getter=isAvailable) _Bool available;
@property double disconnectTimeout;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (id)displayNameForPeer:(id)arg1;
- (_Bool)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id *)arg4;
- (_Bool)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id *)arg3;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void *)arg2;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (void)cancelConnectToPeer:(id)arg1;
- (_Bool)acceptConnectionFromPeer:(id)arg1 error:(id *)arg2;
- (void)denyConnectionFromPeer:(id)arg1;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (void)disconnectFromAllPeers;
- (id)peersWithConnectionState:(int)arg1;
- (_Bool)isPeerBusy:(id)arg1;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 sessionMode:(int)arg3;
- (id)privateImpl;

@end
