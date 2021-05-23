/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CUBluetoothClient, NSString, SDStatusMonitor, SFBluetoothPairingSession, SFProxCardSessionClient, SFService, SFSession;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFShareAudioService : NSObject

{
    NSString *_guestDeviceAddress;
    NSString *_headphonesAddress;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    SFBluetoothPairingSession *_pairingSession;
    SFProxCardSessionClient *_proxCardSessionClient;
    CDUnknownBlockType _responseHandler;
    SFService *_sfService;
    SFSession *_sfSession;
    CUBluetoothClient *_searchBTClient;
    NSObject<OS_dispatch_source> *_searchTimer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SDStatusMonitor *_statusMonitor;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SDStatusMonitor *statusMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)activate;
- (void)xpcPerformAction:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sfServiceStart;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleSessionEnded:(id)arg1 error:(id)arg2;
- (void)_handleShareAudioRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleShareAudioRequest2:(id)arg1 contact:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleShareAudioResponse:(int)arg1 error:(id)arg2;
- (void)_handleShareAudioSearchTimeout;
- (void)_handleShareAudioFoundDevice:(id)arg1;
- (void)_handleShareAudioPairingCompleted:(id)arg1 error:(id)arg2;

@end
