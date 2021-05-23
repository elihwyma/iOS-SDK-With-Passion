/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSWatchMetricsConfiguration, SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSWatchMetricsController : NSObject

{
    SSXPCConnection *_connection;
    SSWatchMetricsConfiguration *_metricsConfiguration;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) SSWatchMetricsConfiguration *metricsConfiguration;

- (id)init;
- (id)_connection;
- (_Bool)isEnabled;
- (void)insertEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
