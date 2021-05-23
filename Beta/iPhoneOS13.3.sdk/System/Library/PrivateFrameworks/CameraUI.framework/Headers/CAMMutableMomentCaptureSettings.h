/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMMomentCaptureSettings.h>

@class NSString;

@interface CAMMutableMomentCaptureSettings : CAMMomentCaptureSettings

@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) long long flashMode;
@property (nonatomic) long long hdrMode;
@property (nonatomic) _Bool autoOriginalPhotoDeliveryEnabled;
@property (nonatomic) long long lowLightMode;
@property (nonatomic) unsigned long long userInitiationTime;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic) _Bool shouldDisableCameraSwitchingDuringVideoRecording;
@property (nonatomic) _Bool autoSpatialOverCaptureEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
