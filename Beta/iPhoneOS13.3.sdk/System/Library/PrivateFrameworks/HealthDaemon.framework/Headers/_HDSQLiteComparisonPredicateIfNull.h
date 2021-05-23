/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate

{
    id _ifPropertyIsNullValue;
}

@property (copy, nonatomic, readonly) id ifPropertyIsNullValue;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;
- (id)initWithProperty:(id)arg1 ifPropertyIsNullValue:(id)arg2 value:(id)arg3 comparisonType:(long long)arg4;

@end
