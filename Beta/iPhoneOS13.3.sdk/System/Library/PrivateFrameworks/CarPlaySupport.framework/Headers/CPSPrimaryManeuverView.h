/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSManeuverView.h>

@class CPManeuver, CPSAbridgableLabel, UIImageView;

@interface CPSPrimaryManeuverView : CPSManeuverView

{
    _Bool _usesWideImage;
    CPSAbridgableLabel *_distanceLabel;
    UIImageView *_symbolView;
    CPManeuver *_maneuver;
    CPSAbridgableLabel *_titleLabel;
    CPSAbridgableLabel *_instructionLabel;
    UIImageView *_junctionImageView;
}

@property (nonatomic, readonly) CPSAbridgableLabel *distanceLabel;
@property (retain, nonatomic) UIImageView *symbolView;
@property (retain, nonatomic) CPManeuver *maneuver;
@property (retain, nonatomic) CPSAbridgableLabel *titleLabel;
@property (retain, nonatomic) CPSAbridgableLabel *instructionLabel;
@property (retain, nonatomic) UIImageView *junctionImageView;
@property (nonatomic) _Bool usesWideImage;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_cleanupViews;
- (void)backgroundColorDidChange;
- (void)setCurrentTravelEstimates:(id)arg1;
- (id)initWithManeuver:(id)arg1 style:(long long)arg2;
- (void)_layoutMaxSize;
- (void)_layoutLevelNoInstruction;
- (void)_layoutRemoveJunctionView;
- (void)_layoutMin;
- (id)_maneuverSymbolImage;
- (id)_formattedDistance;
- (void)setManeuverViewSize:(unsigned long long)arg1;

@end
