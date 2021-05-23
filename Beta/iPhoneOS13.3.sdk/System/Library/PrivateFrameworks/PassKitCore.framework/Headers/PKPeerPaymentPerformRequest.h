/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSData, NSDictionary, NSString, PKContact;

@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest

{
    NSString *_quoteIdentifier;
    NSData *_paymentData;
    NSDictionary *_certificates;
    NSString *_recipientPhoneOrEmail;
    PKContact *_contact;
    NSString *_routingNumber;
    NSString *_accountNumber;
    NSString *_pushToken;
    NSData *_signedEnrollmentDataSignature;
}

@property (copy, nonatomic) NSString *quoteIdentifier;
@property (copy, nonatomic) NSData *paymentData;
@property (copy, nonatomic) NSDictionary *certificates;
@property (copy, nonatomic) NSString *recipientPhoneOrEmail;
@property (retain, nonatomic) PKContact *contact;
@property (retain, nonatomic) NSString *routingNumber;
@property (retain, nonatomic) NSString *accountNumber;
@property (copy, nonatomic) NSString *pushToken;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;

+ (id)requestWithAuthorizedPeerPaymentQuote:(id)arg1;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;

@end
