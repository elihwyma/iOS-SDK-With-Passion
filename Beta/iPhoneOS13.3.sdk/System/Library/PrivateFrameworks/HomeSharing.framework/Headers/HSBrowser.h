/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNetServiceBrowser, NSString;

@protocol HSBrowserDelegate, OS_dispatch_queue;

@interface HSBrowser : NSObject

{
    long long _browserType;
    NSString *_homeSharingGroupID;
    id <HSBrowserDelegate> _delegate;
    NSMutableArray *_availableLibraries;
    NSMutableArray *_resolvingServices;
    NSMutableArray *_librariesPendingRemoval;
    NSObject<OS_dispatch_queue> *_serviceBrowserQueue;
    NSString *_serviceType;
    NSNetServiceBrowser *_serviceBrowser;
}

@property (retain, nonatomic) NSMutableArray *availableLibraries;
@property (retain, nonatomic) NSMutableArray *resolvingServices;
@property (retain, nonatomic) NSMutableArray *librariesPendingRemoval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceBrowserQueue;
@property (copy, nonatomic, readonly) NSString *serviceType;
@property (retain, nonatomic) NSNetServiceBrowser *serviceBrowser;
@property (nonatomic, readonly) long long browserType;
@property (copy, nonatomic, readonly) NSString *homeSharingGroupID;
@property (weak, nonatomic) id <HSBrowserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)homeSharingBrowserWithGroupID:(id)arg1;

- (void)stop;
- (void)start;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (id)initWithBrowserType:(long long)arg1 groupID:(id)arg2;
- (void)_removalTimerFired:(id)arg1;

@end
