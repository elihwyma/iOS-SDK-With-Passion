/*
 Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

#import <BiometricSupport/Swift-Protocol.h>

@protocol BiometricKitDelegateXpcProtocol <Swift>

- (unsigned short)isDelegate;
- (unsigned short)enrollResult:client: /* Error: Ran out of types for this method. */;
- (unsigned short)enrollUpdate:client: /* Error: Ran out of types for this method. */;
- (unsigned short)enrollFeedback:client: /* Error: Ran out of types for this method. */;
- (unsigned short)matchResult:details:client: /* Error: Ran out of types for this method. */;
- (unsigned short)statusMessage:client: /* Error: Ran out of types for this method. */;
- (unsigned short)statusMessage:details:client: /* Error: Ran out of types for this method. */;
- (unsigned short)homeButtonPressed: /* Error: Ran out of types for this method. */;
- (unsigned short)touchIDButtonPressed:client: /* Error: Ran out of types for this method. */;
- (unsigned short)templateUpdate:details:client: /* Error: Ran out of types for this method. */;
- (unsigned short)taskResumeStatus:client: /* Error: Ran out of types for this method. */;

@end
