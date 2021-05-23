/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKAsyncOperation.h>

@class AMSURLRequestEncoder, AMSURLSession, NSData, NSDate, NSError, NSHTTPURLResponse, NSNumber, NSString, NSURLRequest, NSURLSessionDataTask;

@interface WLKNetworkRequestOperation : WLKAsyncOperation

{
    NSString *_identifier;
    NSNumber *_DSID;
    NSURLRequest *_request;
    long long _options;
    NSHTTPURLResponse *_httpResponse;
    long long _responseStatusCode;
    NSData *_data;
    NSError *_error;
    AMSURLRequestEncoder *_encoder;
    AMSURLSession *_session;
    NSURLSessionDataTask *_task;
    NSDate *_startDate;
    unsigned long long _signpostIdentifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (nonatomic) long long responseStatusCode;
@property (retain, nonatomic) AMSURLRequestEncoder *encoder;
@property (retain, nonatomic) AMSURLSession *session;
@property (copy, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long signpostIdentifier;
@property (copy, nonatomic) NSNumber *DSID;
@property (nonatomic, readonly) long long options;

- (id)init;
- (void)cancel;
- (void)finishExecutionIfPossible;
- (void)executionDidBegin;
- (void)configureSession;
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;
- (void)processResponse;
- (void)_startNetworkRequest;
- (long long)_statusCodeForAMSResult:(id)arg1 error:(id)arg2;
- (void)_finishExecutionIfPossibleWithError:(id)arg1;
- (void)handleResult:(id)arg1 error:(id)arg2;
- (void)prepareAndStartNetworkRequest;
- (id)initWithURLRequest:(id)arg1 options:(long long)arg2;

@end
