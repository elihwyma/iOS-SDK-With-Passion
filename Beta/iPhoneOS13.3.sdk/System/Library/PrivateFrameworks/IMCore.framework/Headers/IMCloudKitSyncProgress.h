/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMCloudKitSyncState, IMCloudKitSyncStatistics, NSArray, NSString;

@interface IMCloudKitSyncProgress : NSObject

{
    _Bool _shouldShowProgressBar;
    _Bool _shouldShowIndeterminateProgress;
    _Bool _shouldShowUserActionLabel;
    _Bool _shouldShowUserMessageLabel;
    NSString *_progressLabel;
    double _progressBarValue;
    double _progressBarMax;
    NSString *_userMessageLabel;
    NSString *_actionLabel;
    long long _actionType;
    IMCloudKitSyncState *_syncState;
    IMCloudKitSyncStatistics *_syncStatistics;
    double _broadcastDeferralOverride;
}

@property (nonatomic) _Bool shouldShowProgressBar;
@property (nonatomic) _Bool shouldShowUserActionLabel;
@property (nonatomic) _Bool shouldShowUserMessageLabel;
@property (nonatomic) _Bool shouldShowIndeterminateProgress;
@property (retain, nonatomic) NSString *progressLabel;
@property (retain, nonatomic) NSString *userMessageLabel;
@property (retain, nonatomic) NSString *actionLabel;
@property (nonatomic) long long actionType;
@property (nonatomic) double progressBarValue;
@property (nonatomic) double progressBarMax;
@property (nonatomic) double broadcastDeferralOverride;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) double remainingItems;
@property (nonatomic, readonly) NSString *percentCompleteString;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) IMCloudKitSyncState *syncState;
@property (nonatomic, readonly) IMCloudKitSyncStatistics *syncStatistics;

- (id)init;
- (id)description;
- (id)initWithSyncState:(id)arg1 syncStatistics:(id)arg2;
- (void)configureSelf;

@end
