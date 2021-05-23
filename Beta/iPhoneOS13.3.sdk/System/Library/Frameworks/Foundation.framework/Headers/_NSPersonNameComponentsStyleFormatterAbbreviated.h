/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSPersonNameComponentsStyleFormatter.h>

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsStyleFormatterAbbreviated : _NSPersonNameComponentsStyleFormatter

- (id)keysOfInterest;
- (_Bool)shouldIgnoreComponentsContainingSpecialCharacters;
- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)fallbackStyleFormatter;
- (id)abbreviatedKeys;
- (id)_delimiterBetweenString:(id)arg1 andString:(id)arg2 isPhonetic:(_Bool)arg3;

@end
