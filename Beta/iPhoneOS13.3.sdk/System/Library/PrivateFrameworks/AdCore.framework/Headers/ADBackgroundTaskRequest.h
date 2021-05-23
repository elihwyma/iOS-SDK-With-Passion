/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol OS_xpc_object;

@interface ADBackgroundTaskRequest : NSObject

{
    _Bool _performDeferralCheck;
    NSString *_requestIdentifier;
    NSObject<OS_xpc_object> *_activity;
    NSObject<OS_xpc_object> *_criteria;
    NSDate *_startDate;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (retain, nonatomic) NSObject<OS_xpc_object> *criteria;
@property (nonatomic) _Bool performDeferralCheck;
@property (retain, nonatomic) NSDate *startDate;
@property (copy, nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic) long long delay;
@property (nonatomic) _Bool requiresNetworkConnectivity;
@property (nonatomic) _Bool requireBuddyComplete;
@property (nonatomic) _Bool requireClassCData;
@property (nonatomic) _Bool allowBattery;
@property (nonatomic) _Bool requireSleep;
@property (nonatomic) _Bool isRepeating;
@property (nonatomic) long long backgroundTaskRetryCount;
@property (nonatomic) long long gracePeriod;
@property (retain, nonatomic) NSString *priority;
@property (nonatomic) _Bool isCPUIntensive;
@property (nonatomic, readonly) _Bool shouldDefer;

- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithID:(id)arg1;
- (_Bool)taskIsDeferred;
- (void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)taskCanContinueForTime:(id)arg1;
- (void)endBackgroundDeferralCheck;
- (_Bool)deferTask;
- (void)setPropertyAsInteger:(id)arg1 value:(long long)arg2;
- (_Bool)continueTask;
- (_Bool)finishTask;
- (id)initWithCriteria:(id)arg1 ID:(id)arg2 activity:(id)arg3;
- (id)copyBackgroundTaskAgentCriteria;
- (void)_backgroundDeferralCheck:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)taskIsContinuing;
- (void)setPropertyAsDouble:(id)arg1 value:(double)arg2;
- (double)getPropertyAsDouble:(id)arg1;
- (void)setPropertyAsString:(id)arg1 value:(id)arg2;
- (id)getPropertyAsString:(id)arg1;
- (long long)getPropertyAsInteger:(id)arg1;
- (void)setPropertyAsDate:(id)arg1 value:(id)arg2;
- (id)getPropertyAsDate:(id)arg1;

@end
