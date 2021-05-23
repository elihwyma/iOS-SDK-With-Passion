/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class NSArray, NSMutableArray, NSString, NSURLCredential, NSURLSession;

@interface CRKDownloadResourcesOperation : CATOperation

{
    NSURLCredential *mCredential;
    NSURLSession *mSession;
    NSArray *mDownloadTasks;
    NSMutableArray *mFileURLs;
    NSMutableArray *mCompletedUnitCounts;
    NSArray *_resources;
}

@property (copy, nonatomic, readonly) NSArray *resources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)run;
- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)operationWillFinish;
- (id)initWithResources:(id)arg1 clientIdentity:(id)arg2 trustedCertificates:(id)arg3;
- (void)cancelIfNeeded;
- (id)moveURLToNonEphemeralLocation:(id)arg1 withFileName:(id)arg2 error:(id *)arg3;
- (void)unzipOperationDidFinish:(id)arg1 forRequestURL:(id)arg2;
- (void)finalizeDownloadedItem:(id)arg1 forRequestURL:(id)arg2;
- (id)initWithResources:(id)arg1 clientIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;

@end
