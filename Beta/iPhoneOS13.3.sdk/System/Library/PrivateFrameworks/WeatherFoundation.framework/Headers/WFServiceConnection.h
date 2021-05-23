/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection;

@protocol OS_dispatch_queue, WeatherServiceProtocol;

@interface WFServiceConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalStateQueue;
    NSXPCConnection *_xpcConnection;
    id <WeatherServiceProtocol> _serviceProxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tasksPendingResponseForTaskIdentifier;
    NSMutableDictionary *_dispatchGroupForTaskIdentifier;
    NSMutableDictionary *_executionStartTimeForTaskIdentifier;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalStateQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id <WeatherServiceProtocol> serviceProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSMutableDictionary *tasksPendingResponseForTaskIdentifier;
@property (readonly) NSMutableDictionary *dispatchGroupForTaskIdentifier;
@property (readonly) NSMutableDictionary *executionStartTimeForTaskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allAllowedClasses;
+ (id)weatherServiceInterface;
+ (id)weatherServiceClientInterface;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)invalidateCache;
- (void)enqueueRequest:(id)arg1;
- (void)cancelRequestWithIdentifier:(id)arg1;
- (void)enqueueRequest:(id)arg1 waitUntilDone:(_Bool)arg2;
- (void)taskIdentifier:(CDUnknownBlockType)arg1;
- (void)serviceDidReceiveResponse:(id)arg1;
- (void)_onQueueInvalidateConnection:(id)arg1;
- (void)_onQueueOpenConnection;
- (void)accessServiceWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleRemoteObjectProxyError:(id)arg1;

@end
