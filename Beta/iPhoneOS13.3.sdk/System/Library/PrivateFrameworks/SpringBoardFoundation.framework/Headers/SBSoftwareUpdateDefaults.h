/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBSoftwareUpdateDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=hasDeveloperInstallBrickAlertShown7DayWarning) _Bool developerInstallBrickAlertShown7DayWarning;
@property (nonatomic, getter=hasDeveloperInstallBrickAlertShown3DayWarning) _Bool developerInstallBrickAlertShown3DayWarning;
@property (nonatomic, getter=hasDeveloperInstallBrickAlertShownTomorrowWarning) _Bool developerInstallBrickAlertShownTomorrowWarning;

- (void)_bindAndRegisterDefaults;
- (void)clearDeveloperInstallBrickAlerts;

@end
