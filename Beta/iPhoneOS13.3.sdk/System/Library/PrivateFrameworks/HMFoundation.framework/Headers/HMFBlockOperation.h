/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFOperation.h>

@class NSArray;

@interface HMFBlockOperation : HMFOperation

{
    NSArray *_executionBlocks;
}

@property (copy, readonly) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;

- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (id)initWithTimeout:(double)arg1;

@end
