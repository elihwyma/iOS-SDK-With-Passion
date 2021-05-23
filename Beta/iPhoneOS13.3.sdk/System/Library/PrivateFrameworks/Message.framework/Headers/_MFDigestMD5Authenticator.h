/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailCore/ECSASLAuthenticator.h>

@class NSData;

@interface _MFDigestMD5Authenticator : ECSASLAuthenticator

{
    unsigned int _maxbuf:16;
    unsigned int _securityLevel:2;
    NSData *_expectedResponse;
    void *_cryptInfo;
}

- (void)dealloc;
- (long long)securityLevel;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(long long)arg1;
- (void)setSecurityLevel:(long long)arg1;
- (void)setMaxBuffer:(unsigned int)arg1;
- (void)setCryptInfo:(void *)arg1;
- (void)setExpectedResponse:(id)arg1;

@end
