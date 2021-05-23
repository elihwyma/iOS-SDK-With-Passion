/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBSystemShellInitializationOptions.h>

@interface FBMutableSystemShellInitializationOptions : FBSystemShellInitializationOptions

@property (nonatomic, setter=_setIsLegacyFBSystemApp:) _Bool _isLegacyFBSystemApp;
@property (copy, nonatomic, setter=_setRegisterPostCheckInPreServiceInitializationCallbackBlock:) CDUnknownBlockType _registerPostCheckInPreServiceInitializationCallbackBlock;
@property (copy, nonatomic, setter=_setRegisterLegacyPostInitCallbackBlock:) CDUnknownBlockType _registerLegacyPostInitCallbackBlock;
@property (nonatomic) _Bool initializeReadyForInteraction;
@property (nonatomic) _Bool resetDarkBootState;
@property (nonatomic) _Bool shouldWaitForMigrator;
@property (nonatomic) double systemSleepInterval;
@property (copy, nonatomic) CDUnknownBlockType registerAdditionalServicesBlock;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
