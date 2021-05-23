/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountPaymentFundingDetails.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKAccountPaymentFundingDetailsBankAccount : PKAccountPaymentFundingDetails <Swift>

{
    NSString *_accountIdentifier;
    NSString *_accountNumber;
    NSString *_routingNumber;
    NSString *_name;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountNumber;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *name;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)fundingDetailsUnencryptedDictionary;

@end
