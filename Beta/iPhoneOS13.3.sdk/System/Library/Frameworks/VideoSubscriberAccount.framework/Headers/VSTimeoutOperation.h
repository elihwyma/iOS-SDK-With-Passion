/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperation, NSOperationQueue;

@interface VSTimeoutOperation : VSAsyncOperation

{
    NSOperation *_operation;
    double _timeout;
    NSOperationQueue *_privateQueue;
}

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (nonatomic, readonly) NSOperation *operation;
@property (nonatomic, readonly) double timeout;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithOperation:(id)arg1 timeout:(double)arg2;

@end
