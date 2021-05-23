/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class C2MetricOptions, C2RequestOptions, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface C2ReportMetrics : NSObject

{
    _Bool _ignoreRequestThrottle;
    NSString *_requestThrottleIdentifier;
    unsigned long long _requestThrottleLimit;
    NSMutableURLRequest *_metricRequest;
    C2RequestOptions *_metricsTransportRequestOptions;
    NSURLSessionTask *_metricTask;
    C2MetricOptions *_metricOptions;
    CDUnknownBlockType _testBehavior_tooManyTasksRunning;
    CDUnknownBlockType _testBehavior_didCompleteWithError;
}

@property (nonatomic) _Bool ignoreRequestThrottle;
@property (retain, nonatomic) NSString *requestThrottleIdentifier;
@property (nonatomic) unsigned long long requestThrottleLimit;
@property (retain, nonatomic) NSMutableURLRequest *metricRequest;
@property (retain, nonatomic) C2RequestOptions *metricsTransportRequestOptions;
@property (retain, nonatomic) NSURLSessionTask *metricTask;
@property (retain, nonatomic) C2MetricOptions *metricOptions;
@property (copy, nonatomic) CDUnknownBlockType testBehavior_tooManyTasksRunning;
@property (copy, nonatomic) CDUnknownBlockType testBehavior_didCompleteWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)reportMetricWithOptions:(id)arg1 genericMetricType:(long long)arg2 eventName:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 attributes:(id)arg6;
+ (id)gzipEncode:(id)arg1;
+ (void)_reportWithOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4;
+ (id)requestForMetricRequestOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4;
+ (void)reportNetworkEvent:(id)arg1 triggers:(int)arg2 originalSessionTask:(id)arg3;

- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)send;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (id)initWithMetricRequest:(id)arg1 metricRequestOptions:(id)arg2 ignoreRequestThrottle:(_Bool)arg3 requestThrottleIdentifier:(id)arg4 requestThrottleLimit:(unsigned long long)arg5;

@end
