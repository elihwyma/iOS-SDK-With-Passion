/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentRecipient;

@interface PKPeerPaymentRecipientResponse : PKPeerPaymentWebServiceResponse

{
    PKPeerPaymentRecipient *_recipient;
}

@property (nonatomic, readonly) PKPeerPaymentRecipient *recipient;

- (id)initWithData:(id)arg1;

@end
