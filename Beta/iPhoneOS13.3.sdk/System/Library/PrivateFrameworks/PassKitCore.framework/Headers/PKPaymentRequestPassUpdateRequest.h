/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPassUpgradeRequest, PKPaymentPass;

@interface PKPaymentRequestPassUpdateRequest : PKPaymentWebServiceRequest

{
    PKPaymentPass *_pass;
    PKPassUpgradeRequest *_request;
}

@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPassUpgradeRequest *request;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithPaymentPass:(id)arg1 updateRequest:(id)arg2;

@end
