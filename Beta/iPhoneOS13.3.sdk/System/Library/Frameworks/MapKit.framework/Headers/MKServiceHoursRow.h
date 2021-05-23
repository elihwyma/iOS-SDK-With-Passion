/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class GEOLinkedService, MKPlaceCompleteHoursView;

__attribute__((visibility("hidden")))
@interface MKServiceHoursRow : MKPlaceSectionRowView

{
    MKPlaceCompleteHoursView *_completePlaceHoursView;
    GEOLinkedService *_linkedService;
}

@property (retain, nonatomic) MKPlaceCompleteHoursView *completePlaceHoursView;
@property (retain, nonatomic) GEOLinkedService *linkedService;

- (void)_setUpConstraints;
- (id)initWithLinkedService:(id)arg1 frame:(struct CGRect)arg2 showTodaysHoursOnly:(_Bool)arg3;

@end
