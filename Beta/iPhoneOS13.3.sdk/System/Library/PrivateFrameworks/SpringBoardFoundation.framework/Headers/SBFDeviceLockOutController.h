/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SBFUserAuthenticationController;

@protocol SBFThermalBlockProvider;

@interface SBFDeviceLockOutController : NSObject

{
    id <SBFThermalBlockProvider> _thermalProvider;
    _Bool _lockedOutCached;
    unsigned long long _lastBlockedStatus;
    SBFUserAuthenticationController *_authenticationController;
}

@property (retain, nonatomic, getter=_authenticationController, setter=_setAuthenticationController:) SBFUserAuthenticationController *authenticationController;
@property (retain, nonatomic, getter=_thermalProvider, setter=_setThermalProvider:) id <SBFThermalBlockProvider> thermalProvider;
@property (nonatomic, getter=_isLockedOutCached, setter=_setLockedOutCached:) _Bool lockedOutCached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isBlocked;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)isTemporarilyBlocked;
- (void)temporaryBlockStatusChanged;
- (_Bool)isPermanentlyBlocked;
- (double)timeIntervalUntilUnblockedSinceReferenceDate;
- (void)_noteLockedOutStateMayHaveChanged:(_Bool)arg1;
- (_Bool)isLockedOut;
- (_Bool)isThermallyBlocked;
- (unsigned long long)deviceBlockStatus;
- (void)_noteLockedOutReasonsMayHaveChanged;
- (void)thermalBlockStatusChanged:(id)arg1;
- (id)initWithThermalController:(id)arg1 authenticationController:(id)arg2;

@end
