/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/ISDialogOperation.h>

@class ISAuthenticationChallenge, NSURLCredential;

@interface ISAuthenticationChallengeOperation : ISDialogOperation

{
    ISAuthenticationChallenge *_challenge;
    NSURLCredential *_credential;
}

@property (retain) NSURLCredential *credential;
@property (retain) ISAuthenticationChallenge *challenge;

+ (id)operationWithChallenge:(id)arg1;

- (void)dealloc;
- (void)run;
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;
- (id)_copyCredentialForSignInResponseDictionary:(id)arg1;

@end
