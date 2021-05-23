/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSDictionary, NSProxyConnection, NSString, SocksHandshake;

@protocol OS_dispatch_queue;

@interface _NSCFSocksProxy : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    int _outPort;
    NSString *_outHost;
    SocksHandshake *_socksHandshake;
    NSProxyConnection *_inbound;
    NSProxyConnection *_outbound;
    NSDictionary *_configuration;
}

@property (retain) NSProxyConnection *inbound;
@property (retain) NSProxyConnection *outbound;
@property (retain) NSDictionary *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3;
+ (id)proxyServers;

- (void)dealloc;
- (void)cleanup;
- (void)connected:(int)arg1;
- (void)outboundConnectionReceivedData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)outboundConnectionCompleteWithError:(int)arg1;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (void)handshakeRead;
- (void)readInbound;
- (void)readOutbound;

@end
