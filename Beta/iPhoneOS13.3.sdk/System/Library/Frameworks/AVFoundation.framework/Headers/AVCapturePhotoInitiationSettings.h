/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCapturePhotoInitiationSettingsInternal;

@interface AVCapturePhotoInitiationSettings : NSObject

{
    AVCapturePhotoInitiationSettingsInternal *_internal;
}

@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long uniqueID;
@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isAutoStillImageStabilizationEnabled) _Bool autoStillImageStabilizationEnabled;
@property (nonatomic) long long HDRMode;
@property (nonatomic) _Bool burstQualityCaptureEnabled;

+ (id)photoInitiationSettingsWithUserInitiatedRequestTimestamp:(unsigned long long)arg1;

- (void)dealloc;
- (id)_initWithTimestamp:(unsigned long long)arg1;

@end
