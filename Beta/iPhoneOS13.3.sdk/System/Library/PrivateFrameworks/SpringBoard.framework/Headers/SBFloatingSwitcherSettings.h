/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class MTLumaDodgePillSettings;

@interface SBFloatingSwitcherSettings : PTSettings

{
    _Bool _showFloats;
    double _switcherCardScale;
    double _cardSpacing;
    double _dimmingAlpha;
    double _leadingEdgeRubberbandingRange;
    double _perCardAdditionalScaleCoefficient;
    double _scaleCurveExponent;
    double _opacityMinimumDistanceThreshold;
    double _opacityFadeDistance;
    double _darkeningMinimumDistanceThreshold;
    double _darkeningFadeDistance;
    double _maximumDarkening;
    double _titleAndIconOpacityMinimumDistanceThreshold;
    double _titleAndIconOpacityFadeDistance;
    double _titleOpacityMinimumDistanceThreshold;
    double _titleOpacityFadeDistance;
    double _overshootPullbackDelayOffscreen;
    double _overshootPullbackDelayOnscreen;
    MTLumaDodgePillSettings *_homeAffordanceSettings;
}

@property _Bool showFloats;
@property double switcherCardScale;
@property double cardSpacing;
@property double dimmingAlpha;
@property double leadingEdgeRubberbandingRange;
@property double perCardAdditionalScaleCoefficient;
@property double scaleCurveExponent;
@property double opacityMinimumDistanceThreshold;
@property double opacityFadeDistance;
@property double darkeningMinimumDistanceThreshold;
@property double darkeningFadeDistance;
@property double maximumDarkening;
@property double titleAndIconOpacityMinimumDistanceThreshold;
@property double titleAndIconOpacityFadeDistance;
@property double titleOpacityMinimumDistanceThreshold;
@property double titleOpacityFadeDistance;
@property double overshootPullbackDelayOffscreen;
@property double overshootPullbackDelayOnscreen;
@property (retain) MTLumaDodgePillSettings *homeAffordanceSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)archiveValueForKey:(id)arg1;

@end
