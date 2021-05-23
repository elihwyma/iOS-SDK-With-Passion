/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureSessionConfiguration, AVRunLoopCondition, AVWeakReference, FigCaptureSessionConfiguration, NSError, NSHashTable, NSMutableArray, NSString;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AVCaptureSessionInternal : NSObject

{
    AVWeakReference *weakReference;
    NSString *sessionPreset;
    AVCaptureDevice *adjustingDeviceActiveFormat;
    int beginConfigRefCount;
    FigCaptureSessionConfiguration *sessionConfig;
    struct OpaqueFigCaptureSession *figCaptureSession;
    _Bool figCaptureSessionRunning;
    _Bool figCaptureSessionStarted;
    NSMutableArray *inputs;
    NSMutableArray *outputs;
    NSHashTable *videoPreviewLayers;
    NSMutableArray *connections;
    NSMutableArray *committedAVCaptureSessionConfigurations;
    AVCaptureSessionConfiguration *liveAVCaptureSessionConfiguration;
    NSError *stopError;
    _Bool running;
    _Bool interrupted;
    _Bool usesApplicationAudioSession;
    _Bool automaticallyConfiguresApplicationAudioSession;
    _Bool automaticallyConfiguresCaptureDeviceForWideColor;
    AVRunLoopCondition *runLoopCondition;
    _Bool waitingForFigCaptureSessionToStart;
    _Bool waitingForFigCaptureSessionToStop;
    _Bool waitingForFigCaptureSessionConfigurationToBecomeLive;
    struct OpaqueCMClock *masterClock;
    _Bool notifiesOnMainThread;
    _Bool adjustingVideoDeviceHDREnabled;
    _Bool resetVideoZoomFactorAndMinMaxFrameDurations;
    _Bool authorizedToUseCameraInMultipleForegroundAppLayout;
    _Bool xctestAuthorizedToStealDevice;
    NSObject<OS_dispatch_semaphore> *serverConnectionDiedSemaphore;
    id serverConnectionDiedNotificationToken;
    struct ct_green_tea_logger_s *greenTeaLogger;
    _Bool videoInputDeviceUsed;
}

@end
