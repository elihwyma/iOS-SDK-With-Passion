/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSSQLitePropertyPredicate.h>

__attribute__((visibility("hidden")))
@interface AMSSQLiteComparisonPredicate : AMSSQLitePropertyPredicate

{
    long long _comparisonType;
    id _value;
}

@property (nonatomic, readonly) long long comparisonType;
@property (nonatomic, readonly) id value;

+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_comparisonTypeString;

@end
