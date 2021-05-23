/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNKeyboardSettings : NSObject

+ (id)newKeyboardSettingsForProperty:(id)arg1;
+ (long long)keyboardTypeFromDictionary:(id)arg1;
+ (long long)autocorrectionTypeFromDictionary:(id)arg1;
+ (long long)autocapitalizationTypeFromDictionary:(id)arg1;
+ (_Bool)contentsIsSingleValue:(id)arg1;
+ (_Bool)usesTextSuggestionDelegate:(id)arg1;

@end
