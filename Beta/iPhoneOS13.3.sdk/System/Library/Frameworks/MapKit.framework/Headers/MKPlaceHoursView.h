/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class GEOBusinessHours, NSArray, NSDictionary, NSLayoutConstraint, _MKLocalizedHoursBuilder, _MKUILabel;

@protocol MKPlaceHoursViewDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursView : UIView

{
    NSArray *_labels;
    _MKUILabel *_topLabel;
    _MKUILabel *_topMessageLabel;
    _MKUILabel *_topDayOrHourLabel;
    _MKUILabel *_bottomMessageLabel;
    _MKUILabel *_collapsableOpenStateLabel;
    NSLayoutConstraint *_baselineToTop;
    NSArray *_baselineToBaselineConstraints;
    NSArray *_baselineToBottomConstraints;
    NSArray *_topAndBottomLabelConstraints;
    NSArray *_placeDailyHours;
    unsigned long long _placeHoursViewOptions;
    _MKLocalizedHoursBuilder *_hoursBuilder;
    NSDictionary *_formattedHoursData;
    GEOBusinessHours *_businessHours;
    id <MKPlaceHoursViewDelegate> _hoursDelegate;
}

@property (nonatomic) unsigned long long placeHoursViewOptions;
@property (retain, nonatomic) _MKLocalizedHoursBuilder *hoursBuilder;
@property (retain, nonatomic) NSDictionary *formattedHoursData;
@property (retain, nonatomic) GEOBusinessHours *businessHours;
@property (nonatomic, readonly) _MKUILabel *topLabel;
@property (weak, nonatomic) id <MKPlaceHoursViewDelegate> hoursDelegate;

- (void)_commonInit;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (id)initWithBusinessHours:(id)arg1;
- (id)_standardLabel;
- (_Bool)_shouldCollapseTopMessageLabel;
- (void)_updateHoursView;
- (void)applyRulesForTopAndBottomLabel;
- (void)_collapseAllLabelsFromOptions;
- (void)_updateOptionsForCollapsingToSingleLineAndColor;
- (void)setTopLabel:(id)arg1;
- (_Bool)wantsDefaultClipping;

@end
