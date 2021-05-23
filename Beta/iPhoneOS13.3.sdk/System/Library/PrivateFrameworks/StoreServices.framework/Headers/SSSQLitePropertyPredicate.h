/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSSQLitePredicate.h>

@class NSString;

@interface SSSQLitePropertyPredicate : SSSQLitePredicate

{
    NSString *_property;
}

@property (nonatomic, readonly) NSString *property;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;

@end
