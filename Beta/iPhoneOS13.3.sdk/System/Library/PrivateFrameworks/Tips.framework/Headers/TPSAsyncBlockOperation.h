/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSOperation.h>

@interface TPSAsyncBlockOperation : NSOperation

{
    _Bool _isExecuting;
    _Bool _isFinished;
    CDUnknownBlockType _asyncBlock;
}

@property (nonatomic) _Bool isExecuting;
@property (nonatomic) _Bool isFinished;
@property (copy, nonatomic) CDUnknownBlockType asyncBlock;

+ (id)asyncBlockOperationWithAsyncBlock:(CDUnknownBlockType)arg1;

- (void)start;
- (void)complete;
- (id)initWithAsyncBlock:(CDUnknownBlockType)arg1;

@end
