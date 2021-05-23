/*
 Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

#import <Foundation/NSObject.h>

@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject

{
    CDUnknownFunctionPointerType _deviceStateChangedCallback;
    void *_deviceStateChangedContext;
    CDUnknownFunctionPointerType _volumeChangedCallback;
    void *_volumeChangedContext;
    CDUnknownFunctionPointerType _pauseOnHeadphoneDisconnectChangedCallback;
    void *_pauseOnHeadphoneDisconnectChangedContext;
    CDUnknownFunctionPointerType _volumeControlSupportChangedCallback;
    void *_volumeControlSupportChangedContext;
    CPDistributedNotificationCenter *_dnCenter;
    CPDistributedNotificationCenter *_dnCenteriAP2;
    struct __CFRunLoop *_dnCenterRunLoop;
    NSLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_handleiAPDaemonDied:(id)arg1;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)_deviceStateChanged:(id)arg1;
- (void)_volumeChanged:(id)arg1;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)arg1;
- (void)_volumeControlSupportChanged:(id)arg1;
- (void)setupDeviceStateChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)clearDeviceStateChangedCallback;
- (void)setupVolumeChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)clearVolumeChangedCallback;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)setupVolumeControlSupportChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)clearVolumeControlSupportChangedCallback;

@end
