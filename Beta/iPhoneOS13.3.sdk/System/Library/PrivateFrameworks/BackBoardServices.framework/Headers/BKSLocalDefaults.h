/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSArray, NSDictionary, NSString;

@interface BKSLocalDefaults : BSAbstractDefaultDomain

{
    _Bool _disableStudyLogAccelerometerLogging;
    _Bool _disableStudyLogALSLogging;
    _Bool _disableStudyLogGyroLogging;
}

@property (nonatomic) _Bool ignoreAccelerometerAndOrientationEvents;
@property (nonatomic, getter=isALSEnabled) _Bool ALSEnabled;
@property (nonatomic) long long ALSEpoch;
@property (retain, nonatomic) NSDictionary *ALSUserPreferences;
@property (nonatomic) float ALSDelayOnUnlock;
@property (nonatomic) int brightnessCurve;
@property (nonatomic) _Bool ignoreTetheringPreferences;
@property (nonatomic, getter=isDitheringEnabled) _Bool ditheringEnabled;
@property (nonatomic) _Bool simulatePhoneButton;
@property (nonatomic, getter=isDigitizerSignpostsEnabled) _Bool digitizerSignpostsEnabled;
@property (nonatomic) _Bool digitizerVisualizeTouches;
@property (nonatomic) _Bool digitizerVisualizeHitTestRegions;
@property (nonatomic) _Bool showBuildNumber;
@property (weak, nonatomic) NSArray *loggingTypesEnabled;
@property (nonatomic) float fenceArbiterTimeoutInterval;
@property (weak, nonatomic) NSString *forceMirroredOrientation;
@property (nonatomic) _Bool hideAppleLogoOnLaunch;
@property (nonatomic, getter=isSteveNoteRotationEnabled) _Bool steveNoteRotationEnabled;
@property (nonatomic) _Bool disableCloneMirroring;
@property (nonatomic) _Bool disableCAOverscan;
@property (nonatomic) _Bool disableCAYUV;
@property (nonatomic) _Bool disableCAScaling;
@property (nonatomic, getter=isSteveNoteOverscanEnabled) _Bool steveNoteOverscanEnabled;
@property (nonatomic) _Bool forceCloneMirroring;
@property (nonatomic) _Bool disableStudyLogBTKeyboardEventLogging;
@property (nonatomic) _Bool disableStudyLogBTKeyboardEventRedirection;
@property (nonatomic) _Bool disableStudyLogVolumeKeyLogging;
@property (nonatomic) _Bool disableStudyLogHomeButtonLogging;
@property (nonatomic) _Bool disableStudyLogButtonLogging;
@property (nonatomic) _Bool disableStudyLogCameraKeyLogging;
@property (nonatomic) _Bool disableStudyLogPowerButtonLogging;
@property (nonatomic) _Bool disableStudyLogAccelerometerLogging;
@property (nonatomic) _Bool disableStudyLogALSLogging;
@property (nonatomic) _Bool disableStudyLogGyroLogging;

- (id)init;
- (void)_bindAndRegisterDefaults;
- (void)migrateDefaultsIfNecessary;

@end
