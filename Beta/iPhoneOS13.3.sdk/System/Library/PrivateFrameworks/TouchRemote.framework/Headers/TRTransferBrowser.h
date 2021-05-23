/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString, WPTransfer;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, TRTransferBrowserDelegate;

@interface TRTransferBrowser : NSObject

{
    CDStruct_a231404c *_aesContext;
    struct AirPlayPairingSessionPrivate *_pairingSession;
    long long _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    _Bool _started;
    _Bool _waitingOnSemaphore;
    long long _scannerState;
    WPTransfer *_transferSession;
    id <TRTransferBrowserDelegate> _delegate;
    long long _state;
}

@property (weak, nonatomic) id <TRTransferBrowserDelegate> delegate;
@property (nonatomic, readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)defer;
- (void)transferDidFailToStartAdvertising:(id)arg1;
- (void)transferDidFailToStartScanning:(id)arg1;
- (void)transferDidFailWithError:(id)arg1;
- (id)transferDidReceiveData:(id)arg1;
- (void)transferComplete;
- (void)transferDidUpdateAdvertiserState:(id)arg1;
- (void)transferDidUpdateScannerState:(id)arg1;
- (void)_beginScanningIfPowered;
- (int)_runSetupStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;
- (int)_runVerifyStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;
- (id)_didReceiveEncryptedData:(id)arg1;
- (void)_didFinishPairing;

@end
