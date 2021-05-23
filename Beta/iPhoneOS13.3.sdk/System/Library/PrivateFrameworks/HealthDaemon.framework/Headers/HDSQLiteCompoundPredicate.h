/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLitePredicate.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSArray, NSString;

@interface HDSQLiteCompoundPredicate : HDSQLitePredicate <Swift>

{
    _Bool _unary;
    _Bool _trueIfNoPredicates;
    NSString *_combinationOperation;
    NSArray *_predicates;
}

@property (nonatomic, readonly) NSArray *predicates;

+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;
+ (id)negatedPredicate:(id)arg1;
+ (id)predicateWithProperty:(id)arg1 equalToValues:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 notEqualToValues:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (_Bool)isCompatibleWithPredicate:(id)arg1;

@end
