/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface EDAssetDownloadScheduler : NSObject

{
    NSString *_identifier;
    NSString *_lastFailureIntervalKey;
    CDUnknownBlockType _handler;
    long long _regularInterval;
    long long _failureInterval;
    long long _backOffFactor;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSString *_identifier;
@property (copy, nonatomic) NSString *_lastFailureIntervalKey;
@property (copy, nonatomic) CDUnknownBlockType _handler;
@property (nonatomic) long long _regularInterval;
@property (nonatomic) long long _failureInterval;
@property (nonatomic) long long _backOffFactor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, readonly) CDUnknownBlockType activityHandlerBlock;

- (id)initWithIdentifier:(id)arg1 regularInterval:(long long)arg2 failureInterval:(long long)arg3 backOffFactor:(long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_xpcCriteriaForInterval:(long long)arg1;
- (long long)_nextFailureInterval;
- (id)initWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_rescheduleAfterSuccessActivity:(id)arg1;
- (void)_rescheduleAfterFailureActivity:(id)arg1;
- (void)_stopSchedulingActivity:(id)arg1;

@end
