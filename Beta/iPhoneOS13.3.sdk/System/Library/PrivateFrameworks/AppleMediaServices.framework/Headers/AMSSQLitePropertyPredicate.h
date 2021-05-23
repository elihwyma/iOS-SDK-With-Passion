/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSSQLitePredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLitePropertyPredicate : AMSSQLitePredicate

{
    NSString *_property;
}

@property (nonatomic, readonly) NSString *property;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;

@end
