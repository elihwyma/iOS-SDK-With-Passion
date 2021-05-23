/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface SKPaymentDiscount : NSObject

{
    id _internal;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *keyIdentifier;
@property (copy, nonatomic, readonly) NSUUID *nonce;
@property (copy, nonatomic, readonly) NSString *signature;
@property (copy, nonatomic, readonly) NSNumber *timestamp;

- (id)initWithIdentifier:(id)arg1 keyIdentifier:(id)arg2 nonce:(id)arg3 signature:(id)arg4 timestamp:(id)arg5;

@end
