/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVMomentCaptureSettings : NSObject

{
    long long _uniqueID;
    unsigned long long _userInitiatedCaptureTime;
    long long _torchMode;
    long long _flashMode;
    _Bool _autoRedEyeReductionEnabled;
    long long _digitalFlashMode;
    long long _photoQualityPrioritization;
    long long _HDRMode;
    _Bool _autoOriginalPhotoDeliveryEnabled;
    NSString *_bravoCameraSelectionBehaviorForRecording;
    _Bool _autoSpatialOverCaptureEnabled;
    _Bool _autoDeferredProcessingEnabled;
}

@property (nonatomic, readonly) long long uniqueID;
@property (nonatomic, readonly) unsigned long long userInitiatedCaptureTime;
@property (nonatomic) long long torchMode;
@property (copy, nonatomic) NSString *bravoCameraSelectionBehaviorForRecording;
@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isAutoRedEyeReductionEnabled) _Bool autoRedEyeReductionEnabled;
@property (nonatomic) long long digitalFlashMode;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic) long long HDRMode;
@property (nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) _Bool autoOriginalPhotoDeliveryEnabled;
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) _Bool autoSpatialOverCaptureEnabled;
@property (nonatomic, getter=isAutoDeferredProcessingEnabled) _Bool autoDeferredProcessingEnabled;

+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)arg1 uniqueID:(long long)arg2;
+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)arg1;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithUserInitiatedCaptureTime:(unsigned long long)arg1 uniqueID:(long long)arg2;

@end
