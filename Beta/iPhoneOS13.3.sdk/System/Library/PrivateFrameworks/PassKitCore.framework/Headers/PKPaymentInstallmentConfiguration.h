/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSDecimalNumber, NSString;

@interface PKPaymentInstallmentConfiguration : NSObject <Swift>

{
    _Bool _inStorePurchase;
    long long _feature;
    NSData *_merchandisingImageData;
    NSDecimalNumber *_openToBuyThresholdAmount;
    NSDecimalNumber *_bindingTotalAmount;
    NSString *_currencyCode;
    NSString *_installmentMerchantIdentifier;
}

@property (nonatomic) long long feature;
@property (copy, nonatomic) NSData *merchandisingImageData;
@property (retain, nonatomic) NSDecimalNumber *openToBuyThresholdAmount;
@property (retain, nonatomic) NSDecimalNumber *bindingTotalAmount;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic, getter=isInStorePurchase) _Bool inStorePurchase;
@property (copy, nonatomic) NSString *installmentMerchantIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToInstallmentConfiguration:(id)arg1;

@end
