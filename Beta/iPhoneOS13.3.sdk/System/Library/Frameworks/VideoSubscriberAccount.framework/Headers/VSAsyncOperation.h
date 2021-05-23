/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSOperation.h>

@interface VSAsyncOperation : NSOperation

{
    int _state;
}

- (void)cancel;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)finishExecutionIfPossible;
- (void)executionDidBegin;

@end
