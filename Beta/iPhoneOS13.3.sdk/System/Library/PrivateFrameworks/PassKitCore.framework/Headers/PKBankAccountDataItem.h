/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKBankAccountDataItem : PKPaymentDataItem

{
    PKCurrencyAmount *_peerPaymentBalance;
    PKBankAccountInformation *_PKBankAccountInformation;
}

@property (retain, nonatomic) PKBankAccountInformation *PKBankAccountInformation;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic, readonly) PKBankAccountInformation *bankAccountInformation;

+ (long long)dataType;

- (id)initWithModel:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;

@end
