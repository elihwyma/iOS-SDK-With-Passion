/*
 Image: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_os_log;

@interface MXSourceManager : NSObject

{
    NSObject<OS_os_log> *_sourceManagerLogHandle;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSObject<OS_os_log> *sourceManagerLogHandle;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedManager;

- (id)init;
- (id)_createXPCConnection;
- (void)sendMetrics:(id)arg1 forDate:(id)arg2 andSourceID:(long long)arg3;
- (void)simulatePayloadDeliveryForClient:(id)arg1;

@end
