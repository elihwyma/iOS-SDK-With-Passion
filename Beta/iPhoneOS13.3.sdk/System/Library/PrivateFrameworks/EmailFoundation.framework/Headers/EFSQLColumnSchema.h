/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class EFSQLColumnExpression, EFSQLTableSchema, NSString;

@interface EFSQLColumnSchema : NSObject

{
    EFSQLTableSchema *_table;
    _Bool _nullable;
    _Bool _isPrimaryKey;
    _Bool _isAutoincrementing;
    NSString *_name;
    unsigned long long _type;
    EFSQLTableSchema *_foreignKeyTarget;
    EFSQLTableSchema *_associatedTable;
    unsigned long long _collation;
    id _defaultValue;
    NSString *_foreignKeyTargetString;
    unsigned long long _foreignKeyDeleteAction;
    unsigned long long _foreignKeyUpdateAction;
}

@property (nonatomic, readonly) unsigned long long collation;
@property (nonatomic, readonly) _Bool isPrimaryKey;
@property (nonatomic, readonly) _Bool isAutoincrementing;
@property (nonatomic, readonly) id defaultValue;
@property (copy, nonatomic) NSString *foreignKeyTargetString;
@property (weak, nonatomic) EFSQLTableSchema *foreignKeyTarget;
@property (nonatomic) unsigned long long foreignKeyDeleteAction;
@property (nonatomic) unsigned long long foreignKeyUpdateAction;
@property (weak, nonatomic) EFSQLTableSchema *associatedTable;
@property (weak, nonatomic, readonly) EFSQLTableSchema *table;
@property (copy, nonatomic, readonly) NSString *definition;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) _Bool nullable;
@property (nonatomic, readonly) EFSQLColumnExpression *columnExpression;
@property (nonatomic, readonly) EFSQLColumnExpression *columnExpressionWithFullName;

+ (id)integerColumnWithName:(id)arg1 nullable:(_Bool)arg2 defaultValue:(id)arg3;
+ (id)integerColumnWithName:(id)arg1 nullable:(_Bool)arg2;
+ (id)textColumnWithName:(id)arg1 collation:(unsigned long long)arg2 nullable:(_Bool)arg3;
+ (id)blobColumnWithName:(id)arg1 nullable:(_Bool)arg2;
+ (id)realColumnWithName:(id)arg1 nullable:(_Bool)arg2 defaultValue:(id)arg3;
+ (id)textColumnWithName:(id)arg1 collation:(unsigned long long)arg2 nullable:(_Bool)arg3 defaultValue:(id)arg4;
+ (id)stringForColumnType:(unsigned long long)arg1;
+ (unsigned long long)columnTypeForString:(id)arg1;
+ (id)realColumnWithName:(id)arg1 nullable:(_Bool)arg2;

- (id)description;
- (id)debugDescription;
- (void)setTable:(id)arg1;
- (void)setAsForeignKeyForTable:(id)arg1 onDelete:(unsigned long long)arg2 onUpdate:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 collation:(unsigned long long)arg3 nullable:(_Bool)arg4 defaultValue:(id)arg5;
- (id)initWithName:(id)arg1 isPrimaryKey:(_Bool)arg2 isAutoincrementing:(_Bool)arg3 type:(unsigned long long)arg4 collation:(unsigned long long)arg5 nullable:(_Bool)arg6 defaultValue:(id)arg7;
- (id)_stringForForeignKeyAction:(unsigned long long)arg1;
- (id)fullNameWithDatabaseName:(id)arg1;
- (id)initRowIDWithAlias:(id)arg1 isAutoincrementing:(_Bool)arg2;
- (void)setAsForeignKeyForString:(id)arg1 onDelete:(unsigned long long)arg2 onUpdate:(unsigned long long)arg3;
- (void)associateWithTable:(id)arg1;

@end
