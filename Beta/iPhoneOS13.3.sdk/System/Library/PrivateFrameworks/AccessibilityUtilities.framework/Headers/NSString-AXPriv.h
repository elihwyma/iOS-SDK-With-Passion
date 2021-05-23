/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSString.h>

@interface NSString (AXPriv)

+ (struct USet *)_characterSetWithPattern:(id)arg1;
+ (struct USet *)_ideographSet;
+ (struct USet *)_japaneseLetterSet;

- (_Bool)_isOnlyIdeographs;
- (id)axLanguageCode;
- (_Bool)axIsRegionalLanguageCode;
- (_Bool)_isJapanesePhrase;
- (_Bool)axContainsString:(id)arg1 options:(long long)arg2;
- (_Bool)axIsGenericLanguageCode;
- (_Bool)axContainsString:(id)arg1;
- (_Bool)axIsLanguageCode;
- (id)axRegionCode;

@end
