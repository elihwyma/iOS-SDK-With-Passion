/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLitePredicate.h>

@interface HDAssociationEntityAssociationPredicate : HDSQLitePredicate

{
    long long _assocationID;
}

+ (id)predicateWithAssociationID:(long long)arg1;

- (id)description;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;

@end
