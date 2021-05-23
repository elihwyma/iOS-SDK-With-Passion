/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSManagedObjectContext, NSPersistentHistoryToken;

@interface PLPersistentHistoryTransactionIterator : NSObject

{
    NSArray *_transactions;
    unsigned long long _transactionIndex;
    NSPersistentHistoryToken *_lastIteratedToken;
    NSPersistentHistoryToken *_initialToken;
    unsigned long long _count;
    NSManagedObjectContext *_context;
}

@property (copy, nonatomic, readonly) NSPersistentHistoryToken *initialToken;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (copy, nonatomic, readonly) NSPersistentHistoryToken *lastIteratedToken;

+ (id)iteratorSinceToken:(id)arg1 withManagedObjectObjectContext:(id)arg2 error:(id *)arg3;
+ (id)iteratorSinceToken:(id)arg1 withBatchSize:(unsigned long long)arg2 managedObjectObjectContext:(id)arg3 error:(id *)arg4;

- (id)initWithInitialToken:(id)arg1 transactions:(id)arg2 managedObjectObjectContext:(id)arg3;
- (_Bool)_hasMoreTransactions;
- (void)enumerateRemainingTransactionsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_enumerateOneTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)_safeTransactionAtIndex:(unsigned long long)arg1;

@end
