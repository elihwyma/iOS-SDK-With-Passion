/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@class CSLockScreenBiometricFailureSettings;

@interface CSLockScreenMesaSettings : PTSettings

{
    _Bool _passcodeRequiredEventsCountAsFailures;
    _Bool _flashRedOnPasscodeRequiredEvents;
    _Bool _successFeedbackWaitsUntilButtonUp;
    CSLockScreenBiometricFailureSettings *_firstFailureSettings;
    CSLockScreenBiometricFailureSettings *_secondFailureSettings;
    CSLockScreenBiometricFailureSettings *_thirdFailureSettings;
    CSLockScreenBiometricFailureSettings *_fourthFailureSettings;
    CSLockScreenBiometricFailureSettings *_fifthFailureSettings;
    double _slowPressDuration;
}

@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *firstFailureSettings;
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *secondFailureSettings;
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *thirdFailureSettings;
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *fourthFailureSettings;
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *fifthFailureSettings;
@property (nonatomic) _Bool passcodeRequiredEventsCountAsFailures;
@property (nonatomic) _Bool flashRedOnPasscodeRequiredEvents;
@property (nonatomic) _Bool successFeedbackWaitsUntilButtonUp;
@property (nonatomic) double slowPressDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
