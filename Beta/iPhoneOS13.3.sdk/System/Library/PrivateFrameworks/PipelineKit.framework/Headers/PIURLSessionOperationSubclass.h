/*
 Image: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
 */

#import <PipelineKit/PIOperationSubclass.h>

#import <PipelineKit/Swift-Protocol.h>

@class NSString, NSURL, NSURLSession, NSURLSessionConfiguration, NSURLSessionTask;

@interface PIURLSessionOperationSubclass : PIOperationSubclass <Swift>

{
    NSURL *_url;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSURLSession *_session;
    NSURLSessionTask *_sessionTask;
}

@property (copy, nonatomic, readonly) NSURL *url;
@property (retain, nonatomic, readonly) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *sessionTask;
@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultConfiguration;
+ (id)noCacheConfiguration;

- (void)cancel;
- (void)cleanup;
- (void)execute;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)initWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
