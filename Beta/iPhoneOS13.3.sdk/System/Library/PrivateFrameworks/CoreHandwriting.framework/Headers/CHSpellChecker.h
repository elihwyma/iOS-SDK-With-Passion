/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class AppleSpell, CHSpellCheckerErrorModel;

@interface CHSpellChecker : NSObject

{
    AppleSpell *_spellServer;
    CHSpellCheckerErrorModel *_errorModel;
}

@property (retain, nonatomic) CHSpellCheckerErrorModel *errorModel;

+ (id)sharedSpellServer;
+ (id)newErrorModel;

- (id)init;
- (void)dealloc;
- (_Bool)isWordInUserDictionaries:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)correctionsForString:(id)arg1 shouldUseErrorModel:(_Bool)arg2 forLocale:(id)arg3;

@end
