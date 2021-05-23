/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSAuthenticationCertificate, NSData, NSString;

@interface IDSAuthenticationCertificateSignature : NSObject

{
    NSString *_subscriptionIdentifier;
    IDSAuthenticationCertificate *_authenticationCertificate;
    NSData *_signature;
    NSString *_serverVerifiableEncoding;
}

@property (nonatomic, readonly) NSString *subscriptionIdentifier;
@property (nonatomic, readonly) NSString *serverVerifiableEncoding;
@property (nonatomic, readonly) IDSAuthenticationCertificate *authenticationCertificate;
@property (nonatomic, readonly) NSData *signature;

- (id)description;
- (id)initWithSubscriptionIdentifier:(id)arg1 authenticationCertificate:(id)arg2 signature:(id)arg3 serverVerifiableEncoding:(id)arg4;

@end
