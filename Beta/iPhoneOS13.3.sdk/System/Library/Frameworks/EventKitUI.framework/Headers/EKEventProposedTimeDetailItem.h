/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKEventProposedTimeDetailItem : EKEventDetailItem

{
    NSMutableDictionary *_cellForAttendee;
    NSArray *_attendeesWithProposedTimes;
    _Bool _visibilityChanged;
}

- (void)reset;
- (void)setCellPosition:(int)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)detailItemVisibilityChanged;
- (id)attendeeForIndex:(unsigned long long)arg1;
- (void)_updateCellsIfNeededForWidth:(double)arg1;

@end
