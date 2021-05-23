/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <Foundation/NSObject.h>

@class CUMessageSession, SASProximitySessionTransport;

@protocol OS_dispatch_queue, SASProximitySessionDelegate;

@interface SASProximitySession : NSObject

{
    _Bool _connected;
    id <SASProximitySessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_actionQueue;
    SASProximitySessionTransport *_transport;
}

@property (retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain) SASProximitySessionTransport *transport;
@property id <SASProximitySessionDelegate> delegate;
@property (retain) CUMessageSession *sharingMessageSession;
@property (getter=isConnected) _Bool connected;

- (id)init;
- (void)invalidate;
- (void)activate;
- (id)sendAction:(id)arg1;
- (void)handleAction:(id)arg1;
- (void)receivedAction:(id)arg1 response:(CDUnknownBlockType)arg2;
- (id)actionFromData:(id)arg1;

@end
