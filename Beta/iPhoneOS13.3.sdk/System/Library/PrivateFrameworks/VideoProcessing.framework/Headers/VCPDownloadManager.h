/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString, NSURLSession, NSURLSessionDataTask;

@protocol OS_dispatch_semaphore;

@interface VCPDownloadManager : NSObject

{
    NSObject<OS_dispatch_semaphore> *_mutex;
    NSMutableData *_buffer;
    NSURLSession *_session;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSURLSessionDataTask *_dataTask;
    CDUnknownBlockType _cancel;
}

@property (copy, nonatomic) CDUnknownBlockType cancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (unsigned long long)maxSizeBytes;

- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)flush;
- (id)requestDownloadFromURL:(id)arg1;
- (id)requestDownloadOfResource:(id)arg1;

@end
