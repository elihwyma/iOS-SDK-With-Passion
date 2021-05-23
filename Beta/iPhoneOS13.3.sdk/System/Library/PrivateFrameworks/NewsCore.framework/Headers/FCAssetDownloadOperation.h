/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCNetworkOperation.h>

@class FCNetworkBehaviorMonitor, NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURL;

@interface FCAssetDownloadOperation : FCNetworkOperation

{
    NSURL *_URL;
    NSString *_loggingKey;
    long long _downloadDestination;
    long long _networkEventType;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    CDUnknownBlockType _fileDownloadCompletionHandler;
    CDUnknownBlockType _dataDownloadCompletionHandler;
    NSURL *_downloadedFileURL;
    NSData *_downloadedData;
    NSString *_requestUUID;
    double _taskStartTime;
    NSDictionary *_timingData;
    NSString *_responseMIMEType;
    NSHTTPURLResponse *_httpResponse;
    unsigned long long _responseSize;
    NSError *_error;
}

@property (retain, nonatomic) NSURL *downloadedFileURL;
@property (retain, nonatomic) NSData *downloadedData;
@property (retain, nonatomic) NSString *requestUUID;
@property (nonatomic) double taskStartTime;
@property (retain, nonatomic) NSDictionary *timingData;
@property (retain, nonatomic) NSString *responseMIMEType;
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (nonatomic) unsigned long long responseSize;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *loggingKey;
@property (nonatomic) long long downloadDestination;
@property (nonatomic) long long networkEventType;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (copy, nonatomic) CDUnknownBlockType fileDownloadCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType dataDownloadCompletionHandler;

+ (id)sharedURLSession;
+ (id)sharedURLRequestScheduler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)throttleGroup;
- (void)resetForRetry;

@end
