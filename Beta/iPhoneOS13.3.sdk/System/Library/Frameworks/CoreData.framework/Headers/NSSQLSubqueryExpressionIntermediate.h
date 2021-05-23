/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSExpression, NSMutableArray, NSMutableString, NSSQLColumn, NSSQLEntity, NSSQLFetchIntermediate, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate

{
    NSExpression *_trailingKeypath;
    NSExpression *_variableExpression;
    NSSQLFetchIntermediate *_fetchIntermediate;
    NSSQLEntity *_selectFromEntity;
    NSMutableString *_selectFromCorrelationTarget;
    NSString *_selectEntityAlias;
    NSSQLEntity *_governingEntityForVariable;
    NSSQLColumn *_variableColumn;
    NSString *_variableAlias;
    NSSQLColumn *_targetColumn;
    NSString *_targetAlias;
    NSMutableArray *_keypathsToPromote;
    _Bool _useDistinct;
    _Bool _isCount;
    _Bool _hasTrailingFunction;
    _Bool _onlyTrailIsCount;
    _Bool _subqueryHasTruePredicate;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithExpression:(id)arg1 trailingKeypath:(id)arg2 inScope:(id)arg3;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (_Bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (void)selectDistinct;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (_Bool)_isKeypathScopedToSubquery:(id)arg1;
- (void)_setVariableColumn:(id)arg1;
- (_Bool)canDoDirectJoinGivenPredicate:(id)arg1;
- (void)_createCollectionJoinsForFetchInContext:(id)arg1;
- (void)_createSelectClauseInFetchWithContext:(id)arg1;

@end
