/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class MSPBTimerContext, NSString;

@protocol MSPowerBudgetDelegate, OS_dispatch_queue;

@interface MSPowerBudget : NSObject

{
    _Bool _workQueueIsFileTransferAllowed;
    _Bool _workQueueIsExternalPowered;
    _Bool _workQueueIsForeground;
    id <MSPowerBudgetDelegate> _delegate;
    double _maxActiveTimeAfterPush;
    double _maxActiveTimeAfterLossOfForeground;
    double _maxActiveTimeAfterGlobalResetSync;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSString *_personID;
    MSPBTimerContext *_workQueuePushTimerContext;
    MSPBTimerContext *_workQueuePostForegroundTimerContext;
    MSPBTimerContext *_workQueueGlobalResetSyncTimerContext;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, setter=workQueueSetFileTransferAllowed:) _Bool workQueueIsFileTransferAllowed;
@property (nonatomic, setter=workQueueSetExternalPowered:) _Bool workQueueIsExternalPowered;
@property (nonatomic, setter=workQueueSetForeground:) _Bool workQueueIsForeground;
@property (retain, nonatomic) MSPBTimerContext *workQueuePushTimerContext;
@property (retain, nonatomic) MSPBTimerContext *workQueuePostForegroundTimerContext;
@property (retain, nonatomic) MSPBTimerContext *workQueueGlobalResetSyncTimerContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) id <MSPowerBudgetDelegate> delegate;
@property (nonatomic) double maxActiveTimeAfterPush;
@property (nonatomic) double maxActiveTimeAfterLossOfForeground;
@property (nonatomic) double maxActiveTimeAfterGlobalResetSync;
@property (retain, nonatomic) NSString *focusAlbumGUID;
@property (retain, nonatomic) NSString *focusAssetCollectionGUID;
@property (retain, nonatomic) NSString *personID;
@property (nonatomic, readonly, getter=isFileTransferAllowed) _Bool fileTransferAllowed;
@property (nonatomic, readonly, getter=hasForegroundFocus) _Bool foregroundFocus;
@property (nonatomic, readonly) _Bool hasActiveTimers;

- (id)init;
- (void)shutDown;
- (void)didReceivePushNotification;
- (void)workQueueSetPushTimerDate:(id)arg1;
- (void)workQueueSetPostForegroundTimerDate:(id)arg1;
- (void)workQueueSetGlobalResetSyncTimerDate:(id)arg1;
- (double)workQueueMaxActiveTimeAfterPush;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
- (void)workQueueRecomputeFileTransferAllowed;
- (void)workQueueSetIsFileTransferAllowed:(_Bool)arg1;
- (void)setIsFileTransferAllowed:(_Bool)arg1;
- (void)workQueueCommitPersistedValues;
- (void)didBeginForegroundFocus;
- (void)didEndForegroundFocus;
- (void)didReceiveGlobalResetSync;
- (void)didBeginExternalPower;
- (void)didEndExternalPower;
- (void)_postForegroundTimerDidExpire:(id)arg1;
- (void)_globalResetSyncTimerDidExpire:(id)arg1;

@end
