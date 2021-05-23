/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARImageSensorSettings, ARWorldMap, NSDictionary, NSMutableDictionary, NSString;

@protocol OS_dispatch_semaphore;

@interface ARWorldTrackingOptions : NSObject <Swift>

{
    NSMutableDictionary *_activeVideoFormatsMap;
    NSObject<OS_dispatch_semaphore> *_activeVideoFormatsSemaphore;
    _Bool _relocalizationEnabled;
    _Bool _deterministicMode;
    _Bool _mlModelEnabled;
    _Bool _deliverRawSceneUnderstandingResults;
    _Bool _collaborationEnabled;
    ARImageSensorSettings *_imageSensorSettings;
    ARImageSensorSettings *_imageSensorSettingsForSuperWide;
    NSString *_deviceModel;
    ARWorldMap *_initialWorldMap;
    NSString *_slamConfiguration;
    unsigned long long _planeDetection;
    double _minVergenceAngle;
}

@property (copy, nonatomic) ARImageSensorSettings *imageSensorSettings;
@property (copy, nonatomic) ARImageSensorSettings *imageSensorSettingsForSuperWide;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) _Bool relocalizationEnabled;
@property (copy, nonatomic) ARWorldMap *initialWorldMap;
@property (copy, nonatomic) NSString *slamConfiguration;
@property (nonatomic) _Bool deterministicMode;
@property (nonatomic) unsigned long long planeDetection;
@property (nonatomic) double minVergenceAngle;
@property (nonatomic) _Bool mlModelEnabled;
@property (nonatomic) _Bool deliverRawSceneUnderstandingResults;
@property (nonatomic, getter=isCollaborationEnabled) _Bool collaborationEnabled;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSDictionary *activeVideoFormatsMap;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageSensorSettings:(id)arg1;
- (void)updateCameraMap;
- (unsigned int)cameraIdForCaptureDeviceType:(id)arg1;
- (_Bool)shouldUseSuperWide;
- (int)setupCameraCalibration:(struct CV3DSLAMCalibration **)arg1 forImageSensorSettings:(id)arg2 deviceModel:(int)arg3;
- (int)createSLAMCalibration:(struct CV3DSLAMCalibration **)arg1;
- (void)createSLAMConfig:(struct CV3DSLAMConfig **)arg1;

@end
