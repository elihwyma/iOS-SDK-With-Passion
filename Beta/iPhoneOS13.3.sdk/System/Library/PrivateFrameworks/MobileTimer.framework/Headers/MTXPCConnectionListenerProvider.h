/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTXPCConnectionInfo, NSArray, NSMutableSet, NSString, NSXPCListener;

@protocol NAScheduler;

@interface MTXPCConnectionListenerProvider : NSObject

{
    MTXPCConnectionInfo *_info;
    id <NAScheduler> _serializer;
    NSString *_requiredEntitlement;
    CDUnknownBlockType _errorHandler;
    NSMutableSet *_clients;
    NSXPCListener *_connectionListener;
}

@property (retain, nonatomic) id <NAScheduler> serializer;
@property (copy, nonatomic) NSString *requiredEntitlement;
@property (retain, nonatomic) MTXPCConnectionInfo *info;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (retain, nonatomic) NSMutableSet *clients;
@property (retain, nonatomic) NSXPCListener *connectionListener;
@property (nonatomic, readonly) NSArray *connectedClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startListening;
- (void)stopListening;
- (id)currentClient;
- (id)_connectedClients;
- (void)_didInterruptConnection;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_didInvalidateConnection:(id)arg1;
- (void)addClientConnection:(id)arg1 clientLink:(id)arg2;
- (void)removeClientConnection:(id)arg1;
- (id)_currentClientForConnection:(id)arg1;
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1 excludingCurrent:(_Bool)arg2;
- (void)performBlockOnClientInfos:(CDUnknownBlockType)arg1 excludeCurrent:(_Bool)arg2;
- (void)_performBlockOnClientInfos:(CDUnknownBlockType)arg1 excludingClient:(id)arg2;
- (void)performBlockOnCurrentClient:(CDUnknownBlockType)arg1;
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1;
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1 excludingClient:(id)arg2;

@end
