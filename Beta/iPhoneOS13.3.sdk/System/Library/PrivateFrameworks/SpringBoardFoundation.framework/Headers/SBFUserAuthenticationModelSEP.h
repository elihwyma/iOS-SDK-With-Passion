/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class MCProfileConnection, NSString, SBFMobileKeyBag, SBSecurityDefaults;

@protocol SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelSEP : NSObject

{
    SBFMobileKeyBag *_keybag;
    double _unblockTime;
    _Bool _permanentlyBlocked;
    _Bool _pendingWipe;
    SBSecurityDefaults *_securityDefaults;
    MCProfileConnection *_profileConnection;
    id <SBFUserAuthenticationModelDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <SBFUserAuthenticationModelDelegate> delegate;
@property (nonatomic, readonly, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
@property (nonatomic, readonly, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
@property (nonatomic, readonly) double timeUntilUnblockedSinceReferenceDate;

- (void)synchronize;
- (id)initWithKeyBag:(id)arg1;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)noteNewMkbDeviceLockState:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)performPasswordTest:(CDUnknownBlockType)arg1;
- (void)refreshBlockedState;
- (void)clearBlockedState;
- (void)_refreshStateAndNotify:(_Bool)arg1;
- (void)_refreshStateForMkbState:(id)arg1 notify:(_Bool)arg2;
- (id)_initWithKeyBag:(id)arg1 profileConnection:(id)arg2;
- (id)descriptionBuilder;
- (_Bool)_isDeviceWipePreferenceEnabled;

@end
