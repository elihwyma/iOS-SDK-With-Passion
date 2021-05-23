/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@interface RCAVState : NSObject

{
    long long _AVCaptureState;
    long long _AVPreviewState;
}

@property (nonatomic) long long AVCaptureState;
@property (nonatomic) long long AVPreviewState;
@property (nonatomic, readonly) _Bool isCaptureInactive;
@property (nonatomic, readonly) _Bool isCapturePreparing;
@property (nonatomic, readonly) _Bool isCaptureActive;
@property (nonatomic, readonly) _Bool isCapturePaused;
@property (nonatomic, readonly) _Bool isCaptureActiveOrPreparing;
@property (nonatomic, readonly) _Bool isCaptureActiveOrPreparingOrResumable;
@property (nonatomic, readonly) _Bool isPreviewInactive;
@property (nonatomic, readonly) _Bool isPreviewPreparing;
@property (nonatomic, readonly) _Bool isPreviewActive;
@property (nonatomic, readonly) _Bool isPreviewActiveOrPreparing;

+ (_Bool)supportsSecureCoding;
+ (id)inactiveState;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_assetStateByTransitioningItermediateStatesToGoalStates;
- (id)assetStateByChangingToCaptureState:(long long)arg1;
- (id)_assetStateByChangingToCaptureState:(long long)arg1 previewState:(long long)arg2;
- (id)assetStateByChangingToPreviewState:(long long)arg1;
- (id)assetStateByCaptureState;
- (id)assetStateByTogglingPreview;
- (id)assetStateByChangingToPreviewRate:(float)arg1;

@end
