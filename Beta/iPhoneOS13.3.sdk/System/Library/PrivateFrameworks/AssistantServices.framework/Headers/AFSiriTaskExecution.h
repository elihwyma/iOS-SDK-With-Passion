/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFSiriRequest, AFWatchdogTimer, NSString, NSXPCListener;

@protocol AFSiriTaskDelivering, OS_dispatch_queue;

@interface AFSiriTaskExecution : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriRequest *_request;
    id <AFSiriTaskDelivering> _taskDeliverer;
    NSXPCListener *_usageResultListener;
    CDUnknownBlockType _deliveryHandler;
    CDUnknownBlockType _completionHandler;
    long long _state;
    id _keepAliveCycle;
    AFWatchdogTimer *_taskResponseWatchdogTimer;
    NSXPCListener *_taskResponseListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_completeWithError:(id)arg1;
- (void)_completeWithResponse:(id)arg1;
- (void)_completeWithResponse:(id)arg1 error:(id)arg2;
- (void)handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3;
- (void)handleSiriResponse:(id)arg1 atTime:(unsigned long long)arg2;
- (id)initWithRequest:(id)arg1 taskDeliverer:(id)arg2 usageResultListener:(id)arg3;
- (void)setDeliveryHandler:(CDUnknownBlockType)arg1;

@end
