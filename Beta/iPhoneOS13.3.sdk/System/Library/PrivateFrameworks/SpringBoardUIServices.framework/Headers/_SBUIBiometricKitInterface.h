/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSObject.h>

#import <SpringBoardUIServices/Swift-Protocol.h>

@class BKDevicePearl, BKDeviceTouchID, NSSet, NSString;

@protocol OS_dispatch_queue, _SBUIBiometricKitInterfaceDelegate;

@interface _SBUIBiometricKitInterface : NSObject <Swift>

{
    NSSet *_biometricDevices;
    unsigned long long _enrolledIdentitiesCount;
    int _enrollmentChangedNotifyToken;
    _Bool _isFingerDetected;
    BKDeviceTouchID *_mesaDevice;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BKDevicePearl *_pearlDevice;
    id <_SBUIBiometricKitInterfaceDelegate> _delegate;
}

@property (nonatomic, readonly, getter=isTouchIDCapable) _Bool touchIDCapable;
@property (nonatomic, readonly, getter=isPearlIDCapable) _Bool pearlIDCapable;
@property (nonatomic) id <_SBUIBiometricKitInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isFingerOn;
- (void)forceBioLockout;
- (void)operation:(id)arg1 stateChanged:(long long)arg2;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)operation:(id)arg1 presenceStateChanged:(_Bool)arg2;
- (void)matchOperation:(id)arg1 matchedWithResult:(id)arg2;
- (void)matchOperation:(id)arg1 failedWithReason:(long long)arg2;
- (unsigned long long)lockoutState;
- (_Bool)enableBackgroundFingerDetection:(_Bool)arg1 error:(id *)arg2;
- (void)matchOperation:(id)arg1 providedFeedback:(long long)arg2;
- (_Bool)hasEnrolledIdentities;
- (void)_setTracker:(id)arg1 forOperation:(id)arg2;
- (id)_createPresenceDetectOperationsForDeviceTypes:(id)arg1 error:(id *)arg2;
- (void)_sendDelegateEvent:(unsigned long long)arg1;
- (id)_trackerForOperation:(id)arg1;
- (unsigned long long)_eventForLockoutState:(long long)arg1;
- (void)_sendDelegateEventForFeedback:(long long)arg1;
- (unsigned long long)_biometricEventForFaceDetectFeedback:(long long)arg1;
- (id)createPearlDevice;
- (id)createMatchOperationsWithMode:(unsigned long long)arg1 andCredentialSet:(id)arg2 error:(id *)arg3;
- (id)createPresenceDetectOperationsWithError:(id *)arg1;
- (id)createFingerDetectOperationsWithError:(id *)arg1;
- (id)createFaceDetectOperationsWithError:(id *)arg1;

@end
