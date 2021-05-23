/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSOperation.h>

@interface SCKAsyncBlockOperation : NSOperation

{
    _Bool _executing;
    _Bool _finished;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType block;

- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
