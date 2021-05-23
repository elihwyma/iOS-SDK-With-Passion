/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSString.h>

@interface NSString (CNUI)

- (unsigned int)cnui_firstUTF32Character;
- (_Bool)cnui_shouldUseJapaneseTransliteration;
- (id)cnui_stringByTransliteratingToKanaAsName:(_Bool)arg1;
- (_Bool)cnui_shouldUseZhuyinTransliteration;
- (_Bool)cnui_shouldTransliterateToLatin;
- (id)cnui_stringByTransliteratingToPhoneticCharactersForProperty:(id)arg1;
- (_Bool)cnui_containsNonLatinCharacters;
- (_Bool)cnui_containsEmojiCharacters;

@end
