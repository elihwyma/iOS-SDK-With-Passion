/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLContext, HMBSQLQueryStatement, HMBSQLStatement, NSArray, NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLQueryTable : HMFObject

{
    _Bool _finalized;
    HMBLocalSQLContext *_context;
    Class _modelClass;
    NSString *_modelType;
    NSArray *_columnFields;
    NSArray *_columnNames;
    HMBSQLQueryStatement *_selectAll;
    NSString *_dropTableSQL;
    HMBSQLStatement *_deleteAll;
    HMBSQLStatement *_updateRecord;
    HMBSQLStatement *_deleteRecord;
    NSHashTable *_userQueries;
}

@property (nonatomic, readonly) HMBSQLStatement *deleteAll;
@property (nonatomic, readonly) HMBSQLStatement *updateRecord;
@property (nonatomic, readonly) HMBSQLStatement *deleteRecord;
@property (nonatomic, readonly) NSHashTable *userQueries;
@property (nonatomic) _Bool finalized;
@property (weak, nonatomic, readonly) HMBLocalSQLContext *context;
@property (nonatomic, readonly) Class modelClass;
@property (nonatomic, readonly) NSString *modelType;
@property (nonatomic, readonly) NSArray *columnFields;
@property (nonatomic, readonly) NSArray *columnNames;
@property (nonatomic, readonly) HMBSQLQueryStatement *selectAll;
@property (nonatomic, readonly) NSString *dropTableSQL;

- (void)dealloc;
- (void)finalize;
- (id)buildQueriableFieldsForModel:(id)arg1;
- (unsigned long long)_deleteQueryForRecordRow:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)_updateQueryForZoneRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 encodedColumns:(id)arg3 error:(id *)arg4;
- (id)initWithContext:(id)arg1 queryModel:(Class)arg2 prepareOnly:(_Bool)arg3;
- (id)performQueryOn:(id)arg1 properties:(id)arg2 filter:(CDUnknownBlockType)arg3;
- (unsigned long long)_deleteAllQueriesForZoneRow:(unsigned long long)arg1 error:(id *)arg2;

@end
