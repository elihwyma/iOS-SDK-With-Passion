/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSOperationQueue, NSPredicate;

@protocol NSMetadataQueryDelegate;

@interface NSMetadataQuery : NSObject

{
    unsigned long long _flags;
    double _interval;
    id _private[11];
    void *_reserved;
}

@property id <NSMetadataQueryDelegate> delegate;
@property (copy) NSPredicate *predicate;
@property (copy) NSArray *sortDescriptors;
@property (copy) NSArray *valueListAttributes;
@property (copy) NSArray *groupingAttributes;
@property double notificationBatchingInterval;
@property (copy) NSArray *searchScopes;
@property (copy) NSArray *searchItems;
@property (retain) NSOperationQueue *operationQueue;
@property (readonly, getter=isStarted) _Bool started;
@property (readonly, getter=isGathering) _Bool gathering;
@property (readonly, getter=isStopped) _Bool stopped;
@property (readonly) unsigned long long resultCount;
@property (copy, readonly) NSArray *results;
@property (copy, readonly) NSDictionary *valueLists;
@property (copy, readonly) NSArray *groupedResults;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)didEndPossibleFileOperation:(id)arg1;
+ (Class)_stitchingClass;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)_canModifyQueryOrObserversInCurrentContext;
- (void)_validateInvocationContext;
- (void)_validatePredicate:(id)arg1 withScopes:(id)arg2;
- (void)_recreateQuery;
- (id)_sortingAttributes;
- (void)_setBatchingParams;
- (id)_externalDocumentsBundleIdentifier;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_update;
- (void)_disableAutoUpdates;
- (void)_resetQueryState;
- (void)_noteNote1:(id)arg1;
- (void)_noteNote2:(id)arg1;
- (void)_noteNote3:(id)arg1;
- (void)_noteNote4:(id)arg1;
- (void)_inOriginalContextInvokeBlock:(CDUnknownBlockType)arg1;
- (void)_noteNote5:(id)arg1;
- (void)enumerateResultsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)_enableAutoUpdates;
- (id)valueOfAttribute:(id)arg1 forResultAtIndex:(unsigned long long)arg2;
- (id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(_Bool)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)_allAttributes;
- (id)searchItemURLs;
- (void)setSearchItemURLs:(id)arg1;
- (void)_setExternalDocumentsBundleIdentifier:(id)arg1;
- (id)_queryString;
- (_Bool)startQuery;
- (void)stopQuery;
- (id)resultAtIndex:(unsigned long long)arg1;
- (void)enumerateResultsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_zapResultArrayIfIdenticalTo:(id)arg1;
- (unsigned long long)indexOfResult:(id)arg1;
- (_Bool)_isMDQuery;

@end
