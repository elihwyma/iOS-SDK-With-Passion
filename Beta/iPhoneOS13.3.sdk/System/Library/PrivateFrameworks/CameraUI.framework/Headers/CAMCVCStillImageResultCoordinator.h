/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;

@protocol CAMCVCStillImageResultCoordinatorDelegate;

@interface CAMCVCStillImageResultCoordinator : NSObject

{
    _Bool _expectingPairedVideo;
    _Bool _allowMultipleCaptures;
    _Bool _shouldReturnFilteredPhotosAsSingleAsset;
    _Bool __didReceiveForceRemainingDispatchesIfPossible;
    id <CAMCVCStillImageResultCoordinatorDelegate> _delegate;
    NSString *_identifier;
    NSSet *_allExpectedResultSpecifiers;
    NSMutableSet *__receivedPhotos;
    NSMutableSet *__receivedVideos;
    NSMutableSet *__photoResultSpecifiersDelayingForcedDispatch;
    NSMutableSet *__videoResultSpecifiersDelayingForcedDispatch;
    NSMutableSet *__handledResultSpecifiers;
    NSMutableSet *__dispatchedResultSpecifiers;
    NSMutableDictionary *__pendingPhotoProperties;
    NSMutableDictionary *__pendingVideoProperties;
    NSMutableDictionary *__pendingAssetAdjustments;
}

@property (nonatomic, readonly) NSMutableSet *_receivedPhotos;
@property (nonatomic, readonly) NSMutableSet *_receivedVideos;
@property (nonatomic, readonly) NSMutableSet *_photoResultSpecifiersDelayingForcedDispatch;
@property (nonatomic, readonly) NSMutableSet *_videoResultSpecifiersDelayingForcedDispatch;
@property (nonatomic, readonly, getter=_isDelayingForcedDispatch) _Bool _delayingForcedDispatch;
@property (nonatomic, setter=_setDidReceiveForceRemainingDispatchesIfPossible:) _Bool _didReceiveForceRemainingDispatchesIfPossible;
@property (nonatomic, readonly) NSMutableSet *_handledResultSpecifiers;
@property (nonatomic, readonly) NSMutableSet *_dispatchedResultSpecifiers;
@property (nonatomic, readonly) NSMutableDictionary *_pendingPhotoProperties;
@property (nonatomic, readonly) NSMutableDictionary *_pendingVideoProperties;
@property (nonatomic, readonly) NSMutableDictionary *_pendingAssetAdjustments;
@property (weak, nonatomic, readonly) id <CAMCVCStillImageResultCoordinatorDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSSet *allExpectedResultSpecifiers;
@property (nonatomic, readonly, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property (nonatomic, readonly) _Bool allowMultipleCaptures;
@property (nonatomic, readonly) _Bool shouldReturnFilteredPhotosAsSingleAsset;

- (void)_dispatchPendingPropertiesForced:(_Bool)arg1;
- (_Bool)_isWaitingOnResultSpecifiers:(unsigned long long)arg1;
- (_Bool)_attemptDispatchForPairWithFilteredResultSpecifiers:(unsigned long long)arg1 unfilteredResultSpecifiers:(unsigned long long)arg2 forceRemainingDispatches:(_Bool)arg3;
- (_Bool)_attemptDispatchForResultSpecifiers:(unsigned long long)arg1 forceRemainingDispatches:(_Bool)arg2;
- (id)_errorForResultSpecifiers:(unsigned long long)arg1 allowMissingVideo:(_Bool)arg2;
- (id)_errorWithDescription:(id)arg1 code:(long long)arg2;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2 allExpectedResultSpecifiers:(id)arg3 isExpectingPairedVideo:(_Bool)arg4 allowMultipleCaptures:(_Bool)arg5 shouldReturnFilteredPhotosAsSingleAsset:(_Bool)arg6;
- (void)updatePhotoProperties:(id)arg1 assetAdjustments:(id)arg2 forResultSpecifiers:(unsigned long long)arg3;
- (void)updateVideoProperties:(id)arg1 forResultSpecifiers:(unsigned long long)arg2;
- (void)delayForcedDispatchForPhotoResultSpecifiers:(unsigned long long)arg1;
- (void)delayForcedDispatchForVideoResultSpecifiers:(unsigned long long)arg1;
- (void)forceRemainingDispatchesIfPossible;

@end
