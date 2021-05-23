/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceVirtualCardLegacyCredentialsRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSString *_virtualCardIdentifier;
    PKAccountVirtualCardEncryptionFields *_encryptionFields;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *virtualCardIdentifier;
@property (retain, nonatomic) PKAccountVirtualCardEncryptionFields *encryptionFields;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
