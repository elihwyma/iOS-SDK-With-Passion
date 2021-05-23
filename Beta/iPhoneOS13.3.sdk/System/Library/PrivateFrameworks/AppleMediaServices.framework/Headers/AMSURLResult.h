/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

@interface AMSURLResult : NSObject

{
    NSData *_data;
    NSString *_logUUID;
    NSURLSessionTaskMetrics *_taskMetrics;
    NSURLResponse *_response;
    NSURLSessionTask *_task;
    id _object;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *logUUID;
@property (nonatomic, readonly) NSURLSessionTaskMetrics *taskMetrics;
@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (retain, nonatomic) id object;
@property (nonatomic, readonly) NSString *responseCorrelationId;
@property (nonatomic, readonly) long long responseStatusCode;
@property (nonatomic, readonly) NSDictionary *responseHeaders;

- (id)initWithResult:(id)arg1;
- (id)initWithTaskInfo:(id)arg1 object:(id)arg2;
- (id)initWithTask:(id)arg1 response:(id)arg2 data:(id)arg3 object:(id)arg4;

@end
