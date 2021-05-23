/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSString;

@protocol OS_dispatch_semaphore;

@interface FinalXPauseResumeDataDownloadDelegate : NSObject <Swift>

{
    long long sizeOfEntity;
    long long sizeDownloadedAtFinish;
    NSObject<OS_dispatch_semaphore> *_wait;
    _Bool result;
    long long _totalBytesWritten;
}

@property (nonatomic) long long totalBytesWritten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (id)getWaiter;
- (long long)getSizeOfEntity;
- (_Bool)didTestPass;
- (long long)getSizeDownloadedAtFinish;

@end
