/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventConferenceDetailItem : EKEventDetailItem

{
    UITableViewCell *_cell;
    NSString *_appName;
}

- (void)reset;
- (void)_tap;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end
