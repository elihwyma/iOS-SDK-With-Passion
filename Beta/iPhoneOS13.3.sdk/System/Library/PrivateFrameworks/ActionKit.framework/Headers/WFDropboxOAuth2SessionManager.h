/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFOAuth2SessionManager.h>

@class NSString;

@interface WFDropboxOAuth2SessionManager : WFOAuth2SessionManager

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2;
- (id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;
- (void)revokeCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)authorizationSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)appAuthorizationSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)authenticateWithLegacyAccessToken:(id)arg1 accessTokenSecret:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
