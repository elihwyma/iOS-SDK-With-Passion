/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@class NSError, NSHTTPURLResponse, NSHashTable, NSMutableData, NSString, NSURL, NSURLSessionTask;

@protocol OS_dispatch_queue, TPSURLSessionDelegate;

@interface TPSURLSessionTask : NSObject

{
    NSObject<OS_dispatch_queue> *_sessionTaskDelegateQueue;
    _Bool _cancelled;
    _Bool _isCacheData;
    struct TPSURLSessionDelegateResponds _delegateResponds;
    id <TPSURLSessionDelegate> _networkDelegate;
    unsigned long long _downloadTaskTotalBytes;
    long long _dataType;
    NSString *_identifier;
    id _formattedData;
    NSURLSessionTask *_task;
    NSHTTPURLResponse *_response;
    NSString *_lastModified;
    NSMutableData *_dataTaskData;
    NSError *_dataError;
    NSHashTable *_sessionTaskDelegates;
}

@property (retain, nonatomic) NSHashTable *sessionTaskDelegates;
@property (weak, nonatomic) id <TPSURLSessionDelegate> networkDelegate;
@property (nonatomic) struct TPSURLSessionDelegateResponds delegateResponds;
@property (nonatomic) float priority;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (nonatomic) _Bool isCacheData;
@property (nonatomic) unsigned long long downloadTaskTotalBytes;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id formattedData;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSString *lastModified;
@property (retain, nonatomic) NSMutableData *dataTaskData;
@property (retain, nonatomic) NSError *dataError;
@property (nonatomic, readonly) NSURL *URL;

+ (struct TPSURLSessionDelegateResponds)delegateRespondsWithDelegate:(id)arg1;

- (void)dealloc;
- (void)cancel;
- (void)resume;
- (void)didCompleteWithError:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)unregisterDelegate:(id)arg1;
- (id)initWithSessionTask:(id)arg1 identifier:(id)arg2;

@end
