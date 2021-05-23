/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class ASWebAuthenticationSession, NSString, NSURL, WFOAuth2SessionManager;

@interface WFOAuth2WebAuthorizationSession : NSObject

{
    ASWebAuthenticationSession *_authenticationSession;
    NSURL *_authorizationURL;
    NSURL *_redirectURI;
    WFOAuth2SessionManager *_sessionManager;
    NSString *_responseType;
    NSString *_state;
    CDUnknownBlockType _completionHandler;
    NSString *_responseKey;
}

@property (nonatomic, readonly) WFOAuth2SessionManager *sessionManager;
@property (copy, nonatomic, readonly) NSString *responseType;
@property (nonatomic, readonly) NSString *state;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) NSString *responseKey;
@property (copy, nonatomic, readonly) NSURL *authorizationURL;
@property (copy, nonatomic, readonly) NSURL *redirectURI;
@property (nonatomic, readonly) ASWebAuthenticationSession *authenticationSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)resumeSessionWithURL:(id)arg1;
- (id)initWithSessionManager:(id)arg1 authorizationURL:(id)arg2 responseType:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (_Bool)resumeSessionWithResponseObject:(id)arg1;

@end
