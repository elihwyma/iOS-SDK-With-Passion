/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLitePropertyPredicate.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDSQLiteQuery, NSArray, NSString;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <Swift>

{
    _Bool _negative;
    HDSQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
}

@property (nonatomic, readonly, getter=isNegative) _Bool negative;
@property (nonatomic, readonly) HDSQLiteQuery *query;
@property (nonatomic, readonly) NSString *queryProperty;
@property (nonatomic, readonly) NSArray *values;

+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;
- (_Bool)isCompatibleWithPredicate:(id)arg1;

@end
