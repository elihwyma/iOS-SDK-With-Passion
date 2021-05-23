/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/Swift-Protocol.h>

@protocol AFSiriActivationService <Swift>

- (unsigned short)prewarmWithRequestInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)activateWithRequestInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deactivateForReason:options:analyticsContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)handleContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)handleIntent:inBackgroundAppWithBundleId:reply: /* Error: Ran out of types for this method. */;

@end
