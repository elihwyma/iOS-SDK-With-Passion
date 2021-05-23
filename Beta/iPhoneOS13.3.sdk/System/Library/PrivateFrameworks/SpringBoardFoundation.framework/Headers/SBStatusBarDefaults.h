/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBStatusBarDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) NSArray *countryCodesShowingEmergencyOnlyStatus;
@property (nonatomic, readonly) _Bool showBatteryLevel;
@property (nonatomic, readonly) _Bool showBatteryPercentage;
@property (nonatomic, readonly) _Bool suppressStatusBarOverrideForScreenSharing;
@property (nonatomic, readonly) _Bool showOptimalCellDataForCarPlay;
@property (nonatomic, readonly) _Bool showRSSI;
@property (nonatomic, readonly) unsigned long long statusBarLogLevel;
@property (nonatomic, readonly) _Bool showThermalWarning;

- (void)_bindAndRegisterDefaults;

@end
