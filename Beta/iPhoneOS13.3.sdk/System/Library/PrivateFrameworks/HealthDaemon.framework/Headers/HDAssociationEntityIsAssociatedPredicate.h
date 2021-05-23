/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLitePredicate.h>

@interface HDAssociationEntityIsAssociatedPredicate : HDSQLitePredicate

{
    _Bool _inverted;
}

+ (id)predicateWithInvertedCondition:(_Bool)arg1;

- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;

@end
