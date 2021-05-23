/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSSQLitePropertyPredicate.h>

__attribute__((visibility("hidden")))
@interface AMSSQLiteNullPredicate : AMSSQLitePropertyPredicate

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
