/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

@class NSString, OKProducerPreset;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettings : PXSettings

{
    _Bool _allowUserInteractivity;
    _Bool _slideshowSettingsEnableFullscreenSupport;
    OKProducerPreset *_currentPreset;
    double _interactiveTransitionFingerTrackingBoxRadiusMinValue;
    double _interactiveTransitionFingerTrackingBoxRadiusMaxValue;
    double _interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
    double _interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
    double _interactiveTransitionProgressThresholdMinValue;
    double _interactiveTransitionProgressThresholdMaxValue;
    double _interactiveTransitionProgressThresholdDefaultValue;
    double _interactiveTransitionProgressThresholdIncrementValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
    NSString *_currentPresetUniqueIdentifier;
}

@property (nonatomic) _Bool allowUserInteractivity;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMinValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMaxValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
@property (nonatomic) double interactiveTransitionProgressThresholdMinValue;
@property (nonatomic) double interactiveTransitionProgressThresholdMaxValue;
@property (nonatomic) double interactiveTransitionProgressThresholdDefaultValue;
@property (nonatomic) double interactiveTransitionProgressThresholdIncrementValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
@property (nonatomic) _Bool slideshowSettingsEnableFullscreenSupport;
@property (retain, nonatomic) OKProducerPreset *currentPreset;
@property (retain, nonatomic) NSString *currentPresetUniqueIdentifier;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setDefaultValues;
- (id)parentSettings;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (void)performPostSaveActions;
- (void)removeTransitionTimingCustomizationsFromUserDefaults;
- (void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;
- (_Bool)transitionSettingsAreDefaults;
- (void)saveInteractiveSlideshowSettingsInUserDefaults;
- (void)setDefaultPresetTransitionValues;

@end
