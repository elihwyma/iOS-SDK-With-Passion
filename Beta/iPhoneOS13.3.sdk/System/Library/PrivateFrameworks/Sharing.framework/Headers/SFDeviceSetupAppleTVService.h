/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class HMDeviceSetupOperationHandler, SFClient, SFDeviceOperationHandlerCDPSetup, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession, TVLAudioLatencyEstimator;

@protocol OS_dispatch_queue;

@interface SFDeviceSetupAppleTVService : NSObject

{
    _Bool _activateCalled;
    _Bool _advertiseFast;
    _Bool _invalidateCalled;
    SFClient *_preventExitForLocaleClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    TVLAudioLatencyEstimator *_tvLatencyEstimator;
    _Bool _tvLatencyFinalReported;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    _Bool _prefCDPEnabled;
    _Bool _prefTVLatency;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleBasicConfigRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleTVLatencyProgressEvent:(unsigned long long)arg1 info:(id)arg2;
- (void)_handleTVLatencyRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_reportProgress:(unsigned int)arg1 info:(id)arg2;

@end
