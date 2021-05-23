/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

@interface CMMotionManagerInternal : NSObject

{
    struct os_unfair_lock_s fSampleLock;
    struct Dispatcher *fAudioAccessoryAccelerometerDispatcher;
    double fAudioAccessoryAccelerometerUpdateInterval;
    CDUnknownBlockType fAudioAccessoryAccelerometerHandler;
    NSOperationQueue *fAudioAccessoryAccelerometerQueue;
    struct Sample {
        double timestamp;
        CDStruct_03942939 acceleration;
        unsigned long long sensorTime;
        unsigned short sequenceNumber;
    } fLatestAudioAccessoryAccelerometerSample;
    struct Dispatcher *fAccelerometerDispatcher;
    double fAccelerometerUpdateInterval;
    CDUnknownBlockType fAccelerometerHandler;
    NSOperationQueue *fAccelerometerQueue;
    double fLastAccelerometerNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_03942939 acceleration;
    } fLatestAccelerometerSample;
    struct Dispatcher *fAmbientPressureDispatcher;
    double fAmbientPressureUpdateInterval;
    CDUnknownBlockType fAmbientPressureHandler;
    NSOperationQueue *fAmbientPressureQueue;
    double fLastAmbientPressureNotificationTimestamp;
    Sample_068dee23 fLatestAmbientPressureSample;
    struct Dispatcher *fCompensatedAmbientPressureDispatcher;
    double fCompensatedAmbientPressureUpdateInterval;
    CDUnknownBlockType fCompensatedAmbientPressureHandler;
    NSOperationQueue *fCompensatedAmbientPressureQueue;
    double fLastCompensatedAmbientPressureNotificationTimestamp;
    Sample_068dee23 fLatestCompensatedAmbientPressureSample;
    struct Dispatcher *fGyroDispatcher;
    double fGyroUpdateInterval;
    CDUnknownBlockType fGyroHandler;
    NSOperationQueue *fGyroQueue;
    double fLastGyroNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_03942939 rotationRate;
        unsigned short sampleNum;
        _Bool fsync;
    } fLatestGyroSample;
    struct Dispatcher *fDeviceMotionDispatcher;
    double fDeviceMotionUpdateInterval;
    CDUnknownBlockType fDeviceMotionHandler;
    NSOperationQueue *fDeviceMotionQueue;
    double fLastDeviceMotionNotificationTimestamp;
    int fDeviceMotionMode;
    unsigned long long fAttitudeReferenceFrame;
    _Bool fCompassCalibrationHud;
    _Bool fIsCompassCalibrated;
    _Bool fIsUsingCalibratedCompass;
    _Bool fHaveSentDeviceRequiresMovementError;
    struct unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client>> fGeomagneticModelProviderClient;
    CDStruct_3e502cbb fGeomagneticModel;
    _Bool fHaveGeomagneticModelData;
    _Bool fHaveSentTrueNorthUnavailableError;
    double fDeviceMotionStartTimestamp;
    CDStruct_bf7dff04 fInitialReferenceRotation;
    _Bool fIsInitialReferenceAvailable;
    struct Dispatcher *fMagnetometerDispatcher;
    double fMagnetometerUpdateInterval;
    CDUnknownBlockType fMagnetometerHandler;
    NSOperationQueue *fMagnetometerQueue;
    double fLastMagnetometerNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_03942939 magneticField;
        float temperature;
    } fLatestMagnetometerSample;
    _Bool fShowsDeviceMovementDisplay;
    struct Dispatcher *fPrivateAccelerometerDataDispatcher;
    CDUnknownFunctionPointerType fPrivateAccelerometerDataCallback;
    void *fPrivateAccelerometerDataCallbackInfo;
    struct Dispatcher *fPrivateGyroDataDispatcher;
    CDUnknownFunctionPointerType fPrivateGyroDataCallback;
    void *fPrivateGyroDataCallbackInfo;
    struct Dispatcher *fPrivateMagnetometerDataDispatcher;
    CDUnknownFunctionPointerType fPrivateMagnetometerDataCallback;
    void *fPrivateMagnetometerDataCallbackInfo;
    struct Dispatcher *fPrivateDeviceMotionDispatcher;
    CDUnknownFunctionPointerType fPrivateDeviceMotionCallback;
    void *fPrivateDeviceMotionCallbackInfo;
    _Bool fPrivateDeviceMotionUse9Axis;
    _Bool fPrivateUseAccelerometer;
    struct CLConnectionClient *fConnection;
    NSObject<OS_dispatch_queue> *fConnectionQueue;
    _Bool fSidebandSensorFusionEnabled;
    _Bool fSidebandSensorFusionLatency;
    _Bool fSidebandSensorFusionSnoop;
    struct unique_ptr<CLIspDataVisitor, std::__1::default_delete<CLIspDataVisitor>> fSidebandVisitor;
    int fPrivatePowerConservationMode;
    CDUnknownFunctionPointerType fPrivateNotificationCallback;
    void *fPrivateNotificationCallbackInfo;
    struct Dispatcher *fPrivateDeviceMotionSensorStatusDispatcher;
    CDUnknownBlockType fDeviceMotionErrorHandler;
    NSOperationQueue *fDeviceMotionErrorQueue;
    _Bool fIsApplicationActive;
    struct unique_ptr<CLDeviceMotionLiteService, std::__1::default_delete<CLDeviceMotionLiteService>> fDeviceMotionLiteService;
    _Bool fAudioAccessoryAccelerometerAvailable;
    NSOperationQueue *_fDeviceMotionLiteClientQueue;
    CDUnknownBlockType _fDeviceMotionLiteFusedHandler;
    NSString *_fDeviceMotionLitePhysicalDeviceID;
}

@property (retain, nonatomic) NSOperationQueue *fDeviceMotionLiteClientQueue;
@property (copy, nonatomic) CDUnknownBlockType fDeviceMotionLiteFusedHandler;
@property (retain, nonatomic) NSString *fDeviceMotionLitePhysicalDeviceID;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)teardownPrivate;

@end
