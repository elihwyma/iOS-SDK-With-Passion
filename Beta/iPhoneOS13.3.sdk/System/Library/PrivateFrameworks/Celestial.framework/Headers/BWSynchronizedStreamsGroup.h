/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFigVideoCaptureStream, NSArray, NSDictionary, NSMutableDictionary;

@interface BWSynchronizedStreamsGroup : NSObject

{
    struct OpaqueFigCaptureSynchronizedStreamsGroup *_synchronizedStreamsGroup;
    NSDictionary *_synchronizedStreamsGroupSupportedProperties;
    NSArray *_streams;
    NSArray *_portTypes;
    NSDictionary *_cameraViewMatricesByPortType;
    NSDictionary *_cameraPoseMatricesByPortType;
    NSMutableDictionary *_baseZoomFactorsByPortType;
    NSMutableDictionary *_clientBaseZoomFactorsByPortType;
    struct OpaqueFigCaptureStream *_synchronizationMaster;
    _Bool _readOnly;
    _Bool _atomicMasterSlaveReconfigurationSupported;
    _Bool _masterConfigurationSupported;
    NSDictionary *_currentMasterConfiguration;
    _Bool _sensorToOutputSkippingEnabled;
    int _maximumNumberOfSlaveStreamsWithoutFrameSkipping;
    int _maximumNumberOfEnabledSlaveTimeMachines;
    BWFigVideoCaptureStream *_cameraControlsStatisticsMasterStream;
    _Bool _statsMasterHasBeenSet;
}

@property (nonatomic, readonly) struct OpaqueFigCaptureSynchronizedStreamsGroup *syncGroup;
@property (nonatomic, readonly) NSArray *portTypes;
@property (nonatomic, readonly) struct OpaqueFigCaptureStream *synchronizationMaster;
@property (nonatomic, readonly) _Bool minimumMasterToSlaveFrameRateRatioSupported;
@property (nonatomic, readonly) _Bool maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
@property (nonatomic, readonly) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic, readonly) NSDictionary *clientBaseZoomFactorsByPortType;
@property (nonatomic, readonly) BWFigVideoCaptureStream *cameraControlsStatisticsMasterStream;

+ (void)initialize;
+ (int)resetAllSynchronizedStreamsGroupsForDevice:(struct OpaqueFigCaptureDevice *)arg1;

- (void)dealloc;
- (int)_getViewAndPoseMatrices;
- (int)_computeBaseZoomFactors;
- (id)_slaveConfigurationForStream:(id)arg1;
- (id)_worldPortType;
- (id)initWithStreams:(id)arg1 device:(struct OpaqueFigCaptureDevice *)arg2 readOnly:(_Bool)arg3 baseZoomFactorOverrides:(id)arg4;
- (id)cameraViewMatrixForPortType:(id)arg1;
- (id)cameraPoseMatrixForPortType:(id)arg1;
- (_Bool)supportsProperty:(struct __CFString *)arg1;
- (int)setMasterStream:(id)arg1 allStreams:(id)arg2;
- (int)setCameraControlsStatisticsMasterStream:(id)arg1;
- (unsigned int)minimumMasterToSlaveFrameRateRatio;
- (void)setMinimumMasterToSlaveFrameRateRatio:(unsigned int)arg1;
- (void)setMaximumNumberOfSlaveStreamsWithoutFrameSkipping:(int)arg1;
- (void)setMaximumNumberOfEnabledSlaveTimeMachines:(int)arg1;
- (int)_getSynchronizationMasterFromStreams:(id)arg1;

@end
