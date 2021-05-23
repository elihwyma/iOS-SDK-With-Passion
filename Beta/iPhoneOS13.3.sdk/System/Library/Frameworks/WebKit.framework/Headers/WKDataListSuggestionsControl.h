/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsControl : NSObject

{
    struct WebDataListSuggestionsDropdownIOS *_dropdown;
    Vector_14ac4456 _suggestions;
    WKContentView *_view;
}

@property (weak, nonatomic) WKContentView *view;

- (void)invalidate;
- (id).cxx_construct;
- (long long)textAlignment;
- (void)updateWithInformation:(struct DataListSuggestionInformation *)arg1;
- (id)initWithInformation:(struct DataListSuggestionInformation *)arg1 inView:(id)arg2;
- (void)showSuggestionsDropdown:(struct WebDataListSuggestionsDropdownIOS *)arg1 activationType:(int)arg2;
- (void)didSelectOptionAtIndex:(long long)arg1;
- (id)textSuggestions;
- (long long)suggestionsCount;
- (struct String)suggestionAtIndex:(long long)arg1;

@end
