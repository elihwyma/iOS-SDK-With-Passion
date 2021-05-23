/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class MKPlaceHoursView, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursDayRow : MKPlaceSectionRowView

{
    MKPlaceHoursView *_hoursView;
    NSLayoutConstraint *_topAnchorToTopLabelBaseline;
}

@property (retain, nonatomic) MKPlaceHoursView *hoursView;
@property (retain, nonatomic) NSLayoutConstraint *topAnchorToTopLabelBaseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithBusinessHours:(id)arg1 frame:(struct CGRect)arg2;
- (void)_setUpViewsForPlaceHoursDayRow;
- (void)_setUpConstraints;
- (void)hoursViewDidUpdate:(id)arg1;

@end
