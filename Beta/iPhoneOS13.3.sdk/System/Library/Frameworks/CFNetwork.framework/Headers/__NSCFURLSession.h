/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLSession.h>

@class ConnectionContextManager, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSURLSessionConfiguration, NSUUID, __CFN_SessionMetrics;

@protocol OS_dispatch_queue;

@interface __NSCFURLSession : NSURLSession

{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid_ivar;
    NSString *_tlsSessionCachePrefix;
    ConnectionContextManager *_nwContextManager;
    shared_ptr_9ad247fa _nwContext;
    NSMutableDictionary *_altSvc;
    NSMutableSet *_h2BlacklistedHosts;
    NSMutableDictionary *_coalescing;
    __CFN_SessionMetrics *_metrics;
}

@property (copy, readonly) NSDictionary *delegateOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, readonly) NSURLSessionConfiguration *_groupConfiguration;
@property (weak, readonly) NSURLSession *_groupSession;

- (void)dealloc;
- (id)_metrics;
- (id).cxx_construct;
- (id)_uuid;
- (id)workQueue;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)defaultTaskGroup;
- (shared_ptr_9ad247fa)_nwContext;
- (void)set_coalescing:(id)arg1;
- (id)_altSvc;
- (void)set_metrics:(id)arg1;
- (id)_tlsSessionCachePrefix;
- (void)set_tlsSessionCachePrefix:(id)arg1;
- (id)_coalescing;
- (id)_h2BlacklistedHosts;
- (_Bool)invalid;
- (id)taskGroupWithConfiguration:(id)arg1;
- (void)set_altSvc:(id)arg1;
- (void)set_h2BlacklistedHosts:(id)arg1;

@end
