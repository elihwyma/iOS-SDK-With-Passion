/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

#import <CoverSheet/Swift-Protocol.h>

@class NSHashTable, NSMutableSet, NSString;

@protocol BSInvalidatable, SBUIBiometricResource;

@interface CSUserPresenceMonitor : NSObject <Swift>

{
    id <SBUIBiometricResource> _biometricResource;
    NSMutableSet *_activationReasons;
    id <BSInvalidatable> _faceDetectAssertion;
    NSHashTable *_observers;
    _Bool _userPresenceDetectedSinceWake;
}

@property (nonatomic, readonly) _Bool userPresenceDetectedSinceWake;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)_handleBiometricEvent:(unsigned long long)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)disableDetectionForReason:(id)arg1;
- (_Bool)isUserPresenceDetectionSupported;
- (void)enableDetectionForReason:(id)arg1;
- (id)initWithBiometricResource:(id)arg1;
- (void)_updateFaceDetectionState;
- (void)_setUserPresenceDetectedSinceWake:(_Bool)arg1;
- (_Bool)_isFaceDetectPermitted;

@end
