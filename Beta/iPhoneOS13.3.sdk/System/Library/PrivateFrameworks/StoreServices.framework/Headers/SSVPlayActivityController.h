/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSXPCConnection, SSVPlayActivityTable;

@protocol OS_dispatch_queue;

@interface SSVPlayActivityController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_debugLogOperationQueue;
    NSMutableDictionary *_endpointIdentifierToEndpointRevisionInformation;
    int _endpointRevisionInformationDidChangeNotifyToken;
    _Bool _hasAttemptedTableCreation;
    _Bool _hasLoadedEndpointRevisionInformation;
    _Bool _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
    _Bool _hasValidEndpointRevisionInformationDidChangeNotifyToken;
    NSMutableArray *_pendingFlushingSessions;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSVPlayActivityTable *_table;
    NSXPCConnection *_daemonPlayActivityControllerConnection;
    unsigned long long _writingStyle;
}

@property (nonatomic, readonly) unsigned long long writingStyle;

+ (id)_requiredEndpointIdentifiers;

- (id)init;
- (void)dealloc;
- (id)_table;
- (id)initWithWritingStyle:(unsigned long long)arg1;
- (void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_revisionsIndexSetForPlayActivityEvents:(id)arg1;
- (void)_completePendingPlayEventsWithRevisionIndexSet:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_daemonPlayActivityControllerConnection;
- (id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;
- (void)_getFlushSessionInformationForEndpointIdentifier:(id)arg1 shouldAcquire:(_Bool)arg2 storeAccountID:(unsigned long long)arg3 shouldFilterStoreAccountID:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_loadEndpointIdentifierInformationIfNeeded;
- (void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_setEndpointRevisionInformation:(id)arg1 forEndpointIdentifier:(id)arg2;
- (id)_sessionInformationForSessionToken:(unsigned long long)arg1;
- (id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)arg1;
- (void)getRevisionInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setupNotifyTokenIfNeeded;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)completePendingPlayActivityEventPersistentIDs:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getPlayActivityEventsFromRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeFlushedPlayActivityEventsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;

@end
