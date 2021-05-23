/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSOperation.h>

@interface FCAsyncBlockOperation : NSOperation

{
    _Bool _executing;
    _Bool _finished;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType block;

+ (id)asyncBlockOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)asyncBlockOperationWithMainThreadBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
