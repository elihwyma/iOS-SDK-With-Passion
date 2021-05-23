/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFNetMonitor.h>

@class HMFNetAddress, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFNetAddressMonitor : HMFNetMonitor

{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _currentNetworkFlags;
    HMFNetAddress *_netAddress;
    struct __SCNetworkReachability *_networkReachabilityRef;
}

@property (nonatomic, readonly) struct __SCNetworkReachability *networkReachabilityRef;
@property (nonatomic) unsigned int currentNetworkFlags;

- (id)init;
- (void)dealloc;
- (id)shortDescription;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)initWithNetAddress:(id)arg1;
- (id)initWithNetService:(id)arg1;
- (unsigned long long)reachabilityPath;
- (id)netAddress;
- (void)handleNetworkReachabilityChange:(unsigned int)arg1;

@end
