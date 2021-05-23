/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@class GCDAsyncSocket, NSMutableArray, NSMutableDictionary, NSURL, STServerConnection;

@protocol OS_dispatch_queue, STAceObjectHandler;

@interface STProxySocketDelegate : NSObject

{
    NSURL *_serverURL;
    NSURL *_replayURL;
    unsigned long long _port;
    _Bool _usingTLS;
    id <STAceObjectHandler> _handler;
    GCDAsyncSocket *_serverSocket;
    GCDAsyncSocket *_listenSocket;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSMutableArray *_connectedSockets;
    NSMutableDictionary *_clientConnections;
    STServerConnection *_serverConnection;
}

- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (id)initWithActiveServerURL:(id)arg1 handler:(id)arg2 replayFileURL:(id)arg3;

@end
