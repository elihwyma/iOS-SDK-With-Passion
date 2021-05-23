/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDSQLitePredicate : NSObject <Swift>

+ (id)truePredicate;
+ (id)falsePredicate;
+ (id)compoundPredicateWithPredicate:(id)arg1 otherPredicate:(id)arg2;
+ (id)disjunctionWithPredicate:(id)arg1 otherPredicate:(id)arg2;
+ (id)booleanPredicateWithValue:(_Bool)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;
- (_Bool)isCompatibleWithPredicate:(id)arg1;

@end
