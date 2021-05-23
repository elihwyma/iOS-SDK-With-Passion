/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class CSSearchQueryContext, NSArray, NSKnownKeysMappingStrategy, NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface CSSearchQuery : NSObject

{
    unsigned long long _foundItemCount;
    short _requestedAttributeCount;
    short _attrInfo[12];
    _Bool _started;
    _Bool _finished;
    _Bool _cancelled;
    _Bool _gatherEnded;
    struct os_unfair_lock_s _liveItemLock;
    NSKnownKeysMappingStrategy *_mappingStrategy;
    unsigned long long *_attrKeys;
    _Bool _privateIndex;
    _Bool _userFSIndex;
    _Bool _suspended;
    CDUnknownBlockType _foundItemsHandler;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queryString;
    CSSearchQueryContext *_queryContext;
    NSMapTable *_liveIndexBundleIDToIndexItemIDMap;
    NSMapTable *_liveIndexBundleIDToBundleString;
    NSMapTable *_liveIndexUserFSOIDTOIdentifierMap;
    CDUnknownBlockType _gatherEndedHandler;
    CDUnknownBlockType _changedItemsHandler;
    CDUnknownBlockType _removedItemsHandler;
    CDUnknownBlockType _foundAttributesHandler;
    CDUnknownBlockType _changedAttributesHandler;
    CDUnknownBlockType _countChangedHandler;
    CDUnknownBlockType _resolvedAttributeNamesHandler;
    CDUnknownBlockType _completionsHandler;
    CDUnknownBlockType _foundItemHandler;
    CDUnknownBlockType _interruptedHandler;
    CDUnknownBlockType _restartedHandler;
    CDUnknownBlockType _restartGatherEndedHandler;
    NSString *_privateBundleID;
}

@property (nonatomic, readonly) NSArray *fetchAttributes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) CSSearchQueryContext *queryContext;
@property (retain, nonatomic) NSMapTable *liveIndexBundleIDToIndexItemIDMap;
@property (retain, nonatomic) NSMapTable *liveIndexBundleIDToBundleString;
@property (retain, nonatomic) NSMapTable *liveIndexUserFSOIDTOIdentifierMap;
@property (copy) CDUnknownBlockType gatherEndedHandler;
@property (copy) CDUnknownBlockType changedItemsHandler;
@property (copy) CDUnknownBlockType removedItemsHandler;
@property (copy) CDUnknownBlockType foundAttributesHandler;
@property (copy) CDUnknownBlockType changedAttributesHandler;
@property (copy) CDUnknownBlockType countChangedHandler;
@property (copy) CDUnknownBlockType resolvedAttributeNamesHandler;
@property (copy) CDUnknownBlockType completionsHandler;
@property (copy) CDUnknownBlockType foundItemHandler;
@property (copy) CDUnknownBlockType interruptedHandler;
@property (copy) CDUnknownBlockType restartedHandler;
@property (copy) CDUnknownBlockType restartGatherEndedHandler;
@property (nonatomic) _Bool privateIndex;
@property (nonatomic) _Bool userFSIndex;
@property (nonatomic) _Bool suspended;
@property (retain, nonatomic) NSString *privateBundleID;
@property (readonly, getter=isCancelled) _Bool cancelled;
@property (readonly) unsigned long long foundItemCount;
@property (copy) CDUnknownBlockType foundItemsHandler;
@property (copy) CDUnknownBlockType completionHandler;
@property (copy) NSArray *protectionClasses;

+ (id)_makeQueryErrorWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (void)userEngagedWithUniqueIdentifier:(id)arg1 bundleId:(id)arg2 forUserQuery:(id)arg3 interactionType:(int)arg4;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)options;
- (void)handleError:(id)arg1;
- (void)cancel;
- (_Bool)attribute;
- (void)start;
- (id)connection;
- (id)bundleIDs;
- (_Bool)internal;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (double)currentTime;
- (void)setBundleIDs:(id)arg1;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (id)initWithQueryString:(id)arg1 attributes:(id)arg2;
- (void)_finishWithError:(id)arg1;
- (id)scopes;
- (void)setScopes:(id)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)handleCompletion:(id)arg1;
- (void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2;
- (void)handleFoundItems:(id)arg1;
- (_Bool)isTopHitQuery;
- (id)copyCSSearchableItemWithValues:(id *)arg1 valueCount:(unsigned long long)arg2 attrKeys:(unsigned long long *)arg3 protectionClass:(id)arg4 mappingStrategy:(id)arg5 attrInfo:(short *)arg6 requestedAttributeCount:(unsigned long long)arg7 unpackInfo:(struct CSUnpackInfo)arg8 userFSDomain:(id)arg9;
- (_Bool)grouped;
- (_Bool)live;
- (_Bool)counting;
- (void)didResolveFriendlyAttributeNames:(id)arg1 fromFetchAttributes:(id)arg2;
- (void)setupFetchAttributesForSearch;
- (_Bool)removeLiveOID:(long long)arg1 outBundleID:(id *)arg2 outIdentifier:(id *)arg3;
- (_Bool)removeUserFSLiveOID:(long long)arg1 outBundleID:(id *)arg2 outIdentifier:(id *)arg3;
- (void)_removeIdentifiers:(id)arg1 withBundleID:(id)arg2 andQueryID:(long long)arg3;
- (_Bool)addOrUpdateLiveOID:(long long)arg1 bundleID:(id)arg2 identifier:(id)arg3;
- (id)addOrUpdateUserFSLiveOID:(long long)arg1 userFSDomain:(id)arg2 identifier:(id)arg3;
- (id)copyResultFromPlist:(id)arg1 protectionClass:(id)arg2;
- (void)processResultFromPlist:(id)arg1 atIndex:(unsigned long long)arg2 protectionClass:(id)arg3 oids:(long long *)arg4 oidCount:(unsigned int)arg5 addItems:(id *)arg6 updateItems:(id *)arg7 moveItems:(id *)arg8;
- (void)processAttributesData:(id)arg1 update:(_Bool)arg2 protectionClass:(id)arg3;
- (void)processLiveResultsData:(id)arg1 oidData:(id)arg2 protectionClass:(id)arg3;
- (void)processResultsData:(id)arg1 protectionClass:(id)arg2;
- (void)processCompletionsResultsData:(id)arg1 protectionClass:(id)arg2;
- (void)processRemoveResultsData:(id)arg1 protectionClass:(id)arg2;
- (void)didReturnResults:(long long)arg1 resultsData:(id)arg2 oidData:(id)arg3 protectionClass:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
