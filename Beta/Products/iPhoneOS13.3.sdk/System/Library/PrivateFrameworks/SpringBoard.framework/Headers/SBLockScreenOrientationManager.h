/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLockScreenOrientationManager : NSObject <SBAssistantObserver> {
    NSDate * _updateForAmbiguousOrientationsAfterDate;
    bool  _wasUILocked;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lockStateChanged:(id)arg1;
- (void)_updateDeviceOrientationIfNeededForPhoneUnlockToOrientation:(long long)arg1;
- (void)assistantDidAppear:(id)arg1;
- (id)init;
- (void)updateInterfaceOrientationWithRequestedOrientation:(long long)arg1 animated:(bool)arg2;

@end