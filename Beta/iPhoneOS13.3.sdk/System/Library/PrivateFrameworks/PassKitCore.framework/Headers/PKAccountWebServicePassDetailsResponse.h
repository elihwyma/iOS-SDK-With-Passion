/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray, NSString, NSURL, PKPaymentRemoteCredential;

@interface PKAccountWebServicePassDetailsResponse : PKAccountWebServiceResponse

{
    NSString *_provisioningIdentifier;
    long long _cardType;
    long long _status;
    NSURL *_passURL;
    NSString *_passTypeIdentifier;
    NSString *_passSerialNumber;
    NSString *_ownershipTokenIdentifier;
    NSArray *_postProvisioningContent;
    PKPaymentRemoteCredential *_remoteCredential;
}

@property (copy, nonatomic, readonly) NSString *provisioningIdentifier;
@property (nonatomic, readonly) long long cardType;
@property (nonatomic) long long status;
@property (copy, nonatomic, readonly) NSURL *passURL;
@property (copy, nonatomic, readonly) NSString *passTypeIdentifier;
@property (copy, nonatomic, readonly) NSString *passSerialNumber;
@property (copy, nonatomic, readonly) NSString *ownershipTokenIdentifier;
@property (nonatomic, readonly) NSArray *postProvisioningContent;
@property (retain, nonatomic) PKPaymentRemoteCredential *remoteCredential;

- (id)initWithData:(id)arg1;

@end
