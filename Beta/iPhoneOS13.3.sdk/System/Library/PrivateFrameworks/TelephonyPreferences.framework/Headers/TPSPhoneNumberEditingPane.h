/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Preferences/PSTextEditingPane.h>

@class NSString;

@interface TPSPhoneNumberEditingPane : PSTextEditingPane

{
    NSString *_previousStringSuggestion;
}

@property (copy, nonatomic) NSString *previousStringSuggestion;

- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (void)setPreferenceSpecifier:(id)arg1;

@end
