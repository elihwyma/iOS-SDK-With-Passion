/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class EKDayPreviewController, EKEvent, EKUITableViewCell, NSDate;

__attribute__((visibility("hidden")))
@interface EKEventShowInCalendarDetailItem : EKEventDetailItem

{
    EKUITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    EKEvent *_eventCopy;
    NSDate *_proposedTime;
}

@property (retain, nonatomic) NSDate *proposedTime;

- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)_createNewEventCopy;
- (void)_datesForPreviewViewControllerWithStartDate:(id *)arg1 endDate:(id *)arg2;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (id)_dayPreviewViewController;
- (void)refreshCopiedEvents;

@end
