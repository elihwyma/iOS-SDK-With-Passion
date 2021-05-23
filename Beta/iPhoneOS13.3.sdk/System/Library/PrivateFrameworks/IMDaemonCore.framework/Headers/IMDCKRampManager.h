/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol OS_dispatch_queue;

@interface IMDCKRampManager : NSObject

{
    NSObject<OS_dispatch_queue> *_ckQueue;
    NSTimer *_retryTimer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) NSTimer *retryTimer;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_scheduleOperation:(id)arg1;
- (id)_CKUtilitiesSharedInstance;
- (void)fetchLatestRampStateFromCK:(CDUnknownBlockType)arg1;
- (id)_rampUpRecordID;
- (_Bool)_shouldSendPriorityRequest;
- (void)_writeRampStateAllowed:(_Bool)arg1 promoted:(_Bool)arg2 visible:(_Bool)arg3 fetchHadServerError:(_Bool)arg4;
- (void)_performRampCheckWithRetryAfter:(double)arg1;
- (void)_persistRampFetchServerError:(_Bool)arg1;
- (void)_fetchLatestRampStateFromCK:(CDUnknownBlockType)arg1;
- (void)cachedRampState:(CDUnknownBlockType)arg1;

@end
