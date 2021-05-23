/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class NSURLRequest, NSURLSession, NSURLSessionDataTask;

@interface RUIHTTPRequest : NSObject

{
    NSURLRequest *_request;
    NSURLSessionDataTask *_dataTask;
    NSURLSession *_urlSession;
    id _delegate;
}

@property (weak, nonatomic) id delegate;

+ (id)errorWithCode:(unsigned long long)arg1;
+ (id)invalidResponseErrorWithResponse:(id)arg1;
+ (id)serviceUnavailableError;
+ (id)nonSecureConnectionNotAllowedError;
+ (_Bool)anyRequestLoading;
+ (id)safeBaseURL;

- (id)init;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)parseData:(id)arg1;
- (id)request;
- (void)loadRequest:(id)arg1;
- (_Bool)isLoading;
- (void)_finishedLoading;
- (_Bool)receivedValidResponse:(id)arg1;
- (void)loadStatusChanged;
- (void)_preLoadCancel;
- (id)sessionConfiguration;
- (id)urlSessionDelegate;
- (void)willParseData;
- (void)didParseData;
- (void)_startedLoading;
- (void)shouldLoadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadRequestMain:(id)arg1;
- (id)handleWillLoadRequest:(id)arg1;

@end
