/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFNetMonitor.h>

@class HMFNetService;

__attribute__((visibility("hidden")))
@interface __HMFNetServiceMonitor : HMFNetMonitor

{
    HMFNetService *_service;
}

@property (readonly) HMFNetService *service;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)logIdentifier;
- (id)initWithNetAddress:(id)arg1;
- (id)initWithNetService:(id)arg1;
- (unsigned long long)reachabilityPath;
- (id)netAddress;

@end
