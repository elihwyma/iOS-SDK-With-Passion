/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/Swift-Protocol.h>

@class AMSURLSession;

@protocol AMSURLHandling <Swift>

@property (weak, nonatomic) AMSURLSession *session;

- (unsigned short)reconfigureNewRequest:originalTask:redirect:error: /* Error: Ran out of types for this method. */;
- (unsigned short)handleResponse:task: /* Error: Ran out of types for this method. */;
- (unsigned short)decodeData:task:error: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCompletionWithTask:metrics:decodedObject: /* Error: Ran out of types for this method. */;
- (unsigned short)didCreateTask:fromRequest:error: /* Error: Ran out of types for this method. */;

@end
