/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFOAuth2SessionManager.h>

@class NSString;

@interface WFImgurOAuth2SessionManager : WFOAuth2SessionManager

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2;
- (id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;
- (id)authorizationSessionWithResponseType:(id)arg1 scopes:(id)arg2 redirectURI:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
