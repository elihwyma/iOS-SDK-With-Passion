/*
 Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface SPXPCServer : NSObject

{
    double _idleTimerInterval;
    _Bool _shutdown;
    NSObject<OS_xpc_object> *_conn;
    NSMutableSet *_connections;
    NSMutableDictionary *_handlerMap;
    NSObject<OS_dispatch_queue> *_connectionsQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    unsigned int _qos;
    _Bool hadConnection;
    CDUnknownBlockType _disconnectHandler;
    CDUnknownBlockType _defaultMessageHandler;
    CDUnknownBlockType _firstConnectionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType disconnectHandler;
@property (copy, nonatomic) CDUnknownBlockType defaultMessageHandler;
@property (copy, nonatomic) CDUnknownBlockType firstConnectionBlock;

- (void)dealloc;
- (void)startListening;
- (_Bool)shutdown;
- (CDUnknownBlockType)_handlerForMessageName:(id)arg1;
- (id)_highAvailabilityQueue;
- (id)initListenerWithServiceName:(id)arg1;
- (void)setHandlerForMessageName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_handleNewConnection:(id)arg1 qos:(unsigned int)arg2;
- (id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2 qos:(unsigned int)arg3;

@end
