/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEProfilePayloadBase.h>

@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase

{
    _Bool _userNameRequired;
    _Bool _passwordRequired;
    _Bool _proxyUserNameRequired;
    _Bool _proxyPasswordRequired;
    _Bool _sharedSecretRequired;
    _Bool _pinRequired;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}

@property (nonatomic) _Bool userNameRequired;
@property (nonatomic) _Bool passwordRequired;
@property (nonatomic) _Bool proxyUserNameRequired;
@property (nonatomic) _Bool proxyPasswordRequired;
@property (nonatomic) _Bool sharedSecretRequired;
@property (nonatomic) _Bool pinRequired;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *proxyUserName;
@property (copy, nonatomic) NSString *proxyPassword;
@property (copy, nonatomic) NSString *sharedSecret;
@property (copy, nonatomic) NSString *pin;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPayload:(id)arg1;
- (id)validatePayload;
- (id)getPreprocessedPayloadContents;
- (_Bool)setPostprocessedPayloadContents:(id)arg1;
- (void)extractPayloadContentsHTTPProxy:(id)arg1;
- (void)extractPayloadContentsUserNamePassword:(id)arg1;
- (void)extractPayloadContentsSharedSecret:(id)arg1;
- (void)extractPayloadContentsPIN:(id)arg1;
- (void)extractPayloadContents:(id)arg1;

@end
