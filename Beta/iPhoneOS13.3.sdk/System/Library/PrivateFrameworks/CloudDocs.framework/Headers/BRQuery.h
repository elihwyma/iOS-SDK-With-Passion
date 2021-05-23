/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class BRNotificationReceiver, NSArray, NSMetadataQuery, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface BRQuery : NSObject

{
    NSMutableArray *_results;
    NSMutableDictionary *_resultsByRowID;
    BRNotificationReceiver *_receiver;
    NSMetadataQuery *_query;
    NSPredicate *_predicate;
    NSString *_bundleIdentifier;
    NSMutableDictionary *_toBeRemovedByFileObjectID;
    NSMutableDictionary *_toBeReplacedByFileObjectID;
    NSMutableDictionary *_toBeInsertedByFileObjectID;
    int _queryState;
    _Bool _ubiquitousGatherComplete;
    _Bool _needsCrashMarking;
    _Bool _needsCrashEvicting;
    _Bool _sendHasUpdateNotification;
    NSArray *_values;
    NSArray *_sortingAttributes;
    CDStruct_37e85dac _batchingParameters;
    CDUnknownFunctionPointerType _create_result_fn;
    void *_create_result_context;
    CDUnknownFunctionPointerType _create_result_callbacks_equal;
    CDUnknownFunctionPointerType _create_result_callbacks_release;
    CDUnknownFunctionPointerType _create_value_fn;
    void *_create_value_context;
    CDUnknownFunctionPointerType _create_value_callbacks_equal;
    CDUnknownFunctionPointerType _create_value_callbacks_release;
    NSArray *_searchScopes;
    unsigned int _scopeOptions;
    CDUnknownFunctionPointerType _sort_fn;
    void *_sort_context;
    struct __CFRunLoop *_runLoop;
    NSOperationQueue *_queryQueue;
    _Atomic int _disableCount;
    int _receiverDisableCount;
}

@property (weak) NSMetadataQuery *query;
@property (retain) BRNotificationReceiver *receiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)didEndPossibleFileOperation:(id)arg1;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;

- (void)dealloc;
- (unsigned long long)resultCount;
- (void)disableUpdates;
- (void)enableUpdates;
- (const void *)resultAtIndex:(long long)arg1;
- (long long)indexOfResult:(const void *)arg1;
- (void)stop;
- (void)setQueryQueue:(id)arg1;
- (void)setBatchingParameters:(CDStruct_37e85dac)arg1;
- (id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(id)arg4;
- (void)setCreateResultFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 callbacks:(const CDStruct_70d275a4 *)arg3;
- (void)setCreateValueFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 callbacks:(const CDStruct_70d275a4 *)arg3;
- (void)setSortComparator:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (void)setSearchScope:(id)arg1 withOptions:(unsigned int)arg2;
- (void)setExternalDocumentsBundleIdentifier:(id)arg1;
- (unsigned char)executeWithOptions:(unsigned long long)arg1;
- (void)setSendHasUpdateNotification:(_Bool)arg1;
- (void)processUpdates;
- (id)valuesOfAttribute:(id)arg1;
- (unsigned long long)countOfResultsForAttributeName:(id)arg1 value:(id)arg2;
- (id)attributeValueForName:(id)arg1 forResultAtIndex:(long long)arg2;
- (id)queryQueue;
- (void)notificationsReceiverDidReceiveNotificationsBatch:(id)arg1;
- (void)notificationsReceiverDidFinishGathering:(id)arg1;
- (void)notificationsReceiverDidInvalidate:(id)arg1;
- (void)notificationReceiverDidReceiveNotifications:(id)arg1;
- (void)_performBlockAsync:(CDUnknownBlockType)arg1;
- (void)_setQueryState:(int)arg1;
- (void)_watchScopes;
- (void)_runQuery;
- (id)_replacementObjectForQueryItem:(id)arg1;
- (void)_postNote:(const struct __CFString *)arg1;
- (id)_replacementObjectsForArrayOfQueryItem:(id)arg1;
- (void)_postNote:(const struct __CFString *)arg1 userInfo:(id)arg2;
- (_Bool)_collectUpdates:(id)arg1;
- (void)_processUpdates;
- (void)_sendHasUpdateNotificationIfNeeded;
- (void)_processChanges:(id)arg1;

@end
