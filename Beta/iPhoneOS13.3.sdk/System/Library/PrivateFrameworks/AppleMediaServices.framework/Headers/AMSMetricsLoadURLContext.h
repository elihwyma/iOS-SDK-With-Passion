/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSProcessInfo, NSData, NSDictionary, NSError, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;

@protocol AMSBagProtocol;

@interface AMSMetricsLoadURLContext : NSObject

{
    id <AMSBagProtocol> _bag;
    NSError *_error;
    AMSProcessInfo *_processInfo;
    NSData *_responseBody;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    NSURLSessionTaskMetrics *_taskMetrics;
    NSDictionary *_decodedResponseBody;
}

@property (retain, nonatomic) NSDictionary *decodedResponseBody;
@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AMSProcessInfo *processInfo;
@property (retain, nonatomic) NSData *responseBody;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics;

- (id)bagContract;
- (void)setBagContract:(id)arg1;
- (id)initWithTaskInfo:(id)arg1 serverPayload:(id)arg2;
- (id)initWithTask:(id)arg1 metrics:(id)arg2;

@end
