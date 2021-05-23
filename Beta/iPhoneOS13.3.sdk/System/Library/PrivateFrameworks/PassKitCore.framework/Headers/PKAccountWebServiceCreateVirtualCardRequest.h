/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceCreateVirtualCardRequest : PKAccountWebServiceRequest <Swift>

{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    long long _type;
    PKAccountVirtualCardEncryptionFields *_encryptionFields;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) long long type;
@property (retain, nonatomic) PKAccountVirtualCardEncryptionFields *encryptionFields;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
