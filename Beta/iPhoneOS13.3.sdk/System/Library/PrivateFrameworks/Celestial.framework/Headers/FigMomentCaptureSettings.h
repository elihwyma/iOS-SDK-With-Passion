/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@interface FigMomentCaptureSettings : NSObject <Swift>

{
    long long _settingsID;
    unsigned long long _userInitiatedCaptureTime;
    int _torchMode;
    int _flashMode;
    _Bool _autoRedEyeReductionEnabled;
    int _digitalFlashMode;
    int _qualityPrioritization;
    int _HDRMode;
    _Bool _autoOriginalPhotoDeliveryEnabled;
    _Bool _autoSpatialOverCaptureEnabled;
    _Bool _autoDeferredProcessingEnabled;
}

@property (nonatomic, readonly) long long settingsID;
@property (nonatomic, readonly) unsigned long long userInitiatedCaptureTime;
@property (nonatomic) int torchMode;
@property (nonatomic) int flashMode;
@property (nonatomic) _Bool autoRedEyeReductionEnabled;
@property (nonatomic) int digitalFlashMode;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) int HDRMode;
@property (nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) _Bool autoOriginalPhotoDeliveryEnabled;
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) _Bool autoSpatialOverCaptureEnabled;
@property (nonatomic, getter=isAutoDeferredProcessingEnabled) _Bool autoDeferredProcessingEnabled;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingsID:(long long)arg1 userInitiatedCaptureTime:(unsigned long long)arg2;

@end
