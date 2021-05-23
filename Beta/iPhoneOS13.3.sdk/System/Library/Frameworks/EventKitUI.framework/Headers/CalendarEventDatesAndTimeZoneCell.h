/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/PreferencesDoubleTwoPartValueCell.h>

@class UILabel;

@interface CalendarEventDatesAndTimeZoneCell : PreferencesDoubleTwoPartValueCell

{
    UILabel *_textLabel3;
    UILabel *_detailLabel3;
}

@property (retain, nonatomic, readonly) UILabel *textLabel3;
@property (retain, nonatomic, readonly) UILabel *detailLabel3;

- (void)layoutText:(id)arg1 andValue:(id)arg2;
- (void)_layoutSubviewsCore;

@end
