/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabase, EDSearchableIndex, EDSearchableIndexPersistence, EDSearchableIndexScheduler, NSString;

@interface EDSearchableIndexManager : NSObject

{
    _Bool _needsReindex;
    _Bool _needsToScheduleRecurringActivity;
    EDPersistenceDatabase *_database;
}

@property (nonatomic) _Bool needsReindex;
@property (nonatomic) _Bool needsToScheduleRecurringActivity;
@property (nonatomic, readonly) EDSearchableIndexPersistence *persistence;
@property (nonatomic, readonly) EDSearchableIndexScheduler *scheduler;
@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (nonatomic, readonly) EDSearchableIndex *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)enableIndexingAndBeginScheduling:(_Bool)arg1;
- (void)persistenceWillBeginUpdates;
- (void)persistenceDidFinishUpdates;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidUpdateData:(id)arg1 message:(id)arg2;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidAddLabels:(id)arg1 removeLabels:(id)arg2 messages:(id)arg3 generationWindow:(id)arg4;
- (void)scheduleRecurringActivity;
- (id)initWithDatabase:(id)arg1 hookResponder:(id)arg2;
- (void)enableIndexingAndBeginScheduling:(_Bool)arg1 budgetConfiguration:(id)arg2;
- (void)_removeAllItemsFromIndexAndWait:(_Bool)arg1 options:(unsigned long long)arg2;
- (id)_filterInMessagesWithValidPersistentIDsFromMessages:(id)arg1;
- (void)_removeItemsForIndexableMessages:(id)arg1;
- (void)removeAllItemsFromIndexAndWait:(_Bool)arg1 skipInvalidation:(_Bool)arg2;
- (void)setNeedsReindex;

@end
