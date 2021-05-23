/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransaction.h>

@class NSMutableSet, NSSet, STTelephonyStatusDomain;

@interface SBAppRepairTransaction : SBTransaction

{
    NSSet *_appInfos;
    NSMutableSet *_repairRequests;
    STTelephonyStatusDomain *_telephonyDomain;
}

@property (copy, nonatomic, readonly) NSSet *appInfos;

- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_evaluateCompletion;
- (void)_startAppRepairs;
- (void)_completeRequest:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (id)initWithApplicationInfos:(id)arg1;

@end
