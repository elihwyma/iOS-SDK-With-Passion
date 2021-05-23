/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

@interface _MFNTLMAuthenticator

{
    struct NtlmGenerator *_ntlmGeneratorRef;
    int _ntlmError;
}

- (void)dealloc;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(int)arg1;

@end
