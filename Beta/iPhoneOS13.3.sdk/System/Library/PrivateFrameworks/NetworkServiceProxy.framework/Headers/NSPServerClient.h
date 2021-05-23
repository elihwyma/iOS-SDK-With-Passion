/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface NSPServerClient : NSObject

{
    struct os_unfair_lock_s lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCallbackQueue:(id)arg1;
- (void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(id)arg3 forClient:(id)arg4;
- (void)setEdgeSet:(id)arg1 forIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAppRule:(id)arg1 forLabel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAppRuleForLabel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getConnection;
- (void)fetchCurrentConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCurrentConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchEdgeSetForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)establishTrustWithEdgeSetForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshWaldoNowWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reportUsage:(id)arg1 fromClient:(id)arg2;
- (void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTestLatencyMap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
