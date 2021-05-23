/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest

{
    _Bool _includeMetadata;
    NSString *_productIdentifier;
    long long _credentialType;
}

@property (nonatomic) _Bool includeMetadata;
@property (nonatomic) NSString *productIdentifier;
@property (nonatomic) long long credentialType;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
