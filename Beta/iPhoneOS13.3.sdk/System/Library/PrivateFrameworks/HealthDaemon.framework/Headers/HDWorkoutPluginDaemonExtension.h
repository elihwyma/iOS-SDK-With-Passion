/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAlertSuppressor, HDAppLauncher, HDBackgroundWorkoutRunner, HDCarouselServicesManager, HDCoreMotionWorkoutInterface, HDDaemon, HDHeartRateRecoveryManager, HDPowerSavingModeManager, HDQuietModeManager, NSString;

@interface HDWorkoutPluginDaemonExtension : NSObject

{
    HDDaemon *_daemon;
    HDAlertSuppressor *_alertSuppressor;
    HDAppLauncher *_appLauncher;
    HDBackgroundWorkoutRunner *_backgroundWorkoutRunner;
    HDCarouselServicesManager *_carouselServicesManager;
    HDCoreMotionWorkoutInterface *_coreMotionWorkoutInterface;
    HDHeartRateRecoveryManager *_heartRateRecoveryManager;
    HDPowerSavingModeManager *_powerSavingModeManager;
    HDQuietModeManager *_quietModeManager;
}

@property (weak, nonatomic, readonly) HDDaemon *daemon;
@property (nonatomic, readonly) HDAlertSuppressor *alertSuppressor;
@property (nonatomic, readonly) HDAppLauncher *appLauncher;
@property (nonatomic, readonly) HDBackgroundWorkoutRunner *backgroundWorkoutRunner;
@property (nonatomic, readonly) HDCarouselServicesManager *carouselServicesManager;
@property (nonatomic, readonly) HDCoreMotionWorkoutInterface *coreMotionWorkoutInterface;
@property (nonatomic, readonly) HDHeartRateRecoveryManager *heartRateRecoveryManager;
@property (nonatomic, readonly) HDPowerSavingModeManager *powerSavingModeManager;
@property (nonatomic, readonly) HDQuietModeManager *quietModeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDaemon:(id)arg1;

@end
