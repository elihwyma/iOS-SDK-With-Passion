/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/Swift-Protocol.h>

@protocol SLFacebookRemoteSessionProtocol <Swift>

- (unsigned short)tokenSecretForEntitledClientWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)doTestCallWithDict:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)injectCompletedUploadWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadPost:withXPCTransferCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadPost:forPID:withXPCTransferCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadPost:suppressAlerts:withPostCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadsInProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelUploadWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)revokeAccessTokenForAppWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)revokeAllAccessTokensForDeviceWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadProfileImageData:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)likeURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unlikeURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLikeStatusForURL:flags:completion: /* Error: Ran out of types for this method. */;

@end
