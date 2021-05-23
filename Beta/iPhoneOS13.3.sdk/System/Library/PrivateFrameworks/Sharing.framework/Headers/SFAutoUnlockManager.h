/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, SFAutoUnlockManagerDelegate;

@interface SFAutoUnlockManager : NSObject

{
    id <SFAutoUnlockManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) id <SFAutoUnlockManagerDelegate> delegate;
@property (nonatomic, readonly) double spinnerDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)autoUnlockSupported;
+ (_Bool)autoUnlockEnabled:(unsigned int)arg1;
+ (_Bool)bluetoothAndWiFiEnabled;
+ (void)enableBluetoothAndWiFi;

- (id)init;
- (void)repairCloudPairing;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2;
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1;
- (void)cancelAutoUnlock;
- (void)autoUnlockStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)authPromptInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)keyDeviceLocked:(id)arg1;
- (void)enabledDevice:(id)arg1;
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;
- (void)beganAttemptWithDevice:(id)arg1;
- (void)completedUnlockWithDevice:(id)arg1;
- (void)failedUnlockWithError:(id)arg1;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;
- (void)attemptAutoUnlock;

@end
