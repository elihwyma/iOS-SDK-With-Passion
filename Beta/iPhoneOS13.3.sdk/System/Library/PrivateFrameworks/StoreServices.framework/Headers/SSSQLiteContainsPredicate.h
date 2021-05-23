/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSSQLitePropertyPredicate.h>

@class NSArray, NSString, SSSQLiteQuery;

@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate

{
    _Bool _negative;
    SSSQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
}

@property (nonatomic, readonly, getter=isNegative) _Bool negative;
@property (nonatomic, readonly) SSSQLiteQuery *query;
@property (nonatomic, readonly) NSString *queryProperty;
@property (nonatomic, readonly) NSArray *values;

+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;

@end
