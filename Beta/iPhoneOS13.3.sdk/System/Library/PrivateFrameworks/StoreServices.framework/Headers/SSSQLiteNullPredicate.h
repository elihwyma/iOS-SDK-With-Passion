/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSSQLitePropertyPredicate.h>

@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate

{
    _Bool _matchesNull;
}

@property (nonatomic, readonly) _Bool matchesNull;

+ (id)isNotNullPredicateWithProperty:(id)arg1;
+ (id)isNullPredicateWithProperty:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLForEntityClass:(Class)arg1;

@end
