/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLitePropertyPredicate.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDSQLiteComparisonPredicate : HDSQLitePropertyPredicate <Swift>

{
    long long _comparisonType;
    id _value;
    _Bool _influenceIndexUsage;
}

@property (nonatomic, readonly) long long comparisonType;
@property (nonatomic, readonly) id value;

+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateWithProperty:(id)arg1 greaterThanValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 greaterThanOrEqualToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 lessThanOrEqualToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 likeValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 notEqualToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 lessThanValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 likeValue:(id)arg2 escapeCharacter:(id)arg3;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 influenceIndexUsage:(_Bool)arg4;
+ (id)predicateWithProperty:(id)arg1 ifNullValue:(id)arg2 value:(id)arg3 comparisonType:(long long)arg4;
+ (id)predicateWithCoalescedProperties:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_comparisonTypeString;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(int *)arg2;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;
- (_Bool)isCompatibleWithPredicate:(id)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 influenceIndexUsage:(_Bool)arg4;

@end
