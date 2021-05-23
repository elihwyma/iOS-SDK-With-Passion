/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailCore/ECSASLAuthenticator.h>

@interface _MFNTLMAuthenticator : ECSASLAuthenticator

{
    struct NtlmGenerator *_ntlmGeneratorRef;
    int _ntlmError;
}

- (void)dealloc;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(long long)arg1;

@end
