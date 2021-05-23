/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SBHIDUILockAssertion;

@protocol BSInvalidatable;

@interface SBHIDInterface : NSObject

{
    unsigned long long _lockState;
    NSMutableArray *_assertions;
    id <BSInvalidatable> _dispatchingAssertion;
    SBHIDUILockAssertion *_pocketTouchesAssertion;
    _Bool _proximityDetectionEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isProximityDetectionEnabled) _Bool proximityDetectionEnabled;
@property (nonatomic) _Bool pocketTouchesExpected;

+ (id)sharedInstance;

- (id)init;
- (id)addStartupHIDLockAssertion;
- (void)reevaluateHIDLockAssertionsForSource:(long long)arg1;
- (void)_setLockState:(unsigned long long)arg1 source:(long long)arg2;
- (void)_reevaluateLockStateForSource:(long long)arg1;
- (id)_suspendProximity:(_Bool)arg1 suspendMultitouch:(_Bool)arg2 disableTapToWake:(_Bool)arg3 source:(long long)arg4 reason:(id)arg5;
- (void)resetProximityCalibration;
- (id)suspendProximityDetectionForSource:(long long)arg1 reason:(id)arg2;
- (id)suspendProximityDetectionAndMultitouchForSource:(long long)arg1 disableTapToWake:(_Bool)arg2 reason:(id)arg3;
- (void)removeHIDLockAssertion:(id)arg1 source:(long long)arg2;

@end
