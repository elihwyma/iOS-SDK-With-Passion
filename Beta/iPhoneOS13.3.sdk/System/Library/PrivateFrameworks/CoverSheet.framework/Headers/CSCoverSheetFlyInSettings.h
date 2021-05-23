/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@interface CSCoverSheetFlyInSettings : PTSettings

{
    _Bool _centerFollowsFinger;
    _Bool _animateIconsOnPresentationToo;
    double _iconsFlyInInteractiveResponseMin;
    double _iconsFlyInInteractiveResponseMax;
    double _iconsFlyInInteractiveDampingRatioMin;
    double _iconsFlyInInteractiveDampingRatioMax;
    double _iconsFlyInTension;
    double _iconsFlyInFriction;
    double _slomoRate;
    double _baselineDistance;
    double _effectMultiplier;
    double _distanceExponent;
}

@property (nonatomic) _Bool centerFollowsFinger;
@property (nonatomic) _Bool animateIconsOnPresentationToo;
@property (nonatomic) double iconsFlyInInteractiveResponseMin;
@property (nonatomic) double iconsFlyInInteractiveResponseMax;
@property (nonatomic) double iconsFlyInInteractiveDampingRatioMin;
@property (nonatomic) double iconsFlyInInteractiveDampingRatioMax;
@property (nonatomic) double iconsFlyInTension;
@property (nonatomic) double iconsFlyInFriction;
@property (nonatomic) double slomoRate;
@property (nonatomic) double baselineDistance;
@property (nonatomic) double effectMultiplier;
@property (nonatomic) double distanceExponent;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
