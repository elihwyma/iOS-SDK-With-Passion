/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class MCProfileConnection, NSDictionary, NSString, SBSecurityDefaults;

@protocol OS_dispatch_queue, SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelJournaledDefaults : NSObject

{
    MCProfileConnection *_profileConnection;
    SBSecurityDefaults *_securityDefaults;
    NSString *_journalPath;
    NSObject<OS_dispatch_queue> *_persistentStateQueue;
    _Bool _speculativePasscodeFailureChargeOutstanding;
    NSDictionary *_originalDefaultsForRollback;
    _Bool _pendingWipe;
    _Bool _permanentlyBlocked;
    double _unblockTime;
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

+ (id)_journaledDefaultsAndTypes;

- (id)init;
- (void)synchronize;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)performPasswordTest:(CDUnknownBlockType)arg1;
- (void)clearBlockedState;
- (_Bool)_isDeviceWipePreferenceEnabled;
- (id)_initWithJournalPath:(id)arg1 securityDefaults:(id)arg2 profileConnection:(id)arg3;
- (void)_loadLockControllerDefaultsJournalIfNecessary;
- (void)_persistentStateQueue_loadLockState;
- (void)_persistentStateQueue_beginSpeculativeFailureCharge;
- (void)_persistentStateQueue_cancelSpeculativeFailureCharge;
- (void)_persistentStateQueue_unlockSucceeded;
- (void)_persistentStateQueue_unlockFailedWithError:(id)arg1;
- (void)_persistentStateQueue_clearBlockedState;
- (void)_evaluatePendingWipe;
- (void)_persistentStateQueue_evaluatePendingWipe;
- (id)updateLockControllerDefaultsWithBlock:(CDUnknownBlockType)arg1 journaled:(_Bool)arg2;
- (void)_loadLockControllerDefaults:(id)arg1;
- (id)_copyLockControllerDefaults;
- (void)_updateLockControllerDefaultsJournal;
- (void)test_reloadState;

@end
