/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class C2RequestOptions, NSString, NSURLSessionDataTask;

@protocol C2RequestDelegate, C2SessionTaskDelegate, OS_os_activity;

@interface C2SessionTask : NSObject

{
    _Bool _isComplete;
    unsigned int _attemptCount;
    C2RequestOptions *_options;
    id <C2RequestDelegate> _delegate;
    NSObject<OS_os_activity> *_activity;
    NSURLSessionDataTask *_task;
    id <C2SessionTaskDelegate> _sessionTaskDelegate;
    double _initTime;
    double _resetTime;
}

@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (nonatomic) _Bool isComplete;
@property (retain, nonatomic) id <C2SessionTaskDelegate> sessionTaskDelegate;
@property (nonatomic) double initTime;
@property (nonatomic) double resetTime;
@property (nonatomic) unsigned int attemptCount;
@property (copy, nonatomic, readonly) C2RequestOptions *options;
@property (nonatomic, readonly) id <C2RequestDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)captureMetricsForTimingData:(id)arg1 withKey:(id)arg2;
+ (double)captureMetricDurationBetweenStart:(double)arg1 andEnd:(double)arg2;

- (void)dealloc;
- (void)invalidate;
- (id)taskDescription;
- (void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2 sessionTaskDelegate:(id)arg3;
- (void)handleCallbackForTask:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)captureMetricsWithError:(id)arg1 eventType:(long long)arg2;

@end
