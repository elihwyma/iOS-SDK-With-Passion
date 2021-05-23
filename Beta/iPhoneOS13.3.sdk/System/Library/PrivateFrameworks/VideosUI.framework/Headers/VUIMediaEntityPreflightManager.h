/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@interface VUIMediaEntityPreflightManager : NSObject

+ (id)defaultManager;

- (_Bool)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg1;
- (void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_verifyMediaItemIsPlayableOnCellular:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_preflightPlaybackWithMediaItem:(id)arg1 disableLocalAsset:(_Bool)arg2 presentingViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_isOnWiFi;
- (_Bool)_isOnCellular;
- (void)_presentCellularPlaybackIsDisabledAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_determineCellularPlaybackQualityForRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_isMediaItemPlayableOnCellular:(id)arg1;
- (_Bool)_isRemainingTimeLeftWithinRentalPlaybackWindowWithMediaItem:(id)arg1;
- (void)preflightPlaybackWithMediaItem:(id)arg1 disableLocalAsset:(_Bool)arg2 presentingViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_preflightDownloadWithMediaEntityType:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_preflightPlaybackWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
