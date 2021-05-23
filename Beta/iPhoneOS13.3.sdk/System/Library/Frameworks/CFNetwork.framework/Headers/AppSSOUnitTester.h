/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURLResponse, NSURLSession, NSURLSessionConfiguration;

@protocol OS_dispatch_semaphore;

@interface AppSSOUnitTester : NSObject <Swift>

{
    _Bool _takeRedirect;
    _Bool _receivedChallenge;
    _Bool _doNotProvideCreds;
    NSHTTPURLResponse *_redirectResponse;
    NSError *_completionError;
    NSURLResponse *_response;
    NSMutableData *_responseData;
    NSURLSession *_session;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSURLSessionConfiguration *_config;
}

@property _Bool takeRedirect;
@property _Bool receivedChallenge;
@property _Bool doNotProvideCreds;
@property (copy) NSHTTPURLResponse *redirectResponse;
@property (copy) NSError *completionError;
@property (copy) NSURLResponse *response;
@property (retain) NSMutableData *responseData;
@property (copy) NSURLSession *session;
@property (copy) NSObject<OS_dispatch_semaphore> *sema;
@property (copy, nonatomic) NSURLSessionConfiguration *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startTaskWithSemaphore:(id)arg1 request:(id)arg2;
- (void)setconfig:(id)arg1;

@end
