/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <ProactiveEventTracker/Swift-Protocol.h>

@protocol PETReservoirSamplingLogStore <Swift>

- (unsigned short)lock;
- (unsigned short)unlock;
- (unsigned short)currentLength;
- (unsigned short)remap: /* Error: Ran out of types for this method. */;
- (unsigned short)headerMap: /* Error: Ran out of types for this method. */;
- (unsigned short)changeLength: /* Error: Ran out of types for this method. */;
- (unsigned short)appendData:andReturnMapPointer: /* Error: Ran out of types for this method. */;
- (unsigned short)attemptToRecreate;

@end
