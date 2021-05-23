/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class CSIndexConnection, CSIndexingQueue, NSMutableArray, NSNumber, NSString;

@protocol CSSearchableIndexDelegate, OS_dispatch_queue;

@interface CSSearchableIndex : NSObject

{
    CSIndexingQueue *_activityQueue;
    _Bool _batchOpen;
    id <CSSearchableIndexDelegate> _indexDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_name;
    NSString *_protectionClass;
    NSString *_bundleIdentifier;
    NSMutableArray *_batchedItemsToIndex;
    NSMutableArray *_batchedItemIdentifiersToDelete;
    long long _options;
    NSNumber *_indexID;
}

@property (readonly) CSIndexConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *protectionClass;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) CSIndexingQueue *activityQueue;
@property (retain, nonatomic) NSMutableArray *batchedItemsToIndex;
@property (retain, nonatomic) NSMutableArray *batchedItemIdentifiersToDelete;
@property (nonatomic) long long options;
@property (nonatomic) _Bool batchOpen;
@property (nonatomic, readonly) NSNumber *indexID;
@property (weak) id <CSSearchableIndexDelegate> indexDelegate;

+ (void)initialize;
+ (_Bool)isIndexingAvailable;
+ (double)lastUpdateTime;
+ (id)defaultSearchableIndex;
+ (_Bool)activityShouldBeIndexed:(id)arg1 bundleID:(id)arg2;
+ (id)mainBundleID;
+ (id)mainBundleLocalizedString;
+ (id)_requestQueueAttribute;
+ (void)_setLastUpdateTime;
+ (id)codedIdentifiers:(id)arg1;
+ (id)codedUniqueIdentifiers:(id)arg1;
+ (id)codedNSUAPersistentIdentifiers:(id)arg1;
+ (id)computePartialPathWithOID:(id)arg1 pathKeyIdx:(unsigned long long)arg2 pathDictionary:(id)arg3 attributeValues:(id)arg4 depth:(long long)arg5;
+ (id)partialPathAttributes;
+ (void)notifyIndexDelegates;
+ (void)volumeMountedAtURL:(id)arg1 withOptions:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 protectionClass:(id)arg2;
- (void)fetchLastClientStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginIndexBatch;
- (void)_deleteActionsBeforeTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_deleleActionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endIndexBatchWithClientState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_commonInit;
- (id)initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3;
- (void)indexSearchableItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestQueue;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteAllSearchableItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 options:(long long)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllInteractionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)throttle;
- (id)_initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 options:(long long)arg4;
- (void)performIndexJob:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)_delegateCheckIn:(id)arg1;
- (id)throttleQueue;
- (void)_indexActivities:(id)arg1 flush:(_Bool)arg2;
- (id)xpc_dictionary_for_command:(const char *)arg1 requiresInitialization:(_Bool)arg2;
- (_Bool)_supportsBatching;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_itemsBySanitizingItemsForSpotlight:(id)arg1;
- (id)_validateOperationWithItems:(id)arg1;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)_validateOperationWithItems:(id)arg1 identifiers:(id)arg2;
- (id)_validateClientState:(id)arg1;
- (void)_setMailMessageAttributes:(id)arg1;
- (void)_setFPAttributes:(id)arg1;
- (long long)_standardizeItems:(id)arg1;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_validateOperationWithIdentifiers:(id)arg1;
- (void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_validateOperation;
- (void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_issueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_makeActivityQueueIfNecessary;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 items:(id)arg4 includeParents:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)bulkFetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 objects:(id)arg4 attributeKeyIndex:(long long)arg5 includeParents:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)unthrottle;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)indexSearchableItems:(id)arg1 returningItemsSanitizedForSpotlightTo:(CDUnknownBlockType)arg2;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_issueNonLaunchingCommand:(id)arg1;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2;
- (void)_changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forUser:(unsigned int)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5;
- (void)indexUserActivity:(id)arg1;
- (void)deleteAllUserActivities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)flushUserActivities;
- (void)performDataMigrationWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)slowFetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_bulkFetchPartialPathsForObjects:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
