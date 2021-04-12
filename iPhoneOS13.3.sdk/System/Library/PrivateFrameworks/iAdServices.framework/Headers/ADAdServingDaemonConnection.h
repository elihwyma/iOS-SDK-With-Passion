//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;
@protocol ADAdServingDaemonConnectionDelegate, OS_dispatch_queue;

@interface ADAdServingDaemonConnection : NSObject
{
    id <ADAdServingDaemonConnectionDelegate> _delegate;
    NSMutableArray *_performWhenConnectedBlocks;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_adServingDaemonConnection;
}

@property(retain, nonatomic) NSXPCConnection *adServingDaemonConnection; // @synthesize adServingDaemonConnection=_adServingDaemonConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableArray *performWhenConnectedBlocks; // @synthesize performWhenConnectedBlocks=_performWhenConnectedBlocks;
- (void)invalidate;
- (void)_considerConnectingToAdServingDaemon;
- (void)considerConnectingToAdServingDaemon;
- (id)rpcProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)rpcProxy;
- (void)performWhenConnected:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic) __weak id <ADAdServingDaemonConnectionDelegate> delegate;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

