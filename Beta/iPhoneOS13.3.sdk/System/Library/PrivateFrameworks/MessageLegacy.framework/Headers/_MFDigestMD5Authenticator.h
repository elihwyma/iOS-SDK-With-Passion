/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

@class NSData;

@interface _MFDigestMD5Authenticator

{
    unsigned int _maxbuf:16;
    unsigned int _securityLevel:2;
    NSData *_expectedResponse;
    void *_cryptInfo;
}

- (void)dealloc;
- (int)securityLevel;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(int)arg1;
- (void)setSecurityLevel:(int)arg1;
- (void)setMaxBuffer:(unsigned int)arg1;
- (void)setCryptInfo:(void *)arg1;
- (void)setExpectedResponse:(id)arg1;

@end
