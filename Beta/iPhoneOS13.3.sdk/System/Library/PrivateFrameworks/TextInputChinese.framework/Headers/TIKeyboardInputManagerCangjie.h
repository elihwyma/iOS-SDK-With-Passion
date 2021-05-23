/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <TextInputChinese/TIKeyboardInputManagerShapeBased.h>

@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased

{
    _Bool _suchengEnabled;
    _Bool _supportsEnglish;
}

@property (nonatomic) _Bool suchengEnabled;
@property (nonatomic) _Bool supportsEnglish;

+ (Class)wordSearchClass;

- (id)keyboardBehaviors;
- (_Bool)supportsNumberKeySelection;
- (id)defaultCandidate;
- (unsigned long long)initialSelectedIndex;
- (id)nonstopPunctuationCharacters;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(_Bool)arg3;
- (void)syncToLayoutState:(id)arg1;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (id)sortingMethods;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (_Bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(_Bool)arg2;
- (void)syncWordSearch;
- (void)updateMarkedText;
- (_Bool)firstCandidateIsEnglish;
- (_Bool)selectedCandidateIsEnglish;
- (unsigned long long)cangjieInputType:(id)arg1 fromPopupVariant:(_Bool)arg2;
- (id)cangjieSet;
- (id)cangjieAlphabetSet;
- (_Bool)isPunctuationInput;

@end
