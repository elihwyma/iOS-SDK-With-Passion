/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFUnfairLock, NSArray, NSHashTable, NSMutableOrderedSet, NSNetServiceBrowser, NSObject, NSString;

@protocol HMFNetServiceBrowserDelegate, OS_dispatch_queue;

@interface HMFNetServiceBrowser

{
    HMFUnfairLock *_lock;
    NSHashTable *_netServices;
    NSMutableOrderedSet *_cachedNetServices;
    _Bool _browsing;
    id <HMFNetServiceBrowserDelegate> _delegate;
    NSString *_domain;
    NSString *_serviceType;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSNetServiceBrowser *_internal;
    CDUnknownBlockType _browseBlock;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSNetServiceBrowser *internal;
@property (nonatomic, getter=isBrowsing) _Bool browsing;
@property (copy, nonatomic) CDUnknownBlockType browseBlock;
@property (weak) id <HMFNetServiceBrowserDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *domain;
@property (copy, nonatomic, readonly) NSString *serviceType;
@property (nonatomic) _Bool shouldCache;
@property (copy, nonatomic, readonly) NSArray *cachedNetServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (id)shortDescription;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (id)logIdentifier;
- (id)descriptionWithPointer:(_Bool)arg1;
- (void)_stopBrowsingWithError:(id)arg1;
- (void)addNetServiceToCache:(id)arg1;
- (id)initWithDomain:(id)arg1 serviceType:(id)arg2;
- (void)startBrowsingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopBrowsing;

@end
