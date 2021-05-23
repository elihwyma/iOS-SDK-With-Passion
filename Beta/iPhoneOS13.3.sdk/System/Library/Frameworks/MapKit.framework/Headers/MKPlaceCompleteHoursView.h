/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class GEOLinkedService, NSArray, NSLayoutConstraint, NSString, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceCompleteHoursView : UIView

{
    GEOLinkedService *_linkedService;
    NSArray *_sortedBusinessHours;
    UIView *_containerViewForHoursAndCategoryName;
    UIImageView *_categoryIconView;
    _MKUILabel *_localizedCategoryNameLabel;
    NSLayoutConstraint *_hoursTopLabelBaselineToCategoryName;
    NSArray *_placeHoursViews;
}

@property (retain, nonatomic) NSArray *placeHoursViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)commonInit;
- (void)_contentSizeDidChange;
- (void)_setUpConstraints;
- (void)hoursViewDidUpdate:(id)arg1;
- (id)initWithLinkedService:(id)arg1 showTodaysHoursOnly:(_Bool)arg2;

@end
