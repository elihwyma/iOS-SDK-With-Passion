/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, HMDeviceSetupOperationHandler, SFDeviceOperationHandlerCDPSetup, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession;

@protocol OS_dispatch_queue;

@interface SFDeviceRepairService : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    unsigned int _invalidateFlags;
    SFService *_sfService;
    SFSession *_sfSession;
    struct __WiFiManagerClient *_wifiManager;
    ACAccountStore *_accountStore;
    _Bool _prefCDPEnabled;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _problemFlags;
    CDUnknownBlockType _progressHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long problemFlags;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)activate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleGetProblemsRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleTRCompanionAuthenticationRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleTRProxyDeviceRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleTRProxyAuthenticationRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (long long)_nextServiceTypeForTRAccountServices:(id)arg1;
- (void)_authenticateWithServiceTypes:(id)arg1 authResults:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 companionDevice:(id)arg3 anisetteDataProvider:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_saveRemoteVerifiedAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_nextTRServiceTypeForTRAccountServices:(id)arg1;
- (void)_authenticateWithServiceType:(unsigned long long)arg1 authResults:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_authenticateiCloudWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_authenticateiTunesWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
