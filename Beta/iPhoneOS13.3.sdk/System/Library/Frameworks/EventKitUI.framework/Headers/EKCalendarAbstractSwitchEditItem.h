/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray, UILabel, UISwitch, UITableViewHeaderFooterView;

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem

{
    UITableViewHeaderFooterView *_footerView;
    UILabel *_descriptionLabel;
    _Bool _underlyingCalendarState;
    _Bool _switchState;
    _Bool _allowEventAlerts;
    NSMutableArray *_cells;
    UISwitch *_toggleSwitch;
}

@property (nonatomic) _Bool allowEventAlerts;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) UISwitch *toggleSwitch;
@property (nonatomic) _Bool underlyingCalendarState;
@property (nonatomic) _Bool switchState;

- (void)reset;
- (id)cell;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)footerView;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (_Bool)cellWrapsLongText;
- (id)cellText;
- (void)_switchStateChanged:(id)arg1;
- (id)descriptionLabelText;
- (void)layoutForWidth:(double)arg1;
- (void)_applyStyleToUILabel:(id)arg1;
- (id)footerViewForSection;
- (double)footerHeightForSection;
- (_Bool)saveStateToCalendar:(id)arg1;

@end
