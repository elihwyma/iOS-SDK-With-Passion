/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFNetAddress, NSString;

@protocol HMFLocking, HMFNetMonitorDelegate;

@interface HMFNetMonitor

{
    id <HMFLocking> _lock;
    _Bool _reachable;
    id <HMFNetMonitorDelegate> _delegate;
    HMFNetAddress *_netAddress;
}

@property (getter=isReachable) _Bool reachable;
@property (weak) id <HMFNetMonitorDelegate> delegate;
@property (copy, nonatomic, readonly) HMFNetAddress *netAddress;
@property (readonly) unsigned long long reachabilityPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (id)initWithNetAddress:(id)arg1;
- (id)initWithNetService:(id)arg1;

@end
