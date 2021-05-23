/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSError, SiriCoreSQLiteQuery, SiriCoreSQLiteStatement;

@interface SiriCoreSQLiteQueryResult : NSObject

{
    SiriCoreSQLiteQuery *_query;
    unsigned long long _beginMachTime;
    unsigned long long _endMachTime;
    SiriCoreSQLiteStatement *_statement;
    NSArray *_columnNameTuple;
    NSArray *_columnValueTuples;
    NSDictionary *_columnValuesMap;
    NSArray *_rowValueTuples;
    NSArray *_rowValueMaps;
    NSArray *_records;
    NSError *_error;
}

@property (copy, nonatomic, readonly) SiriCoreSQLiteQuery *query;
@property (nonatomic, readonly) unsigned long long beginMachTime;
@property (nonatomic, readonly) unsigned long long endMachTime;
@property (nonatomic, readonly) SiriCoreSQLiteStatement *statement;
@property (copy, nonatomic, readonly) NSArray *columnNameTuple;
@property (copy, nonatomic, readonly) NSArray *columnValueTuples;
@property (copy, nonatomic, readonly) NSDictionary *columnValuesMap;
@property (copy, nonatomic, readonly) NSArray *rowValueTuples;
@property (copy, nonatomic, readonly) NSArray *rowValueMaps;
@property (copy, nonatomic, readonly) NSArray *records;
@property (copy, nonatomic, readonly) NSError *error;

- (id)description;
- (id)initWithQuery:(id)arg1 beginMachTime:(unsigned long long)arg2 endMachTime:(unsigned long long)arg3 statement:(id)arg4 columnNameTuple:(id)arg5 columnValueTuples:(id)arg6 columnValuesMap:(id)arg7 rowValueTuples:(id)arg8 rowValueMaps:(id)arg9 records:(id)arg10 error:(id)arg11;

@end
