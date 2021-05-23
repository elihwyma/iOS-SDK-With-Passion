/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class UISwitch, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventPrivacyLevelDetailItem : EKEventDetailItem

{
    UITableViewCell *_cell;
    UISwitch *_control;
    _Bool _switchStateIsOn;
}

- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)_switchChanged:(id)arg1;

@end
