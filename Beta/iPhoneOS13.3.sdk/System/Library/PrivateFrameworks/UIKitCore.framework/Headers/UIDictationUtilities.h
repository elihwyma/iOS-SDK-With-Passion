/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationUtilities : NSObject

+ (id)tokenFromAFToken:(id)arg1;
+ (id)phraseFromAFPhrase:(id)arg1;
+ (id)_properNameForString:(id)arg1;
+ (id)dictationPhrasesFromPhraseArray:(id)arg1;
+ (_Bool)needsTrailingSpaceForPhrases:(id)arg1 secureInput:(_Bool)arg2;
+ (_Bool)needsLeadingSpaceForPhrases:(id)arg1 secureInput:(_Bool)arg2;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (id)interpretationFromAFTokens:(id)arg1;
+ (id)interpretationFromAFInterpretation:(id)arg1;
+ (id)dictationPhrasesFromTokenMatrix:(id)arg1;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (id)bestInterpretationForPhrases:(id)arg1;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2;
+ (unsigned long long)characterInsertionCount:(id)arg1;
+ (unsigned long long)characterDeletionCount:(id)arg1;
+ (unsigned long long)characterSubstitutionCount:(id)arg1;
+ (unsigned long long)updateCharacterDeletionCount:(id)arg1 delta:(int)arg2;
+ (unsigned long long)updateCharacterSubstitutionCount:(id)arg1 delta:(int)arg2;
+ (unsigned long long)updateCharacterInsertionCount:(id)arg1 delta:(int)arg2;
+ (long long)updateCharacterModificationCount:(id)arg1 delta:(int)arg2;
+ (void)trackInsertion:(id)arg1 text:(id)arg2 range:(struct _NSRange)arg3;
+ (void)trackDeletion:(id)arg1 text:(id)arg2 range:(struct _NSRange)arg3;
+ (void)trackSubstitution:(id)arg1 originalText:(id)arg2 originalTextRange:(struct _NSRange)arg3 replacementText:(id)arg4 replacementTextRange:(struct _NSRange)arg5;
+ (void)logSpeechAlternativeReplacement:(id)arg1 originalText:(id)arg2 replacementText:(id)arg3 index:(unsigned long long)arg4;

@end
