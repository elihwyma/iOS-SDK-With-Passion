/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreRequest.h>

@class NSArray, NSFetchRequest, NSNumber, NSPersistentHistoryToken;

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest

{
    NSPersistentHistoryToken *_token;
    long long _resultType;
    NSArray *_transactionIDs;
    NSNumber *_transactionNumber;
    struct __persistentHistoryChangeRequestDescriptionFlags {
        unsigned int _useQueryGenerationToken:1;
        unsigned int _deleteHistoryRequest:1;
        unsigned int _fetchTransactionForToken:1;
        unsigned int _reservedPersistentHistoryChangeRequestDescription:29;
    } _persistentHistoryChangeRequestDescriptionFlags;
    id *_additionalPrivateIvars;
}

@property long long resultType;
@property (readonly) NSPersistentHistoryToken *token;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;

+ (id)fetchHistoryAfterDate:(id)arg1;
+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2;
+ (id)deleteHistoryBeforeToken:(id)arg1;
+ (id)fetchHistoryAfterToken:(id)arg1;
+ (id)fetchHistoryTransactionForToken:(id)arg1;
+ (id)deleteHistoryBeforeDate:(id)arg1;
+ (id)fetchHistoryAfterTransaction:(id)arg1;
+ (id)fetchHistoryWithFetchRequest:(id)arg1;
+ (id)deleteHistoryBeforeTransaction:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)date;
- (id)initWithDate:(id)arg1;
- (id)predicate;
- (id)sortDescriptors;
- (unsigned long long)fetchOffset;
- (unsigned long long)fetchLimit;
- (id)propertiesToFetch;
- (void)setFetchLimit:(unsigned long long)arg1;
- (id)initWithFetchRequest:(id)arg1;
- (void)setFetchBatchSize:(unsigned long long)arg1;
- (id)initWithToken:(id)arg1;
- (unsigned long long)requestType;
- (_Bool)isDelete;
- (unsigned long long)fetchBatchSize;
- (id)propertiesToGroupBy;
- (id)encodeForXPC;
- (_Bool)includesSubentities;
- (_Bool)isFetchTransactionForToken;
- (id)transactionNumber;
- (id)initWithTransactionToken:(id)arg1;
- (id)initWithDate:(id)arg1 delete:(_Bool)arg2;
- (id)initWithToken:(id)arg1 delete:(_Bool)arg2;
- (id)propertiesToFetchForEntity:(id)arg1 includeTransactionStrings:(_Bool)arg2;
- (id)initWithTransactionIDs:(id)arg1;
- (id)initWithTransactionID:(id)arg1 delete:(_Bool)arg2 transactionOnly:(_Bool)arg3;
- (_Bool)includesPropertyValues;
- (id)propertiesToFetchForEntity:(id)arg1;
- (id)entityNameToFetch;
- (_Bool)useQueryGenerationToken;
- (void)setUseQueryGenerationToken:(_Bool)arg1;
- (_Bool)returnsDistinctResults;
- (id)predicateForStoreIdentifier:(id)arg1;

@end
