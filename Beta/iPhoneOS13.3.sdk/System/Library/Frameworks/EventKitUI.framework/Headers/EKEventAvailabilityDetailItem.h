/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class NSArray, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityDetailItem : EKEventDetailItem

{
    UITableViewCell *_cell;
    long long _availability;
    unsigned long long _supportedAvailabilities;
    NSArray *_choices;
    unsigned long long _availabilityIndexInChoices;
}

- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (_Bool)_canChangeAvailability;

@end
