/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSVFairPlaySubscriptionStatus : NSObject

{
    _Bool _hasSubscriptionLease;
    _Bool _hasSubscriptionSlot;
}

@property (nonatomic) _Bool hasSubscriptionLease;
@property (nonatomic) _Bool hasSubscriptionSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
