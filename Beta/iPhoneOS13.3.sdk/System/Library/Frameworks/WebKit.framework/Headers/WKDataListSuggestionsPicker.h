/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKDataListSuggestionsControl.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsPicker : WKDataListSuggestionsControl

{
    struct RetainPtr<WKDataListSuggestionsPickerView> _pickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id).cxx_construct;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)updateWithInformation:(struct DataListSuggestionInformation *)arg1;
- (id)initWithInformation:(struct DataListSuggestionInformation *)arg1 inView:(id)arg2;
- (void)showSuggestionsDropdown:(struct WebDataListSuggestionsDropdownIOS *)arg1 activationType:(int)arg2;

@end
