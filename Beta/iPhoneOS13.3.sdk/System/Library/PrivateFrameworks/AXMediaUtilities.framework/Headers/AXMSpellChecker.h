/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AppleSpell;

@interface AXMSpellChecker : NSObject

{
    AppleSpell *_spellChecker;
}

@property (retain, nonatomic) AppleSpell *spellChecker;

- (void)correctSpellingInText:(id)arg1 withLanguages:(id)arg2;
- (_Bool)textContainsMisspelling:(id)arg1 withLanguages:(id)arg2;

@end
