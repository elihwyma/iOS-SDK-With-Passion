/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSXPCConnection;

@protocol ADAdServingDaemonConnectionDelegate, OS_dispatch_queue;

@interface ADAdServingDaemonConnection : NSObject

{
    id <ADAdServingDaemonConnectionDelegate> _delegate;
    NSMutableArray *_performWhenConnectedBlocks;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_adServingDaemonConnection;
}

@property (retain, nonatomic) NSMutableArray *performWhenConnectedBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSXPCConnection *adServingDaemonConnection;
@property (weak, nonatomic) id <ADAdServingDaemonConnectionDelegate> delegate;

- (void)dealloc;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1;
- (id)rpcProxy;
- (void)considerConnectingToAdServingDaemon;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
- (id)rpcProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_considerConnectingToAdServingDaemon;

@end
