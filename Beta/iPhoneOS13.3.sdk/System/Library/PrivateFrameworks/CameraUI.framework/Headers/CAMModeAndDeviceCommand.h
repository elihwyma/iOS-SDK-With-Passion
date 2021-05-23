/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration, NSError;

@interface CAMModeAndDeviceCommand : CAMCaptureCommand

{
    int __requestID;
    CAMCaptureGraphConfiguration *__desiredGraphConfiguration;
    CAMCaptureGraphConfiguration *__resolvedGraphConfiguration;
    double __minimumExecutionTime;
    NSError *__configurationError;
}

@property (nonatomic, readonly) CAMCaptureGraphConfiguration *_desiredGraphConfiguration;
@property (retain, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration;
@property (nonatomic, readonly) double _minimumExecutionTime;
@property (nonatomic, readonly) int _requestID;
@property (retain, nonatomic, setter=_setConfigurationError:) NSError *_configurationError;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)userInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (void)_sanitizeDeviceUsingContext:(id)arg1;
- (id)_desiredInputsWithContext:(id)arg1;
- (id)_existingInputsWithContext:(id)arg1 without:(id)arg2;
- (id)_specificFramerateCommandForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (id)_desiredOutputsWithContext:(id)arg1 shouldUseThumbnailOutputForFilters:(_Bool)arg2;
- (id)_existingOutputsWithContext:(id)arg1 without:(id)arg2;
- (void)_performPostConfigurationSetupForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (void)_performPostConfigurationSanityCheckForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (_Bool)_shouldEnableLivePhotoCaptureForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)_shouldEnableCTMVideoCaptureForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)_wantsQuadraHighResolutionForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)_wantsLowLightBoostForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)_wantsLivePhotoMetadataInVideosForMode:(long long)arg1 device:(long long)arg2;
- (id)_specificEncodingBehaviorCommandForGraphConfiguration:(id)arg1;
- (id)_specificPreparePhotoSettingsCommandForGraphConfiguration:(id)arg1;
- (_Bool)_shouldEnableDeferredProcessingForMode:(long long)arg1;
- (_Bool)_isStillImageMode:(long long)arg1;
- (id)initWithGraphConfiguration:(id)arg1 minimumExecutionTime:(double)arg2 requestID:(int)arg3;
- (_Bool)requiresSessionModification;
- (id)sessionModificationLogReason;

@end
