/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKStreamingAsset, NSString, NSURLSessionDataTask;

@protocol OS_dispatch_queue, OS_os_activity;

@interface CKStreamingAssetAppendContext : NSObject

{
    _Bool _appending;
    _Bool _currentAppendCancelled;
    _Bool _fakeMissingUploadReceipt;
    CKStreamingAsset *_streamingAsset;
    NSObject<OS_dispatch_queue> *_appendQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _currentSegmentLength;
    NSURLSessionDataTask *_dataTask;
    NSString *_requestUUID;
    NSObject<OS_os_activity> *_osActivity;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) CKStreamingAsset *streamingAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appendQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, getter=isAppending) _Bool appending;
@property (nonatomic, getter=isCurrentAppendCancelled) _Bool currentAppendCancelled;
@property (nonatomic) unsigned long long currentSegmentLength;
@property (retain, nonatomic) NSURLSessionDataTask *dataTask;
@property (retain, nonatomic) NSString *requestUUID;
@property (retain, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool fakeMissingUploadReceipt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requestToAppendSegmentData:(id)arg1 uploadURL:(id)arg2 requestUUID:(id)arg3 offset:(unsigned long long)arg4;

- (id)init;
- (void)abort;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (_Bool)appendSegmentWithData:(id)arg1 newStreamingAsset:(id *)arg2 error:(id *)arg3;
- (void)appendSegmentWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithStreamingAsset:(id)arg1;
- (_Bool)appendSegmentWithData:(id)arg1 error:(id *)arg2;

@end
