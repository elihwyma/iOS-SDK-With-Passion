/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLSession;

@protocol OS_dispatch_workloop;

@interface TransparencyLogSession : NSObject

{
    unsigned long long _fetchCount;
    unsigned long long _downloadCount;
    NSURLSession *_backgroundSession;
    NSURLSession *_foregroundSession;
    NSObject<OS_dispatch_workloop> *_workloop;
}

@property (retain) NSURLSession *backgroundSession;
@property (retain) NSURLSession *foregroundSession;
@property (retain) NSObject<OS_dispatch_workloop> *workloop;
@property unsigned long long fetchCount;
@property unsigned long long downloadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requestIdentifier:(id)arg1;
+ (id)requestDownloadFilename:(id)arg1;
+ (id)requestDownloadLocation:(id)arg1 error:(id *)arg2;

- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)fetch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)download:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createAuthenticatedForegroundSession;
- (id)createErrorFromURLResonse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)initWithWorkloop:(id)arg1;

@end
