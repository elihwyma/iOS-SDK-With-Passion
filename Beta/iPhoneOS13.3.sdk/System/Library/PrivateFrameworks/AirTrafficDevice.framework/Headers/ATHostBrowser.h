/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSMutableSet, NSNetServiceBrowser, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATHostBrowser : NSObject

{
    NSNetServiceBrowser *_netServiceBrowser;
    _Bool _searchInProgress;
    NSMutableSet *_hostsBeingResolved;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_source> *_timer;
    double _browserStartTime;
    double _timeoutTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)_handleTimeout;
- (void)_finishSearchIfComplete;
- (void)browseForHostsWithTimeout:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
