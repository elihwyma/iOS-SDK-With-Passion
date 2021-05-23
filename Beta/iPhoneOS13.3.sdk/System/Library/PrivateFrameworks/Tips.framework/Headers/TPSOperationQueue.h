/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSOperationQueue.h>

@class TPSOperationQueueCountObserver;

@interface TPSOperationQueue : NSOperationQueue

{
    TPSOperationQueueCountObserver *_observer;
}

@property (retain, nonatomic) TPSOperationQueueCountObserver *observer;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

- (void)addOperationWithAsyncBlock:(CDUnknownBlockType)arg1;

@end
