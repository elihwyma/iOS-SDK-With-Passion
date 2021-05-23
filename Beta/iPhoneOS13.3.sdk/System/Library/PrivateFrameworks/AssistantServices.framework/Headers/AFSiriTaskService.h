/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSiriTaskDeliveryHandler, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface AFSiriTaskService : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    AFSiriTaskDeliveryHandler *_deliveryHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)arg1;
+ (id)appTaskService;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithMachServiceName:(id)arg1;

@end
