/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class PKAccountPaymentFundingSource, PKCurrencyAmount;

@interface PKAccountScheduledPayment : NSObject <Swift>

{
    PKCurrencyAmount *_currencyAmount;
    PKAccountPaymentFundingSource *_fundingSource;
}

@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrencyAmount:(id)arg1 fundingSource:(id)arg2;
- (id)hashComponentWithCertificatesResponse:(id)arg1;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1;

@end
