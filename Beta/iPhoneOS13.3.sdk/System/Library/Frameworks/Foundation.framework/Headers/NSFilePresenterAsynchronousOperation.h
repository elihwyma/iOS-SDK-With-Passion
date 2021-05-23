/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOperation.h>

__attribute__((visibility("hidden")))
@interface NSFilePresenterAsynchronousOperation : NSOperation

{
    CDUnknownBlockType _block;
    _Bool _isFinished;
    _Bool _isExecuting;
}

+ (id)operationWithBlock:(CDUnknownBlockType)arg1;

- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)finish;

@end
