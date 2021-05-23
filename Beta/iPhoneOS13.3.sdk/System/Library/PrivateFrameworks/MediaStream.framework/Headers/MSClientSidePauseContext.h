/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class MSTimerGate, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface MSClientSidePauseContext : NSObject

{
    NSString *_UUID;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSXPCConnection *_server;
    MSTimerGate *_gate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain, nonatomic) NSXPCConnection *server;
@property (retain, nonatomic) MSTimerGate *gate;

- (void)resume;
- (id)initWithServer:(id)arg1;
- (void)timerQueueTimerFired;
- (void)timerQueuePing;

@end
