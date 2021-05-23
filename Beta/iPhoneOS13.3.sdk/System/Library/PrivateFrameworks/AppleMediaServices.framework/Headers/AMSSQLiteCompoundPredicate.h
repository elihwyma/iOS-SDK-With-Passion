/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSSQLitePredicate.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteCompoundPredicate : AMSSQLitePredicate

{
    NSString *_combinationOperation;
    NSArray *_predicates;
}

@property (nonatomic, readonly) NSArray *predicates;

+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;

@end
