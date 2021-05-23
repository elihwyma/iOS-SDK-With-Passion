/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SBFMobileKeyBag;

@protocol SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelEducationalMode : NSObject

{
    SBFMobileKeyBag *_keybag;
    _Bool _pendingWipe;
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
- (id)_refreshStateAndNotify:(_Bool)arg1;
- (void)_refreshStateForMkbState:(id)arg1 notify:(_Bool)arg2;

@end
