/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class EFSQLInsertStatement, EFSQLUpdateStatement, NSArray, NSString;

@protocol EFSQLExpressable, EFSQLInsertStatementValue, EFSQLUpdateStatementValue;

@interface EFSQLUpsertStatement : NSObject

{
    EFSQLInsertStatement *_insertStatement;
    EFSQLUpdateStatement *_updateStatement;
    NSArray *_conflictTarget;
}

@property (nonatomic, readonly) EFSQLInsertStatement *insertStatement;
@property (nonatomic, readonly) EFSQLUpdateStatement *updateStatement;
@property (nonatomic, readonly) NSArray *conflictTarget;
@property (nonatomic, readonly) id <EFSQLInsertStatementValue> insertValue;
@property (nonatomic, readonly) id <EFSQLUpdateStatementValue> updateValue;
@property (nonatomic, readonly) _Bool isEmpty;
@property (copy, nonatomic, readonly) NSString *queryString;
@property (retain, nonatomic) id <EFSQLExpressable> whereClause;

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)enumerateBindingNamesAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)excludedColumnExpressionForColumnName:(id)arg1;
- (id)initWithTable:(id)arg1 conflictTarget:(id)arg2;

@end
