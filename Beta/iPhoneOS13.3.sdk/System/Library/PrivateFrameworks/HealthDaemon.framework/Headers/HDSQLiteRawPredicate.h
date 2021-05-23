/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLitePredicate.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSArray, NSString;

@interface HDSQLiteRawPredicate : HDSQLitePredicate <Swift>

{
    NSString *_sql;
    NSArray *_properties;
    NSArray *_values;
}

+ (id)predicateWithSQL:(id)arg1 overProperties:(id)arg2 values:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (_Bool)isCompatibleWithPredicate:(id)arg1;

@end
