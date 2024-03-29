/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSArray, NSBundle, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface AppleSpell : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    void *_proofReaderConnection;
    struct __CFDictionary *_databaseConnections;
    NSMutableDictionary *_languageModelDicts;
    NSMutableDictionary *_lexiconDict;
    NSMutableDictionary *_phraseLexiconDict;
    struct __CFDictionary *_emojiPredictorDict;
    double _referenceResetTimer;
    double _lastWriteLanguageModels;
    double _lastDecayLanguageModels;
    double _lastResetLanguageModels;
    double _lastReleaseLanguageModels;
    double _lastMaintainLanguageModels;
    unsigned long long _languageModelWordCount;
    NSMutableDictionary *_localDictionaryArrays;
    NSMutableArray *_globalDictionaryArray;
    NSString *_lastLanguage;
    NSString *_lastCandidateLanguage;
    NSArray *_userPreferredLanguages;
    NSArray *_userPreferredLatinLanguages;
    NSArray *_userTopLanguages;
    NSArray *_userTransliterationLocalizations;
    NSArray *_userAdditionalEnglishLocalizations;
    NSMutableDictionary *_learnedResponses;
    NSMutableDictionary *_probationaryLearnedResponses;
    NSMutableDictionary *_probationaryLearnedResponseTimes;
    NSMutableArray *_diagnosticInfo;
    NSMutableSet *_foundNames;
    id _foundNamesLexicon;
    id _foundPhrasesLexicon;
    double _lastFindNames;
    NSMutableSet *_foundShortcuts;
    NSMutableDictionary *_foundShortcutsDictionary;
    NSMutableDictionary *_lastSampleCollected;
    unsigned long long _numberOfSamplesCollected;
    double _lastSampleCollection;
    NSMutableArray *_retainedSamples;
    NSMutableDictionary *_lastSampleRecorded;
    double _lastSampleRecording;
    NSBundle *_dataBundle;
    NSMutableArray *_altBundleURLs;
    NSObject<OS_dispatch_queue> *_assetDataBundleSerialQueue;
    NSMutableDictionary *_assetDataBundleURLDictionary;
    NSMutableSet *_updatedDataBundleLanguages;
    NSURL *_updateBundleURL;
    NSMutableDictionary *_languageCounts;
    double _lastLanguageCounts;
    NSMutableDictionary *_userAdaptationDictionary;
    NSData *_lastKeyEventArray;
    unsigned long long *_keyboardHistogram;
    double _lastKeyboardHistogramRecording;
    NSMutableArray *_requestedAssets;
    NSMutableArray *_receivedAssets;
    double _lastAssetRequest;
    NSMutableArray *_recordedCorrections;
    NSMutableArray *_recordedTICorrections;
    double _probationaryInterval;
    _Bool _userPrefersUncheckedLatinLanguage;
    _Bool _userPrefersUncheckedCyrillicLanguage;
    _Bool _hasUpdatedDataBundleLanguages;
    _Bool _shouldClearFoundNames;
    _Bool _automaticTextCompletionCollapsed;
    _Bool _automaticTextCompletionEnabled;
}

- (id)init;
- (void)clearCaches;
- (void)resetTimer;
- (struct _NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(long long *)arg4 countOnly:(_Bool)arg5 correction:(id *)arg6;
- (struct _NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 language:(id)arg3 details:(id *)arg4;
- (struct _NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 languages:(id)arg3 wordCount:(long long *)arg4 countOnly:(_Bool)arg5 correction:(id *)arg6;
- (void)setUpdateBundleURL:(id)arg1;
- (id)spellServer:(id)arg1 suggestGuessesForWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 suggestWordWithLengthInRange:(struct _NSRange)arg2 language:(id)arg3;
- (_Bool)spellServer:(id)arg1 canChangeCaseOfFirstLetterInString:(id)arg2 toUpperCase:(_Bool)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 stringForInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)dataBundle;
- (id)assetDataBundleURLsForLanguage:(id)arg1;
- (id)localizationForLanguage:(id)arg1;
- (id)fallbackLocalizationForLanguage:(id)arg1;
- (id)dataBundlesForLanguage:(id)arg1;
- (id)databasePathForLanguage:(id)arg1;
- (void *)databaseConnectionForLanguage:(id)arg1;
- (unsigned int)encodingForLanguage:(id)arg1;
- (_Bool)_checkEnglishGrammarInString:(id)arg1 range:(struct _NSRange)arg2 indexIntoBuffer:(unsigned long long)arg3 bufferLength:(unsigned long long)arg4 language:(id)arg5 connection:(struct _PR_DB_IO *)arg6 sender:(id)arg7 bufIO:(struct _PR_BUF_IO *)arg8 retval:(int *)arg9 errorRange:(struct _NSRange *)arg10 details:(id *)arg11;
- (_Bool)_checkGrammarInString:(id)arg1 range:(struct _NSRange)arg2 language:(id)arg3 connection:(struct _PR_DB_IO *)arg4 sender:(id)arg5 bufIO:(struct _PR_BUF_IO *)arg6 errorRange:(struct _NSRange *)arg7 details:(id *)arg8;
- (struct _NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 range:(struct _NSRange)arg3 language:(id)arg4 orthography:(id)arg5 mutableResults:(id)arg6 offset:(unsigned long long)arg7 details:(id *)arg8;
- (struct _NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 range:(struct _NSRange)arg3 languages:(id)arg4 topLanguages:(id)arg5 orthography:(id)arg6 checkOrthography:(_Bool)arg7 mutableResults:(id)arg8 offset:(unsigned long long)arg9 autocorrect:(_Bool)arg10 onlyAtInsertionPoint:(_Bool)arg11 initialCapitalize:(_Bool)arg12 autocapitalize:(_Bool)arg13 keyEventArray:(id)arg14 appIdentifier:(id)arg15 selectedRangeValue:(id)arg16 wordCount:(long long *)arg17 countOnly:(_Bool)arg18 correction:(id *)arg19;
- (id)spellServer:(id)arg1 candidatesForSelectedRange:(struct _NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 types:(unsigned long long)arg5 options:(id)arg6 orthography:(id)arg7;
- (id)spellServer:(id)arg1 suggestGuessesForWordRange:(struct _NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5;
- (id)spellServer:(id)arg1 suggestGuessDictionariesForWordRange:(struct _NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 errorModel:(id)arg6;
- (id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(struct _NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5;
- (id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(struct _NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5;
- (id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5;
- (id)spellServer:(id)arg1 suggestWordWithMinimumLength:(unsigned long long)arg2 maximumLength:(unsigned long long)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2;
- (_Bool)spellServer:(id)arg1 _canChangeCaseOfFirstLetterInString:(id)arg2 toUpperCase:(_Bool)arg3 language:(id)arg4;
- (void)timeout:(id)arg1;
- (void)resetDataBundlesForLanguage:(id)arg1;
- (id)localizationsForLanguage:(id)arg1;
- (void)releaseDatabaseConnections;
- (void)addAlternateDataBundleURL:(id)arg1;
- (id)linguisticTaggerForLanguage:(id)arg1 string:(id)arg2 range:(struct _NSRange)arg3 taggerIndex:(unsigned long long *)arg4;
- (struct _NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(long long *)arg4 countOnly:(_Bool)arg5;
- (id)spellServer:(id)arg1 checkString:(id)arg2 offset:(unsigned long long)arg3 types:(unsigned long long)arg4 options:(id)arg5 orthography:(id)arg6 wordCount:(long long *)arg7;
- (id)spellServer:(id)arg1 generateCandidatesForSelectedRange:(struct _NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 types:(unsigned long long)arg5 options:(id)arg6 orthography:(id)arg7;
- (id)spellServer:(id)arg1 suggestGuessesForWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5;
- (id)spellServer:(id)arg1 suggestGuessesForWord:(id)arg2 inLanguage:(id)arg3;
- (id)spellServer:(id)arg1 suggestGuessDictionariesForWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 errorModel:(id)arg6;
- (id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5;
- (id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5;
- (id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5;
- (id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)sentenceTerminatorCharacterSet;
- (id)_standardizedLanguageModelStringForString:(id)arg1;
- (id)internalStringForKoreanExternalString:(id)arg1;
- (unsigned int)_tokenIDForString:(id)arg1 languageModel:(id)arg2 language:(id)arg3 createIfAbsent:(_Bool)arg4 terminatorTokenID:(unsigned int)arg5;
- (_Bool)validateWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(struct _PR_DB_IO *)arg4 sender:(id)arg5 checkBase:(_Bool)arg6 checkDict:(_Bool)arg7 checkTemp:(_Bool)arg8 checkUser:(_Bool)arg9 checkNames:(_Bool)arg10 checkHyphens:(_Bool)arg11 checkIntercaps:(_Bool)arg12 checkOptions:(_Bool)arg13 depth:(unsigned long long)arg14;
- (_Bool)checkWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned int)arg4 index:(unsigned long long)arg5;
- (unsigned long long)acceptabilityOfWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned int)arg4 forPrediction:(_Bool)arg5;
- (id)externalStringForKoreanInternalString:(id)arg1;
- (_Bool)checkNegativeWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned int)arg4;
- (unsigned int)_tokenIDForString:(id)arg1 languageModel:(id)arg2 language:(id)arg3 terminatorTokenID:(unsigned int)arg4;
- (_Bool)shouldBlockWord:(id)arg1 language:(id)arg2 encoding:(unsigned int)arg3;
- (id)lexiconForLanguage:(id)arg1;
- (id)languageModelLocalizationForLanguage:(id)arg1;
- (void)_readLanguageModelParametersFromDefaults;
- (id)_loadLanguageModelForLanguage:(id)arg1 localization:(id)arg2 appIdentifier:(id)arg3 onQueue:(id)arg4;
- (id)backgroundLoadingQueue;
- (id)languageModelForLanguage:(id)arg1 appIdentifier:(id)arg2 waitForResult:(_Bool)arg3;
- (id)_stringForTokenIDs:(const unsigned int *)arg1 tokenCount:(unsigned long long)arg2 languageModel:(id)arg3 language:(id)arg4 connection:(struct _PR_DB_IO *)arg5 sender:(id)arg6 encoding:(unsigned int)arg7 prefix:(id)arg8 capitalized:(_Bool)arg9;
- (void)_addLanguageModelCompletionsForPrefix:(id)arg1 languageModel:(id)arg2 language:(id)arg3 connection:(struct _PR_DB_IO *)arg4 sender:(id)arg5 encoding:(unsigned int)arg6 capitalized:(_Bool)arg7 candidates:(id)arg8;
- (unsigned long long)_contextLengthForRange:(struct _NSRange)arg1 language:(id)arg2 tagger:(id)arg3 taggerIndex:(unsigned long long)arg4 languageModel:(id)arg5 maxContextLength:(unsigned long long)arg6 context:(unsigned int *)arg7 cleanOffset:(unsigned long long *)arg8;
- (_Bool)useUnigramProbabilityForLanguage:(id)arg1;
- (_Bool)_getUnigramProbabilityForString:(id)arg1 languageModel:(id)arg2 probability:(double *)arg3;
- (float)dynamicScoreForWord:(id)arg1 languageModel:(id)arg2 language:(id)arg3;
- (void)enumerateAssetDataItemsForLocale:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)backgroundMaintenanceQueue;
- (id)languageModelFallbackLocalizationForLanguage:(id)arg1;
- (void)_readLanguageModelParametersFromDictionary:(id)arg1;
- (_Bool)useLanguageModelForLanguage:(id)arg1 tagger:(id)arg2 taggerIndex:(unsigned long long)arg3 appIdentifier:(id)arg4;
- (id)languageModelCompletionsForPartialWord:(id)arg1 language:(id)arg2 sender:(id)arg3 appIdentifier:(id)arg4;
- (_Bool)_addLanguageModelCompletionsForPartialWordRange:(struct _NSRange)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 encoding:(unsigned int)arg5 tagger:(id)arg6 taggerIndex:(unsigned long long)arg7 appIdentifier:(id)arg8 waitForLanguageModel:(_Bool)arg9 candidates:(id)arg10;
- (id)_rankedCandidatesForRange:(struct _NSRange)arg1 candidates:(id)arg2 language:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned long long)arg5 appIdentifier:(id)arg6 scoreDictionary:(id)arg7;
- (id)_rankedCandidatesForCandidateList:(id)arg1 language:(id)arg2 tagger:(id)arg3 taggerIndex:(unsigned long long)arg4 appIdentifier:(id)arg5;
- (_Bool)_useAlternateLanguageForRange:(struct _NSRange)arg1 ofString:(id)arg2 language:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned long long)arg5 alternateLanguage:(id)arg6 alternateTagger:(id)arg7 alternateTaggerIndex:(unsigned long long)arg8 appIdentifier:(id)arg9;
- (float)dynamicScoreForWord:(id)arg1 language:(id)arg2 appIdentifier:(id)arg3;
- (void)updateLexiconsForLanguage:(id)arg1;
- (id)localDictionaryArrayForLanguage:(id)arg1;
- (id)globalDictionaryArray;
- (id)dictionaryForLanguage:(id)arg1 index:(unsigned long long)arg2;
- (_Bool)checkNameWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned int)arg4 globalOnly:(_Bool)arg5;
- (id)autocorrectionDictionaryForLanguage:(id)arg1;
- (id)guessesDictionaryForLanguage:(id)arg1;
- (id)capitalizationDictionaryArrayForLanguage:(id)arg1;
- (id)phraseCorrectionsDictionaryForLanguage:(id)arg1;
- (id)sentenceCorrectionsDictionaryForLanguage:(id)arg1;
- (_Bool)validateNoSuggestUntilLearnedWord:(id)arg1 inLexiconForLanguage:(id)arg2;
- (_Bool)checkNoCapAbbreviationWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned int)arg4;
- (_Bool)noSuggestForCompletion:(id)arg1 language:(id)arg2 appIdentifier:(id)arg3;
- (void)personalizeEmojiArray:(id)arg1;
- (_Bool)validateWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(struct _PR_DB_IO *)arg4 sender:(id)arg5 checkBase:(_Bool)arg6 checkDict:(_Bool)arg7 checkTemp:(_Bool)arg8 checkUser:(_Bool)arg9 checkNames:(_Bool)arg10 checkHyphens:(_Bool)arg11 checkIntercaps:(_Bool)arg12 checkOptions:(_Bool)arg13 forCorrection:(_Bool)arg14 depth:(unsigned long long)arg15;
- (_Bool)_findMatchingRangesForRange:(struct _NSRange)arg1 inString:(id)arg2 keyEventArray:(id)arg3 endingAtIndex:(unsigned long long)arg4 matchingStringRange:(struct _NSRange *)arg5 correctableStringRange:(struct _NSRange *)arg6 matchingKeyEventRange:(struct _NSRange *)arg7 firstMisspelledKeyEventIndex:(unsigned long long *)arg8 lastMisspelledKeyEventIndex:(unsigned long long *)arg9 previousBackspaceCount:(unsigned long long *)arg10;
- (id)phraseMatching:(id)arg1 inLexiconForLanguage:(id)arg2;
- (void)enumerateEntriesForWord:(id)arg1 inLexiconForLanguage:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)validateWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(struct _PR_DB_IO *)arg4 sender:(id)arg5 checkBase:(_Bool)arg6 checkDict:(_Bool)arg7 checkNames:(_Bool)arg8 checkHyphens:(_Bool)arg9 checkIntercaps:(_Bool)arg10 checkOptions:(_Bool)arg11 depth:(unsigned long long)arg12;
- (id)_correctionResultForKoreanString:(id)arg1 range:(struct _NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 tagger:(id)arg5 taggerIndex:(unsigned long long)arg6 appIdentifier:(id)arg7 dictionary:(id)arg8 keyEventArray:(id)arg9;
- (void)_addGuessesForWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(struct _PR_DB_IO *)arg4 sender:(id)arg5 minAutocorrectionLength:(unsigned long long)arg6 previousLetter:(unsigned short)arg7 nextLetter:(unsigned short)arg8 basicOnly:(_Bool)arg9 toGuesses:(id)arg10;
- (_Bool)validateWord:(id)arg1 inLexiconForLanguage:(id)arg2;
- (_Bool)findMatchingRangesForRange:(struct _NSRange)arg1 inString:(id)arg2 keyEventArray:(id)arg3 selectedRangeValue:(id)arg4 matchingStringRange:(struct _NSRange *)arg5 correctableStringRange:(struct _NSRange *)arg6 matchingKeyEventRange:(struct _NSRange *)arg7 firstMisspelledKeyEventIndex:(unsigned long long *)arg8 lastMisspelledKeyEventIndex:(unsigned long long *)arg9 previousBackspaceCount:(unsigned long long *)arg10;
- (id)_capitalizationResultForString:(id)arg1 range:(struct _NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 language:(id)arg5 onlyAtInsertionPoint:(_Bool)arg6 keyEventArray:(id)arg7 selectedRangeValue:(id)arg8;
- (id)_phraseCapitalizationResultForString:(id)arg1 range:(struct _NSRange)arg2 currentWordRange:(struct _NSRange)arg3 inString:(id)arg4 offset:(unsigned long long)arg5 language:(id)arg6 onlyAtInsertionPoint:(_Bool)arg7 keyEventArray:(id)arg8 selectedRangeValue:(id)arg9;
- (id)_accentCorrectionResultForString:(id)arg1 range:(struct _NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 language:(id)arg5 onlyAtInsertionPoint:(_Bool)arg6 keyEventArray:(id)arg7 selectedRangeValue:(id)arg8;
- (id)_correctionResultForString:(id)arg1 range:(struct _NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 tagger:(id)arg5 taggerIndex:(unsigned long long)arg6 appIdentifier:(id)arg7 dictionary:(id)arg8 languages:(id)arg9 connection:(struct _PR_DB_IO *)arg10 onlyAtInsertionPoint:(_Bool)arg11 capitalize:(_Bool)arg12 autocapitalize:(_Bool)arg13 keyEventArray:(id)arg14 selectedRangeValue:(id)arg15 previousLetter:(unsigned short)arg16 nextLetter:(unsigned short)arg17 isAlternateLanguage:(_Bool)arg18 extraMisspellingCount:(unsigned long long)arg19 extraCorrectionCount:(unsigned long long *)arg20;
- (id)_lexiconPathForLocalization:(id)arg1 type:(id)arg2;
- (id)_lexiconPathForLanguage:(id)arg1 type:(id)arg2;
- (id)_loadLexiconsForLanguage:(id)arg1 localization:(id)arg2 onQueue:(id)arg3;
- (id)_lexiconsForLanguage:(id)arg1 waitForResult:(_Bool)arg2;
- (id)_phraseLexiconPathForLanguage:(id)arg1;
- (id)_lexiconsForLanguage:(id)arg1;
- (_Bool)validateWord:(id)arg1 inLexicons:(id)arg2 forLanguage:(id)arg3 requiredMetaFlags:(unsigned int)arg4 alternativeRequiredMetaFlags:(unsigned int)arg5 prohibitedMetaFlags:(unsigned int)arg6 caseInsensitive:(_Bool)arg7;
- (id)_phraseLexiconsForLanguage:(id)arg1;
- (void)updateAllLexicons;
- (_Bool)validateVariantWord:(id)arg1 inLexiconForLanguage:(id)arg2;
- (_Bool)validateNoCapAbbreviation:(id)arg1 inLexiconForLanguage:(id)arg2;
- (_Bool)validateUntilLearnedWord:(id)arg1 inLexiconForLanguage:(id)arg2;
- (_Bool)validateWord:(id)arg1 inLexicon:(id)arg2;
- (unsigned int)metaFlagsForWord:(id)arg1 inLexiconForLanguage:(id)arg2;
- (void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 inLexiconForLanguage:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)numberOfTurkishSuffixPointsInBuffer:(char *)arg1 length:(unsigned long long)arg2 maxSuffixPoints:(unsigned long long)arg3 suffixPoints:(CDStruct_b54abf8e *)arg4;
- (_Bool)validateAbbreviationOrNumberWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned int)arg4 connection:(struct _PR_DB_IO *)arg5 sender:(id)arg6;
- (unsigned long long)acceptabilityOfWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned int)arg4 forPrediction:(_Bool)arg5 depth:(unsigned long long)arg6;
- (_Bool)validateWordBuffer:(char *)arg1 length:(unsigned long long)arg2 connection:(struct _PR_DB_IO *)arg3;
- (_Bool)checkSpecialPrefixesForWordBuffer:(char *)arg1 length:(unsigned long long)arg2;
- (id)_orthographyByModifyingOrthography:(id)arg1 withLatinLanguage:(id)arg2;
- (_Bool)validateWordBuffer:(char *)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(struct _PR_DB_IO *)arg4 sender:(id)arg5 checkBase:(_Bool)arg6 checkDict:(_Bool)arg7 checkTemp:(_Bool)arg8 checkNames:(_Bool)arg9 checkHyphens:(_Bool)arg10 checkIntercaps:(_Bool)arg11 checkOptions:(_Bool)arg12 depth:(unsigned long long)arg13;
- (_Bool)validateWordPrefixBuffer:(char *)arg1 length:(unsigned long long)arg2 connection:(struct _PR_DB_IO *)arg3;
- (id)_crudePreviousWordInString:(id)arg1 inRange:(struct _NSRange)arg2 precededBy:(id *)arg3;
- (id)_modifiedGrammarDescriptionForDescription:(id)arg1;
- (id)_detailWithRange:(struct _NSRange)arg1 description:(id)arg2 corrections:(id)arg3;
- (_Bool)looksLikeArticledNoun:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3;
- (_Bool)looksLikeAdverb:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4;
- (_Bool)looksLikeParticiple:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4;
- (_Bool)onContractionList:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4;
- (_Bool)onNoContractionList:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4;
- (id)_crudeNextWordInString:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)_crudePreviousWordInString:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)_correctionForSuggestedPhrase:(const char *)arg1 originalBuffer:(const char *)arg2 length:(unsigned long long)arg3;
- (id)spellServer:(id)arg1 suggestGuessesForKoreanWordRange:(struct _NSRange)arg2 inString:(id)arg3 options:(id)arg4;
- (void)addLexiconGuessesForWord:(id)arg1 buffer:(char *)arg2 length:(unsigned long long)arg3 language:(id)arg4 minCorrectionLength:(unsigned long long)arg5 minExtendedCorrectionLength:(unsigned long long)arg6 isCapitalized:(_Bool)arg7 stopAfterFreeInsertions:(_Bool)arg8 toGuesses:(id)arg9;
- (id)_spellServer:(id)arg1 suggestGuessesForWordRange:(struct _NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 tagger:(id)arg6 taggerIndex:(unsigned long long)arg7 errorModel:(id)arg8 guessesDictionaries:(id)arg9;
- (id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 finalModificationsForPinyinInputString:(id)arg2;
- (id)englishStringsFromWordBuffer:(char *)arg1 length:(unsigned long long)arg2 connection:(struct _PR_DB_IO *)arg3;
- (id)englishStringFromWordBuffer:(char *)arg1 length:(unsigned long long)arg2 connection:(struct _PR_DB_IO *)arg3;
- (void)addSpecialModifiedPinyinToArray:(id)arg1 inBuffer:(char *)arg2 length:(unsigned long long)arg3 atEnd:(_Bool)arg4;
- (void)addModifiedPinyinToArray:(id)arg1 connection:(struct _PR_DB_IO *)arg2 fromIndex:(unsigned long long)arg3 prevIndex:(unsigned long long)arg4 prevPrevIndex:(unsigned long long)arg5 startingModificationsAt:(unsigned long long)arg6 inBuffer:(char *)arg7 length:(unsigned long long)arg8 initialSyllableCount:(unsigned long long)arg9 initialScore:(unsigned long long)arg10 prevScore:(unsigned long long)arg11 prevPrevScore:(unsigned long long)arg12 lastSyllableScore:(unsigned long long)arg13 couldBeAbbreviatedPinyin:(_Bool)arg14;
- (void)addModifiedPartialPinyinToArray:(id)arg1 connection:(struct _PR_DB_IO *)arg2 fromIndex:(unsigned long long)arg3 prevIndex:(unsigned long long)arg4 prevPrevIndex:(unsigned long long)arg5 prePrevPrevIndex:(unsigned long long)arg6 startingModificationsAt:(unsigned long long)arg7 inBuffer:(char *)arg8 length:(unsigned long long)arg9 initialSyllableCount:(unsigned long long)arg10 initialScore:(unsigned long long)arg11 prevScore:(unsigned long long)arg12 prevPrevScore:(unsigned long long)arg13 lastSyllableScore:(unsigned long long)arg14;
- (id)_pinyinStringByCombiningPinyinString:(id)arg1 withPinyinString:(id)arg2;
- (id)_primitiveRetainedAlternativesForPinyinInputString:(id)arg1;
- (unsigned long long)_getSplitIndexes:(unsigned long long *)arg1 maxCount:(unsigned long long)arg2 forPinyinInputString:(id)arg3;
- (id)_recursiveRetainedAlternativesForPinyinInputString:(id)arg1 depth:(unsigned long long)arg2;
- (id)_retainedAlternativesByCombiningAlternatives:(id)arg1 withAlternatives:(id)arg2 andAddingAlternatives:(id)arg3;
- (id)spellServer:(id)arg1 _retainedAlternativesForPinyinInputString:(id)arg2 extended:(_Bool)arg3;
- (id)spellServer:(id)arg1 _retainedPrefixesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 _retainedCorrectionsForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 _retainedModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3;
- (id)spellServer:(id)arg1 _retainedFinalModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3;
- (id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3;
- (void)addGuessesForKoreanWord:(id)arg1 includeAdditionalGuesses:(_Bool)arg2 toGuesses:(id)arg3;

@end
