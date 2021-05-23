/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

#import <CoreUtils/Swift-Protocol.h>

@class NSString, NSURL, NSURLSession;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUReachabilityMonitor : NSObject <Swift>

{
    int _downloadStatus;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSURLSession *_urlSession;
    CDUnknownBlockType _completionHandler;
    NSURL *_destinationURL;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _timeout;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)activate;
- (void)_startDownload;
- (void)_complete:(id)arg1;

@end
