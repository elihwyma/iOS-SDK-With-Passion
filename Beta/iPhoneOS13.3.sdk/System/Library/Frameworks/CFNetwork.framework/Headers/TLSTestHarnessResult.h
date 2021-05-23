/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSError, NSHTTPURLResponse, NSMutableData, NSURLSessionTask;

@protocol OS_dispatch_semaphore;

@interface TLSTestHarnessResult : NSObject

{
    NSURLSessionTask *_task;
    NSHTTPURLResponse *_response;
    NSMutableData *_data;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_sema;
}

@property (retain) NSURLSessionTask *task;
@property (retain) NSHTTPURLResponse *response;
@property (retain) NSMutableData *data;
@property (retain) NSError *error;
@property (retain) NSObject<OS_dispatch_semaphore> *sema;

- (void)dealloc;
- (id)initWithTask:(id)arg1;
- (void)appendResponseData:(id)arg1;

@end
