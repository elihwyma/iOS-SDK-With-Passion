/*
 Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAEASOAuthFlowController : NSObject

{
    CDUnknownBlockType _completion;
    unsigned long long _oauthType;
    NSString *_oauthURI;
    NSString *_tokenRequestURI;
    NSString *_username;
}

@property (nonatomic) unsigned long long oauthType;
@property (copy, nonatomic) NSString *oauthURI;
@property (retain, nonatomic) NSString *tokenRequestURI;
@property (copy, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_accountDescription;
- (void)setAuthFlowCompletion:(CDUnknownBlockType)arg1;
- (id)authURLForUsername:(id)arg1;
- (id)requestForAuthURL:(id)arg1;
- (id)initialRedirectURL;
- (_Bool)shouldHideWebViewForLoadWithRequest:(id)arg1;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(CDUnknownBlockType)arg1;
- (void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(CDUnknownBlockType)arg2;
- (void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(CDUnknownBlockType)arg2;
- (id)_urlRequestForOAuthTokenFromAuthCode:(id)arg1;
- (id)initWithOAuthType:(unsigned long long)arg1 authURI:(id)arg2 username:(id)arg3;

@end
