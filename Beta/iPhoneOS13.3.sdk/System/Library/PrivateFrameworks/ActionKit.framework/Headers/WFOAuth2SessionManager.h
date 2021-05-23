/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSURLSession;

@interface WFOAuth2SessionManager : NSObject

{
    NSURL *_tokenURL;
    NSURL *_authorizationURL;
    NSString *_clientID;
    NSString *_clientSecret;
    NSString *_authenticationMethod;
    NSURLSession *_session;
}

@property (nonatomic, readonly) NSURLSession *session;
@property (copy, nonatomic, readonly) NSURL *tokenURL;
@property (copy, nonatomic, readonly) NSURL *authorizationURL;
@property (copy, nonatomic, readonly) NSString *clientID;
@property (copy, nonatomic, readonly) NSString *clientSecret;
@property (nonatomic, readonly) NSString *authenticationMethod;

+ (id)combinedScopeFromScopes:(id)arg1;

- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)authorizationSessionWithResponseType:(id)arg1 scopes:(id)arg2 redirectURI:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithSessionConfiguration:(id)arg1 tokenURL:(id)arg2 authorizationURL:(id)arg3 authenticationMethod:(id)arg4 clientID:(id)arg5 clientSecret:(id)arg6;
- (void)authenticateWithScopes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2 scopes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateWithCode:(id)arg1 redirectURI:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateWithRefreshCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateWithRequest:(id)arg1 refreshToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)authorizationSessionWithAuthorizationURL:(id)arg1 responseType:(id)arg2 scopes:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;

@end
