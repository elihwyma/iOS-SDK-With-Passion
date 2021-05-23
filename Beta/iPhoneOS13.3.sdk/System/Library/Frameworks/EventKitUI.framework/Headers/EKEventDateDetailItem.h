/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class NSDate, NSString, PreferencesDoubleTwoPartValueCell;

__attribute__((visibility("hidden")))
@interface EKEventDateDetailItem : EKEventDetailItem

{
    PreferencesDoubleTwoPartValueCell *_cell;
    NSDate *_startDate;
    NSDate *_endDate;
    _Bool _indent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)shortenCell:(id)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end
