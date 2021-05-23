/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarConfiguration, AVTAvatarRecord, AVTUsageTrackingRecordTimedEvent, NSDate, NSString;

@protocol AVTAggDClient, AVTAvatarConfigurationMetric, AVTAvatarStoreInternal, AVTDifferentialPrivacyRecorder, AVTUILogger, OS_dispatch_queue;

@interface AVTUsageTrackingSession : NSObject

{
    _Bool _expandedMode;
    _Bool _recordedVideo;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <AVTUILogger> _logger;
    id <AVTAggDClient> _ntsAggDClient;
    NSString *_aggDKeyBasePrefix;
    id <AVTDifferentialPrivacyRecorder> _ntsDPRecorder;
    id <AVTAvatarConfigurationMetric> _metric;
    CDUnknownBlockType _recordTransformer;
    AVTAvatarConfiguration *_defaultConfiguration;
    AVTAvatarRecord *_avatarRecord;
    CDUnknownBlockType _timeProvider;
    NSDate *_editorEnterDate;
    AVTUsageTrackingRecordTimedEvent *_faceTrackingEvent;
    id <AVTAvatarStoreInternal> _avatarStore;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) id <AVTAggDClient> ntsAggDClient;
@property (nonatomic, readonly) NSString *aggDKeyBasePrefix;
@property (nonatomic, readonly) id <AVTDifferentialPrivacyRecorder> ntsDPRecorder;
@property (nonatomic, readonly) id <AVTAvatarConfigurationMetric> metric;
@property (copy, nonatomic, readonly) CDUnknownBlockType recordTransformer;
@property (nonatomic, readonly) AVTAvatarConfiguration *defaultConfiguration;
@property (nonatomic, readonly) AVTAvatarRecord *avatarRecord;
@property (copy, nonatomic, readonly) CDUnknownBlockType timeProvider;
@property (nonatomic) _Bool expandedMode;
@property (nonatomic) _Bool recordedVideo;
@property (retain, nonatomic) NSDate *editorEnterDate;
@property (retain, nonatomic) AVTUsageTrackingRecordTimedEvent *faceTrackingEvent;
@property (retain, nonatomic) id <AVTAvatarStoreInternal> avatarStore;

+ (id)whitelistAppNameFromBundleID:(id)arg1;
+ (id)dpKeyBasePrefix;
+ (id)aggDKeyBasePrefixForBundleIdentifier:(id)arg1;
+ (CDUnknownBlockType)defaultTimeProvider;
+ (id)makeKeyAggDCompliant:(id)arg1;
+ (id)keyContentForAvatarRecord:(id)arg1 action:(id)arg2 includingPuppetName:(_Bool)arg3;
+ (void)getPresetDescription:(out id *)arg1 usedCategoriesDescription:(out id *)arg2 forAvatarConfiguration:(id)arg3 defaultConfiguration:(id)arg4;
+ (id)makeDPKey:(id)arg1;
+ (CDUnknownBlockType)configurationDistanceClassifierWithMetric:(id)arg1;
+ (CDUnknownBlockType)likenessComparator;
+ (CDUnknownBlockType)defaultRecordTransformerForCoreModel:(id)arg1;
+ (id)colorPresetDescriptionForAvatarConfiguration:(id)arg1;

- (void)end;
- (void)didOpenStickersAppFromRecents;
- (void)didTapStickerFromRecents:(id)arg1;
- (void)didCreateAvatar:(id)arg1;
- (void)didEditAvatar:(id)arg1;
- (void)didPeelOffStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2;
- (void)didTapStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2;
- (void)didDuplicateAvatar:(id)arg1;
- (void)didDeleteAvatar:(id)arg1;
- (id)initWithAggDClient:(id)arg1 dpRecorder:(id)arg2 serialQueueProvider:(CDUnknownBlockType)arg3 recordTransformer:(CDUnknownBlockType)arg4 avatarRecord:(id)arg5 defaultConfiguration:(id)arg6 timeProvider:(CDUnknownBlockType)arg7 configurationMetric:(id)arg8 logger:(id)arg9 aggDKeyBasePrefix:(id)arg10;
- (id)appendHostAppNameToKeyIfNeeded:(id)arg1;
- (id)makeAggDScalarKey:(id)arg1;
- (void)performClientWork:(CDUnknownBlockType)arg1;
- (id)makeAggDDistributionKey:(id)arg1;
- (void)nts_reportAvatarDescription:(id)arg1 dpRecorder:(id)arg2;
- (void)didResumeFaceTracking;
- (void)reportAddOneForScalarKey:(id)arg1;
- (void)nts_reportAvatarLikenessClustersWithClient:(id)arg1;
- (void)nts_reportAvatarComplexity:(id)arg1 withClient:(id)arg2;
- (void)didPauseFaceTracking;
- (void)nts_reportEditorTimeWithExitTime:(id)arg1 client:(id)arg2;
- (void)nts_reportFaceTrackingTimeWithEndTime:(id)arg1 client:(id)arg2;
- (void)sentStickerFromStickersApp:(id)arg1 withAvatarRecord:(id)arg2 action:(id)arg3;
- (void)nts_reportAvatarCountWithClient:(id)arg1;
- (void)nts_reportExpandedModeWithClient:(id)arg1;
- (void)nts_loadDefaultConfigurationIfNeeded;
- (void)beginWithStore:(id)arg1;
- (void)didShowExpandedMode;
- (void)didEnterEditor;
- (void)didLeaveEditor;
- (void)didRecordVideo;
- (void)didSendVideoWithAvatar:(id)arg1 duration:(double)arg2;
- (void)didDiscardVideoWithDuration:(double)arg1;
- (void)didReplayVideo;
- (void)didSendImageWithAvatar:(id)arg1;
- (void)didSendStickerWithAvatar:(id)arg1;
- (void)didStartFaceTrackingInCarouselWithAvatar:(id)arg1;
- (void)didChangeCurrentAvatarInCarousel:(id)arg1;
- (void)didStopFaceTrackingInCarousel;
- (void)didChangeCurrentAvatarInStickers:(id)arg1;
- (id)initWithSerialQueueProvider:(CDUnknownBlockType)arg1 recordTransformer:(CDUnknownBlockType)arg2 logger:(id)arg3;

@end
