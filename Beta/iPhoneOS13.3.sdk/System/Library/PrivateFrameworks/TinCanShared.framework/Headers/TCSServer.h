/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSXPCListener;

@protocol TCSServerXPC;

@interface TCSServer : NSObject

{
    NSXPCListener *_listener;
    struct os_unfair_lock_s _connectionsLock;
    NSMutableArray *_connections;
    id <TCSServerXPC> _delegate;
}

@property (weak, nonatomic) id <TCSServerXPC> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)hasValidConnection;
- (void)_removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)disconnectCall:(id)arg1;
- (void)sessionViewControllerViewDidAppear;
- (void)getCall:(CDUnknownBlockType)arg1;
- (void)getLogEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUplinkMuted:(_Bool)arg1 for:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setClientRecordingInProgress:(_Bool)arg1;
- (void)ensureUplinkMuted;
- (void)queryIsTinCannable:(id)arg1;
- (void)callConnected:(id)arg1;
- (void)callStatusChanged:(id)arg1;
- (void)remoteUplinkMuteChanged:(id)arg1;
- (void)_enumerateConnectionsWithBlock:(CDUnknownBlockType)arg1;

@end
