/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSString;

@protocol OS_dispatch_semaphore;

@interface MultiplePauseResumeDataDownloadDelegate : NSObject <Swift>

{
    _Bool _expectDirectory;
    _Bool _deleteTempFileOnce;
    _Bool _expectZeroOffestResume;
    long long _sizeOfEntity;
    NSObject<OS_dispatch_semaphore> *_wait;
    _Bool _retryingWithResumeData;
    _Bool _result;
    long long _totalBytesWritten;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (id)getWaiter;
- (id)initExpectingDirectory:(_Bool)arg1 deleteTempFileOnce:(_Bool)arg2;
- (long long)getSizeOfEntity;
- (_Bool)isExpectingDirectory;
- (_Bool)isRetryingWithResumeData;
- (_Bool)didTestPass;

@end
