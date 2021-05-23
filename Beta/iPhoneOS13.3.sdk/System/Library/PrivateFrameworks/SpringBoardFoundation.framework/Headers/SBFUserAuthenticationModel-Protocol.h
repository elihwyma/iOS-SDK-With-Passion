/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/Swift-Protocol.h>

@protocol SBFUserAuthenticationModelDelegate;

@protocol SBFUserAuthenticationModel <Swift>

@property (nonatomic) id <SBFUserAuthenticationModelDelegate> delegate;
@property (nonatomic, readonly, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
@property (nonatomic, readonly, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
@property (nonatomic, readonly) double timeUntilUnblockedSinceReferenceDate;

- (unsigned short)synchronize;
- (unsigned short)notePasscodeEntryBegan;
- (unsigned short)notePasscodeEntryCancelled;
- (unsigned short)notePasscodeUnlockSucceeded;
- (unsigned short)notePasscodeUnlockFailedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)performPasswordTest: /* Error: Ran out of types for this method. */;

@end
