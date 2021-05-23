/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class MCLURLDataLoaderTask, NSData, NSDictionary, NSError, NSString, NSURL;

@interface MCLHTTPURLRequest : NSObject

{
    MCLURLDataLoaderTask *_task;
    NSURL *_url;
    NSString *_httpMethod;
    NSDictionary *_httpHeaders;
    double _timeout;
    unsigned long long _statusCode;
    NSError *_error;
    NSData *_data;
}

@property (nonatomic) unsigned long long statusCode;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (nonatomic) double timeout;

- (id)init;
- (void)cancel;
- (void)send;
- (void)loadRequest:(id)arg1;
- (void)sendData:(id)arg1;
- (void)handleCompletion:(id)arg1;
- (void)sendText:(id)arg1;

@end
