/*
 Image: /System/Library/PrivateFrameworks/AppleIDAuthSupport.framework/AppleIDAuthSupport
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableData, NSMutableURLRequest, NSString, NSURLSession, NSURLSessionDataTask;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AIASRequest : NSObject

{
    _Bool _done;
    _Bool _success;
    NSMutableURLRequest *_URLRequest;
    NSMutableData *_data;
    struct __AppleIDAuthSupportData *_context;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    NSError *_error;
    NSString *_networkTaskDescription;
}

@property (retain) NSMutableURLRequest *URLRequest;
@property (retain) NSMutableData *data;
@property _Bool done;
@property _Bool success;
@property struct __AppleIDAuthSupportData *context;
@property (retain) NSObject<OS_dispatch_semaphore> *sema;
@property (retain) NSURLSession *session;
@property (retain) NSURLSessionDataTask *task;
@property (retain) NSError *error;
@property (retain) NSString *networkTaskDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)resume;
- (id)initWithURL:(id)arg1 data:(struct __CFDictionary *)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5 appleITeamId:(id)arg6 appleIClientId:(id)arg7;

@end
