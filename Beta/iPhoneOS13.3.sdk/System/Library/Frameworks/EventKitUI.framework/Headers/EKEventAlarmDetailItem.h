/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class EKAlarmsViewModel, NSArray;

__attribute__((visibility("hidden")))
@interface EKEventAlarmDetailItem : EKEventDetailItem

{
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    EKAlarmsViewModel *_alarmsViewModel;
}

@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel;

- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)_updateAlarms;
- (_Bool)_alarmsAreEditable;
- (_Bool)_alarmsAreCreatable;

@end
