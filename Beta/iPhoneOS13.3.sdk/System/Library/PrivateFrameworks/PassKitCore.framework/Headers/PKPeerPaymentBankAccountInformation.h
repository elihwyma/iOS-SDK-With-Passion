/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKBankAccountInformation.h>

@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation

- (id)init;
- (void)setAccountNumber:(id)arg1;
- (void)setRoutingNumber:(id)arg1;
- (void)setBankName:(id)arg1;
- (void)updateToLatestKeychainData;
- (void)deleteAllBankInformation;
- (id)_wrapperWithType:(unsigned long long)arg1;
- (void)deleteAllLocalBankInformation;
- (id)_bankAccountInformationInKeychain;
- (void)_writeBankAccountInformationToKeychain;

@end
