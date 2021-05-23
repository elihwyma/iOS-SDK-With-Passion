/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPersistentHistoryToken, NSString, PLPersistentHistoryTransactionIterator;

@interface PLCloudPersistentHistoryTransactionsResult : NSObject

{
    NSArray *_transactions;
    PLPersistentHistoryTransactionIterator *_transactionIterator;
    CDUnknownBlockType _isTransactionSyncableFilter;
    long long _resultType;
    NSString *_currentTokenDescription;
    NSPersistentHistoryToken *_lastProcessedCoreDataToken;
}

@property (readonly) long long resultType;
@property (copy, readonly) NSString *currentTokenDescription;
@property (copy, readonly) NSPersistentHistoryToken *lastProcessedCoreDataToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (CDUnknownBlockType)isTransactionSyncableFilter;
+ (id)fetchTransactionsSinceToken:(id)arg1 inContext:(id)arg2;

- (void)enumerateLocalEventsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithSuccesfulTransactionIterator:(id)arg1;
- (id)initWithUnsuccessfulResultType:(long long)arg1;
- (id)initWithResultType:(long long)arg1 transactionIterator:(id)arg2;
- (void)sendLocalEvent:(id)arg1 toEnumerationBlock:(CDUnknownBlockType)arg2;
- (id)localEventForAllTransactions;
- (void)updateLastProcessedCoreDataToken;

@end
