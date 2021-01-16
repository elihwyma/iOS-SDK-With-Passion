//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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
    id /* CDUnknownBlockType */ _completionBlock;
}

+ (id)sharedTaskQueue;
+ (id)sharedTaskStore;
+ (void)removeTaskInfoForTask:(id)arg1;
+ (id)createTaskInfoForTask:(id)arg1;
+ (id)taskInfoForTask:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) AMSURLAction *receivedAction; // @synthesize receivedAction=_receivedAction;
@property(retain, nonatomic) AMSURLRequestProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (void)migrateFromTaskInfo:(id)arg1;
- (id)initWithTask:(id)arg1;

@end
