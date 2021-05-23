/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKAccountPaymentFundingSource, PKAccountWebServiceCertificatesResponse;

@interface PKAccountWebServiceAddFundingSourceRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    PKAccountPaymentFundingSource *_fundingSource;
    NSString *_fundingSourceTermsIdentifier;
    PKAccountWebServiceCertificatesResponse *_certificatesResponse;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource;
@property (retain, nonatomic) NSString *fundingSourceTermsIdentifier;
@property (retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
