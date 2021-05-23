/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CAMMomentCaptureSettings : NSObject

{
    NSString *_persistenceUUID;
    long long _flashMode;
    long long _hdrMode;
    _Bool _autoOriginalPhotoDeliveryEnabled;
    long long _lowLightMode;
    unsigned long long _userInitiationTime;
    long long _photoQualityPrioritization;
    _Bool _shouldDisableCameraSwitchingDuringVideoRecording;
    _Bool _autoSpatialOverCaptureEnabled;
}

@property (copy, nonatomic, readonly) NSString *persistenceUUID;
@property (nonatomic, readonly) long long flashMode;
@property (nonatomic, readonly) long long hdrMode;
@property (nonatomic, readonly) _Bool autoOriginalPhotoDeliveryEnabled;
@property (nonatomic, readonly) long long lowLightMode;
@property (nonatomic, readonly) unsigned long long userInitiationTime;
@property (nonatomic, readonly) long long photoQualityPrioritization;
@property (nonatomic, readonly) _Bool shouldDisableCameraSwitchingDuringVideoRecording;
@property (nonatomic, readonly) _Bool autoSpatialOverCaptureEnabled;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithSettings:(id)arg1;

@end
