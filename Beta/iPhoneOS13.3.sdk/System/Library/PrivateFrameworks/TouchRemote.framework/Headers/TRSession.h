/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TRAnisetteDataHandler, TRConnection, TRNearbyDevice;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TRSession : NSObject

{
    TRConnection *_connection;
    TRNearbyDevice *_nearbyDevice;
    CDUnknownBlockType _disconnectHandler;
    NSMutableDictionary *_messageHandlerMap;
    TRAnisetteDataHandler *_anisetteDataHandler;
    NSObject<OS_dispatch_queue> *_messageHandlerMapQ;
    NSObject<OS_dispatch_queue> *_connectionQ;
    NSObject<OS_dispatch_source> *_heartbeatRequestTimer;
}

@property (retain, nonatomic) TRNearbyDevice *nearbyDevice;
@property (retain, nonatomic) NSMutableDictionary *messageHandlerMap;
@property (retain, nonatomic) TRAnisetteDataHandler *anisetteDataHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageHandlerMapQ;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQ;
@property (retain) NSObject<OS_dispatch_source> *heartbeatRequestTimer;
@property (retain) TRConnection *connection;
@property (readonly, getter=isConnected) _Bool connected;
@property (copy, nonatomic) CDUnknownBlockType disconnectHandler;

- (id)init;
- (void)disconnect;
- (void)sendEvent:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (void)setRequestHandler:(CDUnknownBlockType)arg1 forRequestClass:(Class)arg2;
- (id)initWithNearbyDevice:(id)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)setEventHandler:(CDUnknownBlockType)arg1 forEventClass:(Class)arg2;
- (void)startHeartbeat;
- (void)_respondToRequest:(id)arg1 withError:(id)arg2;
- (void)sendHeartbeatWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)_handleRequest:(id)arg1;
- (void)_sendResponse:(id)arg1 forRequest:(id)arg2;
- (CDUnknownBlockType)_handlerForEventClass:(Class)arg1;
- (void)_handleHeartbeatWithResponseHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_handlerForRequestClass:(Class)arg1;
- (void)_setMessageHandler:(id)arg1 forMessageClass:(Class)arg2;
- (id)_messageHandlerForMessageClass:(Class)arg1;
- (void)_sendHeartbeats;

@end
