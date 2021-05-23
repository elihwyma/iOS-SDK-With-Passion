/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSArray, NSData, NSString;

@interface IDSAuthenticationSigningResult : NSObject

{
    NSArray *_authenticationCertificateSignatures;
    NSData *_inputData;
    NSData *_nonce;
}

@property (nonatomic, readonly) NSString *serverVerifiableEncoding;
@property (nonatomic, readonly) NSArray *authenticationCertificateSignatures;
@property (nonatomic, readonly) NSData *inputData;
@property (nonatomic, readonly) NSData *nonce;

- (id)description;
- (id)initWithSubscriptionIdentifiers:(id)arg1 authenticationCertificates:(id)arg2 inputData:(id)arg3 nonce:(id)arg4 signature:(id)arg5;

@end
