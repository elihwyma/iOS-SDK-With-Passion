/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOperation.h>

@class NSArray, NSMutableArray;

@interface NSBlockOperation : NSOperation

{
    NSMutableArray *_executionBlocks;
    CDUnknownBlockType _block;
}

@property (copy, readonly) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
