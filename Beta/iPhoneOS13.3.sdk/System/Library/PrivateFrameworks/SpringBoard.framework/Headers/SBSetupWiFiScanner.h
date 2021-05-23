/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSThread;

@interface SBSetupWiFiScanner : NSObject

{
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    NSThread *_scanningThread;
    CDUnknownBlockType _completionHandler;
    long long _state;
}

@property (retain, getter=_scanningThread, setter=_setScanningThread:) NSThread *scanningThread;
@property (copy, getter=_completionHandler, setter=_setCompletionHandler:) CDUnknownBlockType completionHandler;
@property (nonatomic, getter=_state, setter=_setState:) long long state;

- (void)dealloc;
- (void)cancel;
- (void)beginScanningWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_thread_closeWifiConnection;
- (void)_wifiScanningThread;
- (void)_thread_callCompletionHandlerWithGuessedCountries:(id)arg1;
- (void)_thread_cancelScanning;
- (void)_thread_wifiScanComplete:(struct __CFArray *)arg1 error:(_Bool)arg2;

@end
