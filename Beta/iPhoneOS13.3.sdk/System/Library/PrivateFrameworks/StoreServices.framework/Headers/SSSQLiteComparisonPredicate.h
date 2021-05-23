/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSSQLitePropertyPredicate.h>

@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate

{
    long long _comparisonType;
    id _value;
}

@property (nonatomic, readonly) long long comparisonType;
@property (nonatomic, readonly) id value;

+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_comparisonTypeString;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;

@end
