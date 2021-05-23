/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface UITextChecker : NSObject

{
    id _reserved;
    long long _usdt;
    NSString *_checkerWarmingLanguage;
}

@property (retain, nonatomic) NSArray *ignoredWords;

+ (id)availableLanguages;
+ (void)setString:(id)arg1 isExemptFromChecker:(_Bool)arg2;
+ (void)queryLocalUpdateAssets:(CDUnknownBlockType)arg1;
+ (long long)uniqueSpellDocumentTag;
+ (id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3 insertionPointIndex:(unsigned long long)arg4 scriptForBestLanguage:(id *)arg5;
+ (struct __CFSet *)createDictHashTable:(_Bool)arg1;
+ (id)_dictionaryEntryForName:(id)arg1;
+ (id)openUserDictionary:(id)arg1;
+ (void)_setDictionaryEntry:(id)arg1 forName:(id)arg2;
+ (id)dictionaryInfo:(id)arg1;
+ (_Bool)_learnWord:(id)arg1 inDictionary:(id)arg2;
+ (id)_wordsInDictionary:(id)arg1;
+ (void)_setWords:(id)arg1 inDictionary:(id)arg2;
+ (_Bool)_isWord:(id)arg1 inDictionary:(id)arg2;
+ (_Bool)_forgetWord:(id)arg1 inDictionary:(id)arg2;
+ (id)_textCheckerBackgroundQueue;
+ (id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3;
+ (void)learnWord:(id)arg1;
+ (_Bool)hasLearnedWord:(id)arg1;
+ (void)unlearnWord:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_initWithAsynchronousLoading:(_Bool)arg1;
- (_Bool)canChangeCaseOfFirstLetterInString:(id)arg1 toUpperCase:(_Bool)arg2 language:(id)arg3;
- (_Bool)_doneLoading;
- (struct _NSRange)rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange)arg2 startingAt:(long long)arg3 wrap:(_Bool)arg4 language:(id)arg5;
- (id)guessesForWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3;
- (struct _NSRange)rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange)arg2 startingAt:(long long)arg3 wrap:(_Bool)arg4 languages:(id)arg5;
- (id)_nameOfDictionaryForDocumentTag:(long long)arg1;
- (void)initUserDictionaries;
- (void)queryUpdateBundle;
- (void)initGlobals;
- (struct _NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 languages:(id)arg3 wrap:(_Bool)arg4 correction:(id *)arg5;
- (id)_checker;
- (long long)adjustOffsetToNextWordBoundaryInString:(id)arg1 startingAt:(long long)arg2;
- (void)_setLanguageDictionaryName:(id)arg1;
- (void)_setDocumentDictionaryName:(id)arg1;
- (struct _NSRange)_chunkAndFindMisspelledWordInString:(id)arg1 languages:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(long long *)arg4 correction:(id *)arg5 usingChecker:(id)arg6;
- (struct _NSRange)_chunkAndCheckGrammarInString:(id)arg1 language:(id)arg2 usingChecker:(id)arg3 details:(id *)arg4;
- (struct _NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(_Bool)arg4 correction:(id *)arg5;
- (struct _NSRange)checkGrammarOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(_Bool)arg4 details:(id *)arg5;
- (id)correctionForWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3;
- (id)completionsForPartialWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3;
- (id)suggestWordInLanguage:(id)arg1;
- (id)stringForInputString:(id)arg1 language:(id)arg2;
- (id)alternativesForPinyinInputString:(id)arg1;
- (void)ignoreWord:(id)arg1;
- (_Bool)isWordInUserDictionaries:(id)arg1 caseSensitive:(_Bool)arg2;

@end
