/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection, REMStoreContainerToken;

@protocol REMXPCDaemonControllerCloudKitNetworkActivityDelegate;

@interface REMXPCDaemonController : NSObject

{
    struct os_unfair_lock_s _ivarLock;
    id <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> _cloudKitNetworkActivityDelegate;
    NSMutableDictionary *_l_performersByName;
    NSString *_serviceName;
    NSXPCConnection *_xpcConnection;
    REMStoreContainerToken *_storeContainerToken;
}

@property (nonatomic) struct os_unfair_lock_s ivarLock;
@property (retain, nonatomic) NSMutableDictionary *l_performersByName;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) REMStoreContainerToken *storeContainerToken;
@property (weak, nonatomic) id <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> cloudKitNetworkActivityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)weakSharedInstance;
+ (id)userInteractiveDaemonController;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)initWithStoreContainerToken:(id)arg1;
- (void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)syncStorePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)_xpcConnectionReconnectingIfNecessary;
- (id)initWithStoreContainerToken:(id)arg1 userInteractive:(_Bool)arg2;
- (id)_syncPerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_asyncPerformerWithResolver:(id)arg1 reason:(id)arg2 loadHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)_resolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_asyncResolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_resolvePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_asyncResolvePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_xpcConnectionDidInterrupt;
- (void)_xpcConnectionDidInvalidate;
- (void)cloudKitNetworkActivityDidUpdate:(id)arg1;
- (id)syncDebugPerformerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end
