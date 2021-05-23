/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSManeuverView.h>

@class CPManeuver, CPSAbridgableLabel, UIImageView;

@interface CPSSecondaryManeuverView : CPSManeuverView

{
    UIImageView *_symbolView;
    CPManeuver *_maneuver;
    CPSAbridgableLabel *_instructionLabel;
}

@property (retain, nonatomic) UIImageView *symbolView;
@property (retain, nonatomic) CPManeuver *maneuver;
@property (retain, nonatomic) CPSAbridgableLabel *instructionLabel;

- (struct CGSize)intrinsicContentSize;
- (void)backgroundColorDidChange;
- (id)initWithManeuver:(id)arg1 style:(long long)arg2;

@end
