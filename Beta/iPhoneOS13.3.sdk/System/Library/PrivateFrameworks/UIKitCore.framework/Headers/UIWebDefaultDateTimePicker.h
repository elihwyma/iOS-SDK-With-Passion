/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class DOMHTMLInputElement, NSString, UIDatePicker;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePicker : NSObject

{
    DOMHTMLInputElement *_inputElement;
    UIDatePicker *_datePicker;
    NSString *_formatString;
    _Bool _shouldRemoveTimeZoneInformation;
    _Bool _isTimeInput;
}

@property (retain, nonatomic) DOMHTMLInputElement *_inputElement;
@property (retain, nonatomic) UIDatePicker *_datePicker;

- (void)dealloc;
- (long long)_timeZoneOffsetFromGMT:(id)arg1;
- (void)_dateChangedSetAsString;
- (void)_dateChangedSetAsNumber;
- (void)_dateChanged;
- (void)_dateChangeHandler:(id)arg1;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;

@end
