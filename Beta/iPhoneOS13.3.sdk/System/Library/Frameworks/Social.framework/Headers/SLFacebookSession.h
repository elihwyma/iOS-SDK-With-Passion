/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@protocol SLFacebookRemoteSessionProtocol;

@interface SLFacebookSession : NSObject

{
    id <SLFacebookRemoteSessionProtocol> _remoteSession;
}

+ (id)_remoteInterface;
+ (id)sharedSession;

- (id)init;
- (_Bool)uploadPost:(id)arg1 forPID:(int)arg2;
- (void)injectCompletedUploadWithCompletion:(CDUnknownBlockType)arg1;
- (void)uploadPost:(id)arg1 suppressAlerts:(_Bool)arg2 withPostCompletion:(CDUnknownBlockType)arg3;
- (void)uploadsInProgress:(CDUnknownBlockType)arg1;
- (void)cancelUploadWithIdentifier:(id)arg1;
- (void)revokeAccessTokenForAppWithID:(id)arg1;
- (void)likeURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlikeURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tokenSecretForEntitledClientWithError:(id *)arg1;
- (void)testCall;
- (_Bool)uploadPost:(id)arg1;
- (void)revokeAllAccessTokensForDevice;
- (_Bool)uploadProfilePicture:(id)arg1 error:(id *)arg2;

@end
