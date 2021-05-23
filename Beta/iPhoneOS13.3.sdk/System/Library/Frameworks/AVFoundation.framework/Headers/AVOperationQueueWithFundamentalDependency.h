/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSOperationQueue.h>

@class NSOperation;

@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue

{
    NSOperation *_fundamentalOperation;
}

- (void)dealloc;
- (void)addOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (id)initWithFundamentalOperation:(id)arg1;

@end
