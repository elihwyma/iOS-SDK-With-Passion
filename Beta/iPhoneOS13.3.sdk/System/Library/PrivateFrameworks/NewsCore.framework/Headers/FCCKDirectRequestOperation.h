/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCEdgeCacheHint, FCNetworkEvent, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface FCCKDirectRequestOperation : FCOperation

{
    _Bool _production;
    _Bool _operationFailsOnRequestFailure;
    NSArray *_requests;
    NSString *_containerName;
    long long _requestType;
    long long _networkEventType;
    double _timeoutIntervalForRequest;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    CDUnknownBlockType _criticalNodeFailureTest;
    CDUnknownBlockType _requestCompletionHandler;
    NSString *_requestUUID;
    FCNetworkEvent *_networkEvent;
    NSMutableArray *_resultResponses;
    NSMutableDictionary *_resultErrorsByRequestID;
    NSError *_resultError;
}

@property (copy, nonatomic) NSString *requestUUID;
@property (retain, nonatomic) FCNetworkEvent *networkEvent;
@property (retain, nonatomic) NSMutableArray *resultResponses;
@property (retain, nonatomic) NSMutableDictionary *resultErrorsByRequestID;
@property (retain, nonatomic) NSError *resultError;
@property (copy, nonatomic) NSArray *requests;
@property (copy, nonatomic) NSString *containerName;
@property (nonatomic) _Bool production;
@property (nonatomic) _Bool operationFailsOnRequestFailure;
@property (nonatomic) long long requestType;
@property (nonatomic) long long networkEventType;
@property (nonatomic) double timeoutIntervalForRequest;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (copy, nonatomic) CDUnknownBlockType criticalNodeFailureTest;
@property (copy, nonatomic) CDUnknownBlockType requestCompletionHandler;

+ (id)URLSession;
+ (id)_headersImpactingEdgeCache;
+ (_Bool)_enableDebugLogLevel;

- (id)init;
- (id)_requestBodyData;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (id)generateHTTPRequest;
- (void)_processResponseData:(id)arg1;
- (id)_errorFromHTTPResponse:(id)arg1;
- (id)_errorFromOperationResultError:(id)arg1;
- (id)_requestHeadersWithBaseURL:(id)arg1;
- (id)_bundleIDToReport;
- (id)_mmeClientInfo;

@end
