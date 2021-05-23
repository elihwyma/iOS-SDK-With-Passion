/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSMutableArray, NSNetServiceBrowser, NSString, NSThread;

@interface ATWakeupCall : NSObject

{
    NSMutableArray *_hostLibraryIdentifiers;
    NSMutableArray *_resolvingHosts;
    NSMutableArray *_resolvedLibraryIdentifiers;
    NSMutableArray *_resolvedLibraryServices;
    CDUnknownBlockType _completion;
    NSNetServiceBrowser *_browser;
    NSThread *_wakeThread;
    _Bool _searching;
    int _resolving;
    unsigned long long _hostsToResolve;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)sendWakeupCall:(id)arg1;
+ (void)sendWakeupCallToAllSyncHosts;
+ (id)wakeableHostsWithCompletion:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (void)stop;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)wake;

@end
