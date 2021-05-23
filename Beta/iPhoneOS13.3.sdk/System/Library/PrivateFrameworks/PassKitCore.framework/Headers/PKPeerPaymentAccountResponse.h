/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentAccount;

@interface PKPeerPaymentAccountResponse : PKPeerPaymentWebServiceResponse

{
    PKPeerPaymentAccount *_account;
}

@property (nonatomic, readonly) PKPeerPaymentAccount *account;

- (id)initWithData:(id)arg1;

@end
