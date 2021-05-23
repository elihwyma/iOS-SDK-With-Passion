/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSMutableData, NSString, NSURL, NSURLSession;

@protocol OS_dispatch_semaphore;

@interface MCHTTPTransaction : NSObject

{
    NSURL *_requestURL;
    NSString *_method;
    double _timeout;
    NSString *_userAgent;
    NSString *_contentType;
    NSData *_data;
    struct __SecIdentity *_identity;
    NSString *_CMSSignatureHeaderName;
    NSURL *_currentURL;
    NSURL *_permanentlyRedirectedURL;
    _Bool _rememberData;
    NSMutableData *_responseData;
    long long _statusCode;
    NSError *_error;
    NSURLSession *_session;
    NSObject<OS_dispatch_semaphore> *_doneSema;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *method;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *CMSSignatureHeaderName;
@property (retain, nonatomic, readonly) NSData *responseData;
@property (retain, nonatomic, readonly) NSError *error;
@property (retain, nonatomic, readonly) NSURL *permanentlyRedirectedURL;
@property (nonatomic, readonly) long long statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transactionWithURL:(id)arg1 method:(id)arg2;

- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithURL:(id)arg1 method:(id)arg2;
- (void)_beginTransaction;
- (_Bool)_shouldAllowTrust:(struct __SecTrust *)arg1 forHost:(id)arg2;
- (struct __SecIdentity *)copyIdentity;
- (void)setIdentity:(struct __SecIdentity *)arg1;
- (void)performSynchronously;
- (void)performCompletionBlock:(CDUnknownBlockType)arg1;

@end
