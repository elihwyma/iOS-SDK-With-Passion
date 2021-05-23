/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKDataListSuggestionsControl.h>

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsPopover : WKDataListSuggestionsControl

{
    struct RetainPtr<WKFormRotatingAccessoryPopover> _popover;
    struct RetainPtr<WKDataListSuggestionsViewController> _suggestionsViewController;
}

- (void)invalidate;
- (id).cxx_construct;
- (void)updateWithInformation:(struct DataListSuggestionInformation *)arg1;
- (id)initWithInformation:(struct DataListSuggestionInformation *)arg1 inView:(id)arg2;
- (void)showSuggestionsDropdown:(struct WebDataListSuggestionsDropdownIOS *)arg1 activationType:(int)arg2;
- (void)didSelectOptionAtIndex:(long long)arg1;

@end
