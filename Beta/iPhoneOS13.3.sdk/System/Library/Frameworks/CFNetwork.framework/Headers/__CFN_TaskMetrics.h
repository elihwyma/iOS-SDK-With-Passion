/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSMutableArray, NSUUID, __CFN_SessionMetrics, __CFN_TransactionMetrics;

@interface __CFN_TaskMetrics : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _ignoreNextRedirection;
    _Bool _completed;
    NSUUID *_UUID;
    unsigned long long _identifier;
    NSMutableArray *_transactionMetrics;
    double _createTime;
    double _firstResumeTime;
    double _completeTime;
    long long _options;
    long long _schedulingTier;
    __CFN_TransactionMetrics *_currentTransactionMetrics;
    __CFN_SessionMetrics *_sessionMetrics;
}

@property (retain, nonatomic) __CFN_SessionMetrics *sessionMetrics;
@property (nonatomic) _Bool completed;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSMutableArray *transactionMetrics;
@property (nonatomic) double createTime;
@property (nonatomic) double firstResumeTime;
@property (nonatomic) double completeTime;
@property (nonatomic) long long options;
@property (nonatomic) long long schedulingTier;
@property (nonatomic) _Bool ignoreNextRedirection;
@property (retain) __CFN_TransactionMetrics *currentTransactionMetrics;

+ (_Bool)supportsSecureCoding;
+ (long long)optionsFromTask:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)completionHandlerEvent;
- (void)completeWithError:(id)arg1;
- (void)lockTransactionMetrics:(CDUnknownBlockType)arg1;
- (void)delegateEvent:(SEL)arg1;
- (void)delegateBegin:(SEL)arg1;
- (void)delegateEnd:(SEL)arg1;
- (id)initWithTask:(id)arg1 sessionMetrics:(id)arg2;
- (void)nextTransaction:(unsigned long long)arg1 withNewRequest:(id)arg2;

@end
