/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class AMSPromise, AMSURLSession, NSString;

@protocol AMSBagProtocol, AMSMetricsDataSource;

__attribute__((visibility("hidden")))
@interface AMSMetricsFigaroFlushTask : AMSTask

{
    _Bool _cancelled;
    int _requestCount;
    AMSURLSession *_URLSession;
    id <AMSBagProtocol> _bag;
    id <AMSMetricsDataSource> _dataSource;
    long long _maxRequestCount;
    long long _maxBatchSize;
    NSString *_topic;
    AMSPromise *_currentCancellablePromise;
}

@property (retain, nonatomic) AMSPromise *currentCancellablePromise;
@property (nonatomic) int requestCount;
@property (nonatomic, readonly) AMSURLSession *URLSession;
@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (retain, nonatomic) id <AMSMetricsDataSource> dataSource;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) long long maxBatchSize;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic, readonly) _Bool cancelled;

- (void)cancel;
- (id)_nextBatchWithConfig:(id)arg1 error:(id *)arg2;
- (id)_postBatch:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;
- (id)_mescalSignatureWithBodyData:(id)arg1 error:(id *)arg2;
- (id)performFlush;
- (id)initWithDataSource:(id)arg1 bag:(id)arg2;

@end
