/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class EKEventDetailAttendeesCell, NSArray, NSMutableDictionary, NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesDetailItem : EKEventDetailItem

{
    NSMutableDictionary *_attendeesCells;
    UITableViewCell *_titleCell;
    EKEventDetailAttendeesCell *_cell;
    long long _status;
    NSArray *_attendees;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) NSArray *attendees;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)eventDetailAttendeeCellWantsRefreshForHeightChange;

@end
