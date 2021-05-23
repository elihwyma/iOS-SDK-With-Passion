/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@interface SSVSubscriptionResponse : NSObject

{
    NSMutableDictionary *_accountUniqueIdentifierToSubscriptionStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)setSubscriptionStatus:(id)arg1 forAccountUniqueIdentifier:(unsigned long long)arg2;
- (id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg1;

@end
