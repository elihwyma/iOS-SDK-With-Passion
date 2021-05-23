/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (HMFoundation)

- (void)hmf_removeFirstObject;
- (id)hmf_dequeue;
- (id)hmf_maybeDequeue;
- (void)hmf_enqueue:(id)arg1;
- (void)hmf_enqueueMultiple:(id)arg1;

@end
