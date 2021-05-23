/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICURLResponseAuthenticationProvider.h>

#import <iTunesCloud/Swift-Protocol.h>

@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <Swift>

+ (_Bool)supportsSecureCoding;

- (id)initWithUserInteractionLevel:(long long)arg1;
- (void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_performAuthenticationUsingRequestContext:(id)arg1 usingVerificationInteractionLevel:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_adjustedAuthenticationPolicyForResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
