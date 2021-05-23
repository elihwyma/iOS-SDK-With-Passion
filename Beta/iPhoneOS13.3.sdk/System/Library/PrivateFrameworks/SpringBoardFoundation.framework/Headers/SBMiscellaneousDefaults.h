/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBMiscellaneousDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) long long dataPlanActivationPromptCount;
@property (nonatomic, readonly) _Bool suppressNoSimAlert;
@property (nonatomic, readonly) _Bool walletPreArmForceLockButton;
@property (nonatomic) _Bool suppressAlertsForKeynote;
@property (nonatomic, readonly) _Bool disableAsyncRenderingSurfaceRetention;
@property (nonatomic) _Bool launchWithMallocStackLogging;
@property (nonatomic, readonly) _Bool disableAutomaticMallocStackLogging;
@property (nonatomic) float backlightLevel;

- (void)_bindAndRegisterDefaults;

@end
