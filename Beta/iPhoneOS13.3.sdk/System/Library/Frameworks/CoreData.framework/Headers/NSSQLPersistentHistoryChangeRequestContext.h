/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSFetchRequest, NSPersistentHistoryChangeRequest;

__attribute__((visibility("hidden")))
@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext

{
    NSFetchRequest *_fetchRequest;
    _Bool _shouldUseBatches;
}

@property (nonatomic, readonly) NSPersistentHistoryChangeRequest *request;
@property (nonatomic, readonly) _Bool shouldUseBatches;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (_Bool)isWritingRequest;
- (void)executePrologue;
- (_Bool)executeRequestUsingConnection:(id)arg1;
- (id)fetchRequestDescribingChanges;
- (id)_transactionFromResult:(id)arg1 withChanges:(id)arg2;
- (id)_changeFromResult:(id)arg1 withTransaction:(id)arg2;
- (id)_processResult:(id)arg1;
- (id)createCountRequestContextForChanges;
- (id)fetchRequestContextForChanges;
- (id)createRequestContextForChangesWithTransactionIDs:(id)arg1;
- (id)createDeleteTransactionsRequestContext;

@end
