/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSSQLitePredicate.h>

@class NSArray, NSString;

@interface SSSQLiteCompoundPredicate : SSSQLitePredicate

{
    NSString *_combinationOperation;
    NSArray *_predicates;
}

@property (nonatomic, readonly) NSArray *predicates;

+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;

@end
