/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SBLockScreenOrientationManager : NSObject

{
    NSDate *_updateForAmbiguousOrientationsAfterDate;
    _Bool _wasUILocked;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)assistantDidAppear:(id)arg1;
- (void)updateInterfaceOrientationWithRequestedOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_lockStateChanged:(id)arg1;
- (void)_updateDeviceOrientationIfNeededForPhoneUnlockToOrientation:(long long)arg1;

@end
