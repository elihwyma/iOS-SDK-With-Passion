/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountFeatureDescriptor.h>

@class NSArray, NSString;

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor

{
    unsigned long long _paymentFundingSourceTypes;
    unsigned long long _paymentPresets;
    unsigned long long _paymentFrequencies;
    NSArray *_supportedFileFormatsForTransactionData;
    NSString *_paymentTermsIdentifier;
    NSString *_fundingSourceTermsIdentifier;
}

@property (nonatomic) unsigned long long paymentFundingSourceTypes;
@property (nonatomic) unsigned long long paymentPresets;
@property (nonatomic) unsigned long long paymentFrequencies;
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData;
@property (copy, nonatomic) NSString *paymentTermsIdentifier;
@property (copy, nonatomic) NSString *fundingSourceTermsIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToCreditAccountFeatureDescriptor:(id)arg1;

@end
