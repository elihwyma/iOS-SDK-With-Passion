/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBModelUnindexedQuery.h>

@class NSArray, NSString;

@interface HMBModelIndexedQuery : HMBModelUnindexedQuery

{
    NSString *_indexNameSuffix;
    NSArray *_indexedColumns;
}

@property (nonatomic, readonly) NSString *indexNameSuffix;
@property (nonatomic, readonly) NSArray *indexedColumns;
@property (nonatomic, readonly) NSString *indexName;

+ (id)queryWithSQLPredicate:(id)arg1 ascending:(_Bool)arg2 indexedProperties:(id)arg3 arguments:(id)arg4;

- (_Bool)hasExpectedIndexes;
- (id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 initialSequence:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7;

@end
