/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSURLAction, AMSURLRequestProperties, AMSURLSession, NSError, NSMutableData, NSMutableDictionary, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSURLTaskInfo : NSObject

{
    NSMutableData *_data;
    NSError *_error;
    NSURLSessionTaskMetrics *_metrics;
    AMSURLRequestProperties *_properties;
    AMSURLAction *_receivedAction;
    NSURLResponse *_response;
    long long _retryCount;
    AMSURLSession *_session;
    NSURLSessionTask *_task;
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSMutableDictionary *_userInfo;
    CDUnknownBlockType _completionBlock;
}

@property (retain, nonatomic) NSMutableData *data;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (retain, nonatomic) AMSURLRequestProperties *properties;
@property (retain, nonatomic) AMSURLAction *receivedAction;
@property (retain, nonatomic) NSURLResponse *response;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic, readonly) NSMutableDictionary *userInfo;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

+ (id)sharedTaskQueue;
+ (id)sharedTaskStore;
+ (id)taskInfoForTask:(id)arg1;
+ (id)createTaskInfoForTask:(id)arg1;
+ (void)removeTaskInfoForTask:(id)arg1;

- (id)initWithTask:(id)arg1;
- (void)migrateFromTaskInfo:(id)arg1;

@end
