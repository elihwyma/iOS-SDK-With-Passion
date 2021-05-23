/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSMutableArray, NSMutableDictionary, NSSQLGroupByIntermediate, NSSQLHavingIntermediate, NSSQLOffsetIntermediate, NSSQLSelectIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate

{
    NSSQLSelectIntermediate *_selectClause;
    NSSQLGroupByIntermediate *_groupByClause;
    NSSQLHavingIntermediate *_havingClause;
    NSSQLOffsetIntermediate *_offsetClause;
    NSMutableArray *_groupByKeypaths;
    _Bool _isDictionaryCountFetch;
    NSMutableArray *_joinIntermediates;
    NSMutableDictionary *_joinKeypaths;
}

- (void)dealloc;
- (id)initWithScope:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)selectIntermediate;
- (_Bool)isFunctionScoped;
- (id)_generateJoinSQLStringInContext:(id)arg1;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)fetchIntermediate;
- (_Bool)isDictionaryCountFetch;
- (void)setDictionaryCountFetch:(_Bool)arg1;
- (void)setSelectIntermediate:(id)arg1;
- (id)groupByIntermediate;
- (void)setGroupByIntermediate:(id)arg1;
- (void)addGroupByKeypath:(id)arg1;
- (_Bool)groupByClauseContainsKeypath:(id)arg1;
- (id)havingIntermediate;
- (void)setHavingIntermediate:(id)arg1;
- (void)setOffsetIntermediate:(id)arg1;
- (void)addJoinIntermediate:(id)arg1 atKeypathWithComponents:(id)arg2;
- (id)finalJoinForKeypathWithComponents:(id)arg1;
- (void)promoteToOuterJoinsAlongKeypathWithComponents:(id)arg1;
- (void)promoteToOuterJoinAtKeypathWithComponents:(id)arg1;
- (id)joinIntermediates;
- (void)selectDistinct;

@end
