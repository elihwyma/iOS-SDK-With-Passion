/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate

{
    NSArray *_properties;
}

@property (copy, nonatomic, readonly) NSArray *properties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (_Bool)isCompatibleWithPredicate:(id)arg1;
- (id)initWithProperties:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;

@end
