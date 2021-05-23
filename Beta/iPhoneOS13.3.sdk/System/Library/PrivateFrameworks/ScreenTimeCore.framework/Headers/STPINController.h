/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSDate, STCoreUser;

@protocol OS_dispatch_source;

@interface STPINController : NSObject

{
    NSDate *_timeoutEndDate;
    STCoreUser *_user;
    NSObject<OS_dispatch_source> *_backoffTimer;
}

@property (nonatomic, readonly) STCoreUser *user;
@property (retain) NSObject<OS_dispatch_source> *backoffTimer;
@property (copy) NSDate *timeoutEndDate;

+ (unsigned long long)pinLength;

- (id)initWithUser:(id)arg1;
- (void)_beginTimeoutUntilDate:(id)arg1;
- (void)_setNewPIN:(id)arg1 currentPIN:(id)arg2 recoveryAppleIDPrompt:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_isPINValid:(id)arg1;
- (_Bool)_setPasscode:(id)arg1 recoveryAppleID:(id)arg2 forUser:(id)arg3 error:(id *)arg4;
- (_Bool)_saveChangesForUser:(id)arg1 error:(id *)arg2;
- (_Bool)_authenticateWithPIN:(id)arg1 forUser:(id)arg2 error:(id *)arg3;
- (id)_timeoutEndDateForAttemptNumber:(long long)arg1;
- (void)setPIN:(id)arg1 withRecoveryAppleIDPrompt:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePIN:(id)arg1 toPIN:(id)arg2 withRecoveryAppleIDPrompt:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removePIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)authenticateWithPIN:(id)arg1 error:(id *)arg2;
- (void)authenticateWithPIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
