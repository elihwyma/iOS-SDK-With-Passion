/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFLockScreenActionContext.h>

@class NSString;

@interface SBFMutableLockScreenActionContext : SBFLockScreenActionContext

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *lockLabel;
@property (retain, nonatomic) NSString *shortLockLabel;
@property (copy, nonatomic) NSString *unlockDestination;
@property (copy, nonatomic) CDUnknownBlockType action;
@property (nonatomic) _Bool requiresUIUnlock;
@property (nonatomic) _Bool deactivateAwayController;
@property (nonatomic) _Bool canBypassPinLock;
@property (nonatomic) _Bool requiresAuthentication;
@property (nonatomic) _Bool wantsBiometricPresentation;
@property (nonatomic) _Bool confirmedNotInPocket;
@property (nonatomic) int source;
@property (nonatomic) int intent;

@end
