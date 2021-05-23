/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface ATXPCServer : NSObject

{
    NSObject<OS_xpc_object> *_conn;
    NSMutableSet *_connections;
    NSMutableDictionary *_handlerMap;
    CDUnknownBlockType _lockdownHandler;
    CDUnknownBlockType _disconnectHandler;
    CDUnknownBlockType _shutdownHandler;
    CDUnknownBlockType _defaultMessageHandler;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_idleTimerSource;
    _Bool _timerHasFiredSinceLastMessage;
}

@property (copy, nonatomic) CDUnknownBlockType lockdownHandler;
@property (copy, nonatomic) CDUnknownBlockType defaultMessageHandler;
@property (copy, nonatomic) CDUnknownBlockType disconnectHandler;
@property (copy, nonatomic) CDUnknownBlockType shutdownHandler;
@property (nonatomic, readonly) NSSet *connections;

- (void)dealloc;
- (id)_connections;
- (void)_handleNewConnection:(id)arg1;
- (void)_resetMessageFlag;
- (CDUnknownBlockType)_handlerForMessageName:(id)arg1;
- (id)_highAvailabilityQueue;
- (_Bool)_doingWork;
- (void)_rescheduleIdleTimerSourceWithInterval:(double)arg1;
- (id)initListenerWithServiceName:(id)arg1;
- (void)setHandlerForMessageName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_runShutdownHandler;
- (void)setIdleTimerInterval:(double)arg1;

@end
