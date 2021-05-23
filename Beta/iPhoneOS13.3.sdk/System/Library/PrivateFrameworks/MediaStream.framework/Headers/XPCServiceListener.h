/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_xpc_object, XPCServiceListenerDelegate;

@interface XPCServiceListener : NSObject

{
    NSString *_serviceName;
    id <XPCServiceListenerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_xpc_object> *_listener;
    NSMutableSet *_serviceConnections;
    unsigned long long _clientCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *listener;
@property (retain, nonatomic) NSMutableSet *serviceConnections;
@property (nonatomic) unsigned long long clientCount;
@property (retain, nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) id <XPCServiceListenerDelegate> delegate;

- (id)debugDescription;
- (void)start;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)serviceConnectionDidDisconnect:(id)arg1;
- (void)_workQueueShutDownServiceConnections:(id)arg1 index:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)workQueueHandleIncomingConnection:(id)arg1;

@end
