/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest;

__attribute__((visibility("hidden")))
@interface WFDownloadURLTask : NSObject

{
    NSURLRequest *_request;
    CDUnknownBlockType _expectedByteCountHandler;
    CDUnknownBlockType _writtenByteCountHandler;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) NSURLRequest *request;
@property (copy, nonatomic) CDUnknownBlockType expectedByteCountHandler;
@property (copy, nonatomic) CDUnknownBlockType writtenByteCountHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)start;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (id)initWithRequest:(id)arg1;

@end
