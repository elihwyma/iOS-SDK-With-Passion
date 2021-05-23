/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSSQLitePropertyPredicate.h>

@class AMSSQLiteQuery, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteContainsPredicate : AMSSQLitePropertyPredicate

{
    _Bool _negative;
    AMSSQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
}

@property (nonatomic, readonly, getter=isNegative) _Bool negative;
@property (nonatomic, readonly) AMSSQLiteQuery *query;
@property (nonatomic, readonly) NSString *queryProperty;
@property (nonatomic, readonly) NSArray *values;

+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)SQLForEntityClass:(Class)arg1;

@end
