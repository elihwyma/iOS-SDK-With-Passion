/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UISegmentedControl, _MKPlaceReservationInfo;

@interface MKPlaceReservationRowView : MKPlaceSectionRowView

{
    UISegmentedControl *_openTimesControl;
    UIButton *_buttonMakeReservation;
    UIButton *_buttonAttribution;
    NSMutableArray *_mutableConstraints;
    NSLayoutConstraint *_constraintButtonTopMargin;
    NSLayoutConstraint *_constraintButtonBottomMargin;
    _MKPlaceReservationInfo *_reservationInfo;
}

@property (nonatomic, readonly) _MKPlaceReservationInfo *reservationInfo;
@property (nonatomic) unsigned long long selectedTimeIndex;
@property (retain, nonatomic) NSString *selectedTimeString;

- (void)tintColorDidChange;
- (void)_updateTintColor;
- (void)_contentSizeDidChange;
- (id)initWithReservationInfo:(id)arg1;
- (id)_newButtonForAttribution:(_Bool)arg1;
- (id)_attributedStringFromButtonTitle:(id)arg1 useSmallFont:(_Bool)arg2;
- (void)_actionMakeReservation;
- (void)_setupImmutableConstraints;
- (void)_updateWithReservationInfo;
- (id)_buttonFontLarge;
- (id)_buttonFontSmall;
- (void)_updateMutableConstraints;
- (double)_buttonBottomMargin;
- (double)_buttonTopMargin;
- (void)_updateButtonTitleAttributes;

@end
