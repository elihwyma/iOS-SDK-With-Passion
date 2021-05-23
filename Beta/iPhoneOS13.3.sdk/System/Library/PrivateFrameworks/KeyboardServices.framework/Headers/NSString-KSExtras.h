/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSString.h>

@interface NSString (KSExtras)

+ (struct USet *)_characterSetWithPattern:(id)arg1;
+ (struct USet *)_nonIdeographicCharacterSet;
+ (struct USet *)_nonHiraganaKatakanaOrBopomofoSet;

- (_Bool)_containsIdeographicCharacters;
- (_Bool)_containsEmoji;
- (_Bool)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;
- (long long)wordCount;
- (_Bool)_containsHiraganaKatakanaOrBopomofo;
- (_Bool)_containsCJKSymbolsAndPunctuation;

@end
