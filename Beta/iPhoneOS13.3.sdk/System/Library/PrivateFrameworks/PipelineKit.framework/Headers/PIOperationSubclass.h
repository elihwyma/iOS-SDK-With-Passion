/*
 Image: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
 */

#import <PipelineKit/PIOperation.h>

@interface PIOperationSubclass : PIOperation

{
    CDUnknownBlockType _finishBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType finishBlock;

- (void)cancel;
- (void)cleanup;
- (void)execute;
- (void)_cleanup;
- (void)_didFinish;
- (CDUnknownBlockType)cancellationBlock;
- (CDUnknownBlockType)executionBlock;

@end
