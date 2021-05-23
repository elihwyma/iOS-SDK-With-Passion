/*
 Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

#import <DAEASOAuthFramework/DAEASOAuthFlowController.h>

@class NSString;

@interface DAExchangeOAuthFlowController : DAEASOAuthFlowController

{
    NSString *_redirectURI;
    NSString *_easEndPoint;
}

@property (copy, nonatomic) NSString *easEndPoint;
@property (copy, nonatomic) NSString *redirectURI;

- (id)_accountDescription;
- (id)authURLForUsername:(id)arg1;
- (id)initialRedirectURL;
- (void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(CDUnknownBlockType)arg2;
- (id)_urlRequestForOAuthTokenFromAuthCode:(id)arg1;
- (id)initWithAuthURI:(id)arg1 easEndPoint:(id)arg2 username:(id)arg3;
- (void)exchangeAuthCode:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
