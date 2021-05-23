/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentRecipientRequest : PKPeerPaymentWebServiceRequest

{
    NSString *_recipientAddress;
    NSString *_senderAddress;
    unsigned long long _recipientAddressSource;
}

@property (copy, nonatomic) NSString *recipientAddress;
@property (copy, nonatomic) NSString *senderAddress;
@property (nonatomic) unsigned long long recipientAddressSource;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3;

@end
