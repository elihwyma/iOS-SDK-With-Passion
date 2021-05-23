/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKFeatureApplicationOfferDetails : NSObject <Swift>

{
    NSString *_offerTermsIdentifier;
    NSDate *_expiryDate;
    NSDecimalNumber *_creditLimit;
    NSDecimalNumber *_annualFee;
    NSDecimalNumber *_aprForPurchase;
    NSString *_currencyCode;
}

@property (copy, nonatomic) NSString *offerTermsIdentifier;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSDecimalNumber *creditLimit;
@property (copy, nonatomic) NSDecimalNumber *annualFee;
@property (copy, nonatomic) NSDecimalNumber *aprForPurchase;
@property (copy, nonatomic) NSString *currencyCode;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
