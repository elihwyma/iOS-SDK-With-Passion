/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

#import <FileProviderDaemon/Swift-Protocol.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FPDActionOperationQueue : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _maxLength;
    NSMutableArray *_fifo;
    NSObject<OS_dispatch_semaphore> *_enqueueSema;
    NSObject<OS_dispatch_semaphore> *_dequeueSema;
    _Bool _finishedEnqueuing;
    _Bool _cancelled;
}

- (void)cancel;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (id)initWithMoveInfo:(id)arg1;
- (void)finishedEnqueuing;

@end
