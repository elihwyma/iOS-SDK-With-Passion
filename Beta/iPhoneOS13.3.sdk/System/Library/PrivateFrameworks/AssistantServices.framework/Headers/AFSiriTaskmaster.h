/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSMapTable, NSString, NSXPCListener;

@protocol AFSiriTaskDelivering, AFSiriTaskmasterDelegate, OS_dispatch_queue;

@interface AFSiriTaskmaster : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    id <AFSiriTaskDelivering> _taskDeliverer;
    NSXPCListener *_usageResultListener;
    NSMapTable *_executorForRequest;
    id <AFSiriTaskmasterDelegate> _delegate;
}

@property (weak, nonatomic) id <AFSiriTaskmasterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskmasterForUIApplicationWithBundleIdentifier:(id)arg1;
+ (id)taskmasterForMachServiceWithName:(id)arg1;
+ (id)taskmasterForMachServiceForAppWithBundleIdentifier:(id)arg1;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3;
- (void)handleSiriRequest:(id)arg1 deliveryHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3;
- (void)handleSiriTaskUsageResult:(id)arg1 fromRequest:(id)arg2;
- (id)initWithTaskDeliverer:(id)arg1;

@end
