/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLIntermediate : NSObject

{
    NSSQLIntermediate *_scope;
}

@property (nonatomic, readonly) NSSQLEntity *disambiguatingEntity;
@property (nonatomic, readonly) NSArray *disambiguationKeypath;
@property (nonatomic, readonly) _Bool disambiguationKeypathHasToMany;

+ (_Bool)isSimpleKeypath:(id)arg1;
+ (_Bool)expressionIsBasicKeypath:(id)arg1;

- (id)scope;
- (id)initWithScope:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)_generateSQLForExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (_Bool)isUpdateColumnsScoped;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (_Bool)isWhereScoped;
- (_Bool)isSimpleKeypath:(id)arg1;
- (_Bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2;
- (_Bool)isOrScoped;
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(_Bool)arg3;
- (_Bool)isTargetColumnsScoped;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)_lastScopedItem;
- (_Bool)isVariableBasedKeypathScopedBySubquery:(id)arg1;
- (_Bool)isIndexScoped;
- (_Bool)isFunctionScoped;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)fetchIntermediate;
- (_Bool)isUpdateScoped;
- (id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3;
- (_Bool)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1;
- (_Bool)isHavingScoped;
- (id)governingAlias;
- (_Bool)isIndexExpressionScoped;
- (_Bool)expressionIsBasicKeypath:(id)arg1;
- (id)governingEntity;
- (id)_entitySpecificationKeypath;
- (void)_setEntitySpecificationKeypath:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (void)promoteJoinsInKeypathsForExpression:(id)arg1;
- (void)_promoteJoinsForKeypathExpression:(id)arg1;
- (void)_promoteJoinsForFunctionExpression:(id)arg1;
- (void)_promoteJoinsForAggregateExpression:(id)arg1;
- (void)_promoteJoinsForTernaryExpression:(id)arg1;
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForConstantCollection:(id)arg1 reboundFrom:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (_Bool)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (_Bool)isSimpleNoIndexFunction:(id)arg1;

@end
