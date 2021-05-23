/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBInitialRestartState.h>

@class SBBootDefaults;

@interface SBMutableInitialRestartState : SBInitialRestartState

@property (nonatomic, getter=isAuthenticated) _Bool authenticated;
@property (nonatomic, getter=isInLostMode) _Bool inLostMode;
@property (nonatomic, getter=isBlocked) _Bool blocked;
@property (nonatomic) _Bool requiresSetup;
@property (nonatomic) _Bool hasPasscodeSet;
@property (nonatomic) _Bool shouldNeverLock;
@property (nonatomic, getter=isLoginSession) _Bool loginSession;
@property (retain, nonatomic) SBBootDefaults *bootDefaults;
@property (nonatomic, getter=isForSimulator) _Bool forSimulator;

@end
