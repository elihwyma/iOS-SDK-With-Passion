/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSData, NSString, NSURL, PKAccountPaymentScheduleDetails, PKAccountScheduledPaymentList, PKAccountWebServiceCertificatesResponse, PKApplePayTrustHashResponse, PKPaymentDeviceMetadata;

@interface PKAccountWebServiceSchedulePaymentRequest : PKAccountWebServiceRequest

{
    NSURL *baseURL;
    PKApplePayTrustHashResponse *hashResponse;
    NSData *_publicKeyHash;
    PKAccountScheduledPaymentList *_scheduledPayments;
    PKAccountPaymentScheduleDetails *_scheduleDetails;
    NSString *_accountIdentifier;
    PKAccountWebServiceCertificatesResponse *_certificatesResponse;
    PKPaymentDeviceMetadata *_deviceMetadata;
}

@property (retain, nonatomic) PKAccountScheduledPaymentList *scheduledPayments;
@property (retain, nonatomic) PKAccountPaymentScheduleDetails *scheduleDetails;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *publicKeyHash;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)manifestHashWithReferenceIdentifier:(id)arg1;
- (Class)signatureResponseClass;
- (id)endpointComponents;

@end
