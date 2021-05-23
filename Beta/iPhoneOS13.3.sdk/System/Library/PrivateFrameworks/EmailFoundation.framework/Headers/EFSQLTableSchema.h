/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class EFSQLColumnSchema, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface EFSQLTableSchema : NSObject

{
    NSMutableArray *_columns;
    NSMutableDictionary *_columnsByName;
    NSMutableArray *_uniquenessConstraints;
    NSMutableArray *_checkConstraints;
    NSHashTable *_foreignKeyReferences;
    NSHashTable *_associatedColumns;
    NSMutableArray *_indexes;
    NSArray *_primaryKeyColumns;
    NSString *_name;
    NSString *_rowIDColumnName;
    unsigned long long _primaryKeyConflictResolution;
}

@property (copy, nonatomic, readonly) NSString *rowIDColumnName;
@property (nonatomic, readonly) unsigned long long primaryKeyConflictResolution;
@property (nonatomic, readonly) EFSQLColumnSchema *rowIDColumn;
@property (copy, nonatomic, readonly) NSArray *primaryKeyColumns;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *columns;
@property (copy, nonatomic, readonly) NSArray *uniqueColumns;
@property (copy, nonatomic, readonly) NSArray *checkConstraints;
@property (copy, nonatomic, readonly) NSSet *foreignKeyReferences;
@property (copy, nonatomic, readonly) NSSet *associatedColumns;
@property (copy, nonatomic, readonly) NSArray *indexes;

- (id)description;
- (void)addIndex:(id)arg1;
- (id)columnForName:(id)arg1;
- (id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 columns:(id)arg3;
- (void)addIndexForColumns:(id)arg1;
- (void)addUniquenessConstraintForColumns:(id)arg1 conflictResolution:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 rowIDAlias:(id)arg3 columns:(id)arg4;
- (id)initWithName:(id)arg1 columns:(id)arg2 primaryKeyColumns:(id)arg3;
- (id)definitionWithDatabaseName:(id)arg1 includeIndexes:(_Bool)arg2;
- (id)definitionWithDatabaseName:(id)arg1;
- (id)indexDefinitionsWithDatabaseName:(id)arg1;
- (id)initWithName:(id)arg1 columns:(id)arg2 primaryKeyColumns:(id)arg3 conflictResolution:(unsigned long long)arg4;
- (void)addColumn:(id)arg1;
- (id)fullNameWithDatabaseName:(id)arg1;
- (void)addForeignKeyReference:(id)arg1;
- (void)addAssociatedColumn:(id)arg1;
- (id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 rowIDAlias:(id)arg3 columns:(id)arg4 primaryKeyColumns:(id)arg5 conflictResolution:(unsigned long long)arg6;
- (id)_columnsForColumnNames:(id)arg1;
- (void)addCheckConstraintForExpression:(id)arg1;

@end
