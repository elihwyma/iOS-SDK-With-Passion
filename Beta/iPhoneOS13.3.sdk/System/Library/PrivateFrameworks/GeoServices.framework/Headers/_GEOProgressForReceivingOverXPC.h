/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSProgress.h>

@class NSObject;

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _GEOProgressForReceivingOverXPC : NSProgress

{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (void)cancel;
- (id)initWithEndpoint:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (id)initVendingEndpoint:(id *)arg1;

@end
