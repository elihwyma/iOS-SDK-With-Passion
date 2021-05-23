/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSSQLiteAdapter, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface _NSSQLGenerator : NSObject

{
    NSSQLiteStatement *_statement;
    NSSQLiteAdapter *_adapter;
    NSMutableString *_sqlString;
    NSMutableString *_whereClause;
    NSMutableString *_selectList;
}

+ (void)initialize;

- (void)dealloc;
- (id)sqlString;
- (void)appendSQL:(id)arg1;
- (void)prepareInsertStatementWithRow:(id)arg1 includeConstraints:(_Bool)arg2;
- (void)prepareInsertStatementWithRow:(id)arg1 includeConstraints:(_Bool)arg2 includeOnConflict:(_Bool)arg3;
- (void)_startSQL:(id)arg1;
- (void)appendWhereClause:(id)arg1;
- (void)buildWhereClauseForRow:(id)arg1 optLock:(long long)arg2;
- (void)appendWhereClauseToSQL;
- (id)initWithStatement:(id)arg1 forAdapter:(id)arg2;
- (void)prepareInsertStatementWithRow:(id)arg1;
- (void)prepareInsertStatementForRelationship:(id)arg1;
- (void)prepareMasterReorderStatementForRelationship:(id)arg1;
- (void)prepareMasterReorderStatementPart2ForRelationship:(id)arg1;
- (void)prepareReorderStatementForRelationship:(id)arg1;
- (void)prepareDeleteStatementForRelationship:(id)arg1;
- (void)prepareConstrainedValuesUpdateStatementWithRow:(id)arg1;
- (void)prepareUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2 withMask:(struct __CFBitVector *)arg3;
- (void)prepareDeleteStatementWithRow:(id)arg1;

@end
