/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@interface PKPeerPaymentDocumentSubmissionResponse : PKPeerPaymentWebServiceResponse

{
    unsigned long long _status;
}

@property (nonatomic, readonly) unsigned long long status;

- (id)initWithData:(id)arg1;

@end
