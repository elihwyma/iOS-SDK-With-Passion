/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBackdropViewSettings.h>

__attribute__((visibility("hidden")))
@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings

{
    _UIBackdropViewSettings *_inputSettingsA;
    _UIBackdropViewSettings *_inputSettingsB;
    double _weighting;
    _UIBackdropViewSettings *_outputSettingsA;
    _UIBackdropViewSettings *_outputSettingsB;
}

@property (retain, nonatomic) _UIBackdropViewSettings *outputSettingsA;
@property (retain, nonatomic) _UIBackdropViewSettings *outputSettingsB;
@property (retain, nonatomic) _UIBackdropViewSettings *inputSettingsA;
@property (retain, nonatomic) _UIBackdropViewSettings *inputSettingsB;
@property (nonatomic) double weighting;

- (void)setDefaultValues;
- (void)setRequiresColorStatistics:(_Bool)arg1;
- (void)computeOutputSettingsUsingModel:(id)arg1;
- (_Bool)requiresBackdropLayer;
- (void)copyAdditionalSettingsFromSettings:(id)arg1;
- (_Bool)isBackdropVisible;

@end
