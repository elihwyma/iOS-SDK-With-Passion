/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKDateTimePicker : NSObject

{
    struct RetainPtr<UIDatePicker> _datePicker;
    NSString *_formatString;
    _Bool _shouldRemoveTimeZoneInformation;
    _Bool _isTimeInput;
    WKContentView *_view;
}

- (void)dealloc;
- (id).cxx_construct;
- (long long)_timeZoneOffsetFromGMT:(id)arg1;
- (void)_dateChangedSetAsString;
- (void)_dateChangedSetAsNumber;
- (void)_dateChanged;
- (void)_dateChangeHandler:(id)arg1;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (_Bool)shouldPresentGregorianCalendar:(const struct FocusedElementInformation *)arg1;
- (RetainPtr_6b9d0b10)dateFormatterForPicker;
- (id)datePicker;
- (id)initWithView:(id)arg1 datePickerMode:(long long)arg2;
- (id)calendarType;

@end
