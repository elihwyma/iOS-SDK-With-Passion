/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableData, NSURLRequest, NSURLSessionDataTask;

@interface AKURLDataTask : NSObject

{
    _Bool _canceledOrCompleted;
    NSURLRequest *_request;
    unsigned long long _retryCount;
    NSURLSessionDataTask *_underlyingTask;
    CDUnknownBlockType _completionHandler;
    NSMutableData *_receivedData;
    NSError *_lastRetryError;
}

@property (retain, nonatomic) NSURLRequest *request;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) NSURLSessionDataTask *underlyingTask;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (retain, nonatomic) NSError *lastRetryError;
@property (nonatomic) _Bool canceledOrCompleted;

- (id)description;
- (void)_completeWithError:(id)arg1;

@end
