/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CATRemoteTaskOperation;

@protocol CRKEnableStudentCloudSyncingInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKEnableStudentCloudSyncingInteraction : CATOperation

{
    unsigned long long mLocalCourseCount;
    id <CRKRequestPerformingProtocol> mStudentDaemonProxy;
    id <CRKEnableStudentCloudSyncingInteractionDelegate> mDelegate;
    CATRemoteTaskOperation *mEnableSyncingOperation;
    _Bool mIsPrompting;
}

- (void)run;
- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (void)enableSyncing;
- (void)stopPromptingToMerge;
- (void)promptToMerge;
- (id)makeEnableSyncingRequest;
- (void)enableSyncingOperationDidFinish:(id)arg1;
- (void)endOperationWithSyncingEnabledState:(_Bool)arg1;
- (void)processMergeDecision:(_Bool)arg1;
- (id)initWithLocalCourseCount:(unsigned long long)arg1 studentDaemonProxy:(id)arg2 delegate:(id)arg3;

@end
