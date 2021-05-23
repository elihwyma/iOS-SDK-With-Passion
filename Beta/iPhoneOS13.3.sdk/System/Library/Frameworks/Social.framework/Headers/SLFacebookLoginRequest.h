/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLFacebookRequest.h>

@class ACAccount;

@interface SLFacebookLoginRequest : SLFacebookRequest

{
    ACAccount *_account;
}

- (id)initWithAccount:(id)arg1;
- (void)preflightRequest;
- (id)_tokenSecret;

@end
