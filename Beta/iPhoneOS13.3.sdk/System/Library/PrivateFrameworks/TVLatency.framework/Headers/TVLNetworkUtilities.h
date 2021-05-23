/*
 Image: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_path_monitor;

__attribute__((visibility("hidden")))
@interface TVLNetworkUtilities : NSObject

{
    NSString *_activeNetworkInterface;
    NSString *_ipv4;
    NSString *_ipv6;
    NSObject<OS_dispatch_queue> *_monitor_queue;
    NSObject<OS_dispatch_semaphore> *_initial_update_semaphore;
    NSObject<OS_nw_path_monitor> *_monitor;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitor_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *initial_update_semaphore;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *monitor;
@property (copy) NSString *activeNetworkInterface;
@property (copy) NSString *ipv4;
@property (copy) NSString *ipv6;

+ (id)sharedInstance;
+ (void)startMonitoring;
+ (id)convertIPv6ToHostOrderData:(id)arg1;
+ (int)convertIPv4ToHostOrderData:(id)arg1;
+ (id)_IPAddressForFamily:(unsigned char)arg1 interface:(id)arg2;

- (id)_init;

@end
