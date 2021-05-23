/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceVirtualCardManageRequest : PKAccountWebServiceRequest <Swift>

{
    PKAccountVirtualCardEncryptionFields *_encryptionFields;
    long long _action;
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSString *_virtualCardIdentifier;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *virtualCardIdentifier;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (void)setAction:(long long)arg1 withQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
