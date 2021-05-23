/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, SLWebClient;

@interface SLWebTokenHandlerController : NSObject

{
    NSObject<OS_dispatch_queue> *_webClientQueue;
    id <SLWebClient> _webClient;
}

@property (readonly) id <SLWebClient> webClient;

+ (id)emailAddressFromIdToken:(id)arg1;

- (void)_fetchNamesForToken:(id)arg1 idToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_exchangeAuthCode:(id)arg1 usingRedirect:(id)arg2 codeVerifier:(id)arg3 forTokensWithCompletion:(CDUnknownBlockType)arg4;
- (void)_fetchNamesForToken:(id)arg1 usingFallbackURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithWebClient:(id)arg1;
- (void)exchangeAuthCode:(id)arg1 usingRedirect:(id)arg2 codeVerifier:(id)arg3 forTokensAndUsernameWithCompletion:(CDUnknownBlockType)arg4;

@end
