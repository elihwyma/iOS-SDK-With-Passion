/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@interface WLAuthenticationCredentials : NSObject

{
    struct __SecKey *_privateKey;
    struct __SecKey *_publicKey;
    struct __SecCertificate *_localCertificate;
    struct __SecCertificate *_remoteCertificate;
}

@property (nonatomic) struct __SecKey *privateKey;
@property (nonatomic) struct __SecKey *publicKey;
@property (nonatomic) struct __SecCertificate *localCertificate;
@property (nonatomic) struct __SecCertificate *remoteCertificate;

+ (id)generateAuthenticationCredentialsContainingSelfSignedCertificate;

@end
