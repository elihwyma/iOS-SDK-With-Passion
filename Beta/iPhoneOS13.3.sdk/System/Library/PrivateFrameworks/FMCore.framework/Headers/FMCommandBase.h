/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSOperation.h>

@class FMServerInteractionController, NSData, NSError, NSHTTPURLResponse, NSNumber, NSString, NSURLConnection, NSURLRequest, NSURLSessionDataTask;

@interface FMCommandBase : NSOperation

{
    _Bool _commandTaskComplete;
    NSError *_error;
    NSString *_scheme;
    NSString *_username;
    NSString *_password;
    NSString *_host;
    NSNumber *_port;
    double _timeout;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSData *_responseData;
    FMServerInteractionController *_serverInteractionController;
    NSURLSessionDataTask *_task;
    unsigned long long _redirectCount;
    NSString *_originalHostname;
    NSString *_redirectedHostname;
    NSURLConnection *_connection;
}

@property (weak, nonatomic) FMServerInteractionController *serverInteractionController;
@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (nonatomic) unsigned long long redirectCount;
@property (copy, nonatomic) NSString *originalHostname;
@property (copy, nonatomic) NSString *redirectedHostname;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSData *responseData;
@property (retain, nonatomic) NSURLConnection *connection;
@property (nonatomic) _Bool commandTaskComplete;
@property (copy) NSError *error;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSNumber *port;
@property (nonatomic) double timeout;

- (id)init;
- (void)cancel;
- (id)path;
- (void)start;
- (id)method;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)finishWithError:(id)arg1;
- (id)body;
- (_Bool)wasSuccessful;
- (id)headers;
- (void)sendRequest;
- (void)_dataTaskCompletionHandlerWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (_Bool)isTransactionCompleteWithError:(id)arg1;
- (id)authHeaders;
- (id)valueForResponseHTTPHeader:(id)arg1;
- (void)generateFakeResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (_Bool)wasRedirected;

@end
