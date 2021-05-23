/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class NSArray, NSThread, NSURLSessionDataTask;

@protocol NSURLSessionDataDelegate;

@interface ADNSURLSessionTaskInfo : NSObject

{
    NSURLSessionDataTask *_task;
    id <NSURLSessionDataDelegate> _delegate;
    NSThread *_thread;
    NSArray *_modes;
}

@property (retain) NSThread *thread;
@property (copy) NSArray *modes;
@property (readonly) NSURLSessionDataTask *task;
@property (weak) id <NSURLSessionDataDelegate> delegate;

- (void)invalidate;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)perform:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)performBlockOnClientThread:(CDUnknownBlockType)arg1;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 modes:(id)arg3;

@end
