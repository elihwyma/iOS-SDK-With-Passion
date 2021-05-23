/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSDictionary, NSURLRequest, NSURLResponse, NSUUID, __CFN_ConnectionMetrics, __CFN_SessionMetrics, __CFN_TaskMetrics;

@interface __CFN_TransactionMetrics : NSObject

{
    _Bool _scheduledOriginLoad;
    _Bool _firstOnConnection;
    _Bool _pushed;
    _Bool _APSRelayAttempted;
    _Bool _APSRelaySucceeded;
    NSUUID *_UUID;
    NSURLRequest *_request;
    NSURLRequest *_transferredRequest;
    NSURLResponse *_cachedResponse;
    NSURLResponse *_lastResponse;
    __CFN_ConnectionMetrics *_connectionMetrics;
    long long _requestHeaderSize;
    long long _requestBodySize;
    long long _requestBodyTransferSize;
    long long _responseHeaderSize;
    long long _responseBodySize;
    long long _responseBodyTransferSize;
    double _beginTime;
    double _endTime;
    double _cacheLookupBeginTime;
    double _cacheLookupEndTime;
    double _requestBeginTime;
    double _requestEndTime;
    double _responseBeginTime;
    double _responseEndTime;
    unsigned long long _endReason;
    long long _schedulingTier;
    NSDictionary *_tcpInfoBegin;
    NSDictionary *_tcpInfoEnd;
    NSDictionary *_subflowCountsBegin;
    NSDictionary *_subflowCountsEnd;
    long long _options;
    __CFN_TaskMetrics *_taskMetrics;
    __CFN_SessionMetrics *_sessionMetrics;
    long long _lastResponseHeaderSize;
    long long _lastResponseBodySize;
    long long _lastResponseBodyTransferSize;
}

@property (readonly) NSDictionary *legacyStaticMetrics;
@property (weak, nonatomic) __CFN_TaskMetrics *taskMetrics;
@property (retain, nonatomic) __CFN_SessionMetrics *sessionMetrics;
@property (nonatomic) long long lastResponseHeaderSize;
@property (nonatomic) long long lastResponseBodySize;
@property (nonatomic) long long lastResponseBodyTransferSize;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSURLRequest *transferredRequest;
@property (retain, nonatomic) NSURLResponse *cachedResponse;
@property (retain, nonatomic) NSURLResponse *lastResponse;
@property (retain, nonatomic) __CFN_ConnectionMetrics *connectionMetrics;
@property (nonatomic) _Bool scheduledOriginLoad;
@property (nonatomic) _Bool firstOnConnection;
@property (nonatomic) long long requestHeaderSize;
@property (nonatomic) long long requestBodySize;
@property (nonatomic) long long requestBodyTransferSize;
@property (nonatomic) long long responseHeaderSize;
@property (nonatomic) long long responseBodySize;
@property (nonatomic) long long responseBodyTransferSize;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) double cacheLookupBeginTime;
@property (nonatomic) double cacheLookupEndTime;
@property (nonatomic) double requestBeginTime;
@property (nonatomic) double requestEndTime;
@property (nonatomic) double responseBeginTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) unsigned long long endReason;
@property (nonatomic, getter=isPushed) _Bool pushed;
@property (nonatomic) long long schedulingTier;
@property (nonatomic) _Bool APSRelayAttempted;
@property (nonatomic) _Bool APSRelaySucceeded;
@property (retain, nonatomic) NSDictionary *tcpInfoBegin;
@property (retain, nonatomic) NSDictionary *tcpInfoEnd;
@property (retain, nonatomic) NSDictionary *subflowCountsBegin;
@property (retain, nonatomic) NSDictionary *subflowCountsEnd;
@property (nonatomic) long long options;

+ (_Bool)supportsSecureCoding;
+ (id)nstatCountsFromTCPInfo:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)requestEnd;
- (void)importLegacyStaticMetricsFromAPSRelay:(id)arg1;
- (id)initWithRequest:(id)arg1 taskMetrics:(id)arg2 sessionMetrics:(id)arg3;
- (void)cacheLookupBegin;
- (void)cacheLookupEnd:(struct _CFCachedURLResponse *)arg1;
- (void)originLoad;
- (void)connectionCreate:(shared_ptr_8da4e70b)arg1;
- (void)requestBeginOnConnection:(id)arg1;
- (void)requestHeaderEnd;
- (void)requestBody:(id)arg1;
- (void)responseBegin;
- (void)responseHeaderEnd:(id)arg1;
- (void)responseBody:(struct __CFData *)arg1;
- (void)responseEnd;
- (void)end:(unsigned long long)arg1;

@end
