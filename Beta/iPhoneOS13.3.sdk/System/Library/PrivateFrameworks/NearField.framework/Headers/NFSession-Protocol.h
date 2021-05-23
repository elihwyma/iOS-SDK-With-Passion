/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@protocol NFSession <Swift>

- (unsigned short)endSession;
- (unsigned short)isFirstInQueue;
- (unsigned short)endSessionWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)endSessionAndStartNextSession:completion: /* Error: Ran out of types for this method. */;

@end
