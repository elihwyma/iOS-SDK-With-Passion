/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject

{
    NSOperationQueue *_serialOperationQueue;
}

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (getter=isSuspended) _Bool suspended;

- (id)init;
- (void)enqueueBlock:(CDUnknownBlockType)arg1;
- (void)waitUntilEmpty;

@end
