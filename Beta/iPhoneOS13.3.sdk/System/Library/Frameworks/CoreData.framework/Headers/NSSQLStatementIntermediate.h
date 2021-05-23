/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSSQLLimitIntermediate, NSSQLOrderIntermediate, NSSQLWhereIntermediate, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLStatementIntermediate : NSSQLIntermediate

{
    NSSQLEntity *_governingEntity;
    NSString *_governingAlias;
    NSString *_correlationToken;
    NSSQLWhereIntermediate *_whereClause;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOrderIntermediate *_orderIntermediate;
}

- (void)dealloc;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (_Bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (void)setLimitIntermediate:(id)arg1;
- (id)whereIntermediate;
- (id)correlationToken;
- (id)orderIntermediate;
- (id)limitIntermediate;
- (id)governingAlias;
- (void)setWhereIntermediate:(id)arg1;
- (void)setOrderIntermediate:(id)arg1;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;
- (id)governingEntity;
- (void)setGoverningAlias:(id)arg1;
- (void)setCorrelationToken:(id)arg1;
- (void)setGoverningEntity:(id)arg1;

@end
