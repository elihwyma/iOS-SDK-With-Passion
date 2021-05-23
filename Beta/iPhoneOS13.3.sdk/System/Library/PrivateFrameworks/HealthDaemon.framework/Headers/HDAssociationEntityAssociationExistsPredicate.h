/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLitePredicate.h>

@interface HDAssociationEntityAssociationExistsPredicate : HDSQLitePredicate

{
    long long _assocationID;
    _Bool _exists;
}

+ (id)predicateWithAssociationID:(long long)arg1 exists:(_Bool)arg2;

- (id)description;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;

@end
