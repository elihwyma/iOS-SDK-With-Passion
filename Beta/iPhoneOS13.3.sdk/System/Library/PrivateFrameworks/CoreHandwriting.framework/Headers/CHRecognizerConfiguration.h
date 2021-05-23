/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSLocale;

@interface CHRecognizerConfiguration : NSObject

{
    unsigned long long _language;
    unsigned long long _script;
    _Bool _shouldEnableCachingIfAvailable;
    int _mode;
    int _contentType;
    NSLocale *_locale;
}

@property (nonatomic, readonly) int mode;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) int contentType;
@property (nonatomic, readonly) int contentTypeForNoSpaceRecognition;
@property (nonatomic, readonly) _Bool shouldEnableCachingIfAvailable;

+ (id)defaultLocaleForRecognitionType:(int)arg1 withMode:(int)arg2;
+ (int)validateRecognitionMode:(int)arg1;
+ (_Bool)isLocaleSupported:(id)arg1 withMode:(int)arg2;
+ (id)stringForRecognitionMode:(int)arg1;
+ (struct CGSize)defaultMinimumDrawingSize;
+ (id)stringForRecognitionContentType:(int)arg1;
+ (id)configurationKeyForLocale:(id)arg1 mode:(int)arg2;
+ (void)_decodeLocale:(id)arg1 supportedLanguage:(unsigned long long *)arg2 supportedScript:(unsigned long long *)arg3;
+ (id)_stringForRecognitionLanguage:(unsigned long long)arg1;
+ (id)_stringForRecognitionScript:(unsigned long long)arg1;
+ (unsigned long long)supportedScriptForLocale:(id)arg1;
+ (unsigned long long)supportedLanguageForLocale:(id)arg1;
+ (_Bool)isLanguageSupported:(unsigned long long)arg1 withMode:(int)arg2;

- (void)dealloc;
- (id)description;
- (void *)newLanguageModel;
- (int)mecabraInputMethodType;
- (id)initWithMode:(int)arg1 locale:(id)arg2 contentType:(int)arg3 shouldEnableCachingIfAvailable:(_Bool)arg4;
- (unsigned int)requiredInappropriateFilteringFlags;
- (_Bool)shouldGenerateDigitLetterAlternatives;
- (_Bool)shouldEnforceGrammarOnTransliterations;
- (struct CHNeuralNetwork *)newRecognitionEngine;
- (struct CHNeuralNetwork *)newFreeFormEngine;
- (id)newSpellChecker;
- (const struct _LXLexicon *)newStaticLexicon:(id *)arg1;
- (void *)newCJKStaticLexicon;
- (struct _CFBurstTrie *)newOVSTrie;
- (id)newPatternFST;
- (struct Network *)newGrammarFST;
- (struct Network *)newRadicalClusterFST;
- (struct VariantMap *)newTransliterationVariantMap;
- (void *)newCharacterLanguageModelAndMap:(map_c92806bd *)arg1;
- (id)newStrokeTransitionModel;
- (id)newCutpointModel;
- (_Bool)shouldForwardMecabraOTAAssetsUpdate;
- (_Bool)shouldRefineChineseCharacterCandidates;
- (_Bool)shouldApplyLMRescoring;
- (_Bool)shouldTransliterateAndSynthetizeCandidates;
- (_Bool)shouldPromoteChineseCommonCharacters;
- (_Bool)shouldTransformCharacterProbabilitiesIntoLogScores;
- (_Bool)shouldPerformGlobalBestSearch;
- (_Bool)shouldPerformGlobalBestSearchWithSmallLattice;
- (_Bool)shouldPerformIntegratedLexiconExpansion;
- (_Bool)shouldPenalizeLetterInsertion;
- (_Bool)shouldPerformMultiWordsExpansion;
- (_Bool)shouldApplyLexicalPenalty;
- (_Bool)shouldExpandNonSpaceSeparators;
- (_Bool)shouldComputeStrokePenalties;
- (_Bool)shouldExpandCodePoints;
- (_Bool)shouldPenalizePrefixes;
- (_Bool)shouldApplyRomanPostProcessing;
- (_Bool)shouldApplyChinesePostProcessing;
- (_Bool)shouldAutoCapitalize;
- (_Bool)shouldUseTokenPrecedingSpaces;
- (_Bool)shouldTransliterateSentences;
- (_Bool)shouldApplyDiacriticSensitivity;
- (_Bool)shouldUseCaching;
- (unsigned long long)supportedSegmentationStrategy;
- (_Bool)shouldPerformRegularSpaceRecognition;
- (_Bool)shouldPerformNoSpaceRecognition;
- (_Bool)shouldFallbackOnSingleCharacterExpansion;
- (_Bool)shouldComposeLexiconWithNetwork;
- (_Bool)shouldExpandLexiconInNetwork;
- (_Bool)shouldKeepOutOfPatternCandidates;
- (_Bool)shouldDetectChinesePunctuation;
- (_Bool)shouldDetectRomanPunctuation;
- (long long)engineCandidateCount;
- (_Bool)shouldApplyCandidatesThresholding;
- (_Bool)shouldRelaxFinalCandidatesThresholding;
- (_Bool)shouldApplyLMSorting;
- (_Bool)shouldTreatAllSmallStrokesAsPunctuation;
- (_Bool)shouldApplyCharacterLMRescoring;
- (_Bool)shouldReplaceInvalidTokenIDs;
- (long long)maxRecognitionResultDefaultCount;
- (_Bool)isEqualToRecognizerConfiguration:(id)arg1;
- (id)linguisticResourcesFallbackLocale;
- (id)configurationKey;
- (_Bool)shouldPreserveLegacyTranscriptionPaths;
- (struct _LXLexicon *)newCustomLexicon:(id *)arg1;

@end
