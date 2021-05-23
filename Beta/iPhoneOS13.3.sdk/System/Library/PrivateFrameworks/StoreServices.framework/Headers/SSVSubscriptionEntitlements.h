/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface SSVSubscriptionEntitlements : NSObject

{
    NSNumber *_accountIdentifier;
    NSNumber *_accountStoreFrontIdentifier;
    NSString *_accountISO3Country;
    NSArray *_entitledSubscriptions;
    NSDate *_cachedTimestamp;
}

@property (copy, nonatomic) NSDate *cachedTimestamp;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSNumber *accountStoreFrontIdentifier;
@property (copy, nonatomic) NSString *accountISO3Country;
@property (copy, nonatomic) NSArray *entitledSubscriptions;

+ (id)_valueForKey:(id)arg1 fromDictionary:(id)arg2 ofType:(Class)arg3;
+ (id)_parseJSONDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
