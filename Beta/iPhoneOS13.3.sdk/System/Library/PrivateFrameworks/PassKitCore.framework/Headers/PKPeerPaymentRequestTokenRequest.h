/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSDecimalNumber, NSString;

@interface PKPeerPaymentRequestTokenRequest : PKPeerPaymentWebServiceRequest

{
    NSString *_recipientIdentifier;
    NSDecimalNumber *_amount;
    NSString *_currency;
    NSString *_senderAddress;
    NSString *_recipientPhoneOrEmail;
}

@property (copy, nonatomic) NSString *recipientIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSString *recipientPhoneOrEmail;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;

@end
