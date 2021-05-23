/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKAccount, PKAccountWebServicePassDetailsResponse, PKPaymentPass;

@interface PKAccountCredential : PKPaymentCredential

{
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
    PKAccountWebServicePassDetailsResponse *_passDetailsResponse;
}

@property (nonatomic, readonly) PKAccount *account;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKAccountWebServicePassDetailsResponse *passDetailsResponse;
@property (copy, nonatomic, readonly) NSString *ownershipTokenIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccount:(id)arg1;
- (id)longDescription;
- (_Bool)_isEqualToCredential:(id)arg1;

@end
