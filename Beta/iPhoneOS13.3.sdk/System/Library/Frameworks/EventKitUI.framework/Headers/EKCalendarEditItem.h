/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKCalendar, EKEventStore;

@protocol EKCalendarEditItemDelegate, EKStyleProvider;

__attribute__((visibility("hidden")))
@interface EKCalendarEditItem : NSObject

{
    EKEventStore *_store;
    EKCalendar *_calendar;
    id <EKCalendarEditItemDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
}

@property (weak, nonatomic) id <EKCalendarEditItemDelegate> delegate;
@property (retain, nonatomic) id <EKStyleProvider> styleProvider;
@property (nonatomic, readonly) EKCalendar *calendar;

- (void)reset;
- (_Bool)becomeFirstResponder;
- (id)headerTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (void)layoutForWidth:(double)arg1;
- (id)footerViewForSection;
- (double)footerHeightForSection;
- (_Bool)saveStateToCalendar:(id)arg1;
- (_Bool)configureWithCalendar:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (_Bool)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;
- (void)applyStyleProviderToCell:(id)arg1;

@end
