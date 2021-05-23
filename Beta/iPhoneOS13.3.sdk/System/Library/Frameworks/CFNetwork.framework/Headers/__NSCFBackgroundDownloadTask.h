/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask

{
    _Bool _finished;
}

@property _Bool finished;

- (_Bool)isKindOfClass:(Class)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_didResumeAtOffset:(long long)arg1 expectedTotalBytes:(long long)arg2;
- (void)_onqueue_didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)_onqueue_didFinishDownloadingToURL:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1;

@end
