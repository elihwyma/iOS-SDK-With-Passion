/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <Foundation/NSEnumerator.h>

@class HMBSQLQueryStatement, NSError, NSMutableArray, NSNumber;

@interface HMBSQLQueryIterator : NSEnumerator

{
    int _sequenceBindOffset;
    NSError *_error;
    HMBSQLQueryStatement *_statement;
    unsigned long long _maximumRowsPerQuery;
    NSMutableArray *_cachedResults;
    NSNumber *_currentSequence;
}

@property (nonatomic, readonly) HMBSQLQueryStatement *statement;
@property (nonatomic, readonly) unsigned long long maximumRowsPerQuery;
@property (retain, nonatomic) NSMutableArray *cachedResults;
@property (retain, nonatomic) NSNumber *currentSequence;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int sequenceBindOffset;

+ (unsigned long long)maximumRowsPerSelect;
+ (void)setMaximumRowsPerSelect:(unsigned long long)arg1;

- (id)nextObject;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithStatement:(id)arg1 initialSequence:(id)arg2 maximumRowsPerSelect:(unsigned long long)arg3 error:(id)arg4;
- (id)fetchRow:(id)arg1 error:(id *)arg2;
- (id)initWithStatement:(id)arg1 initialSequence:(id)arg2 maximumRowsPerSelect:(unsigned long long)arg3;
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(_Bool *)arg2 updatedSequence:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;

@end
