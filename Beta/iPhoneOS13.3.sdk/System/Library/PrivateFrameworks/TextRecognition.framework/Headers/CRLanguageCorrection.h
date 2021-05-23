/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class CRCHPatternNetwork, NSCharacterSet, NSLocale, NSString;

@interface CRLanguageCorrection : NSObject

{
    void *_characterLanguageModel;
    struct _LXLexicon *_staticLexicon;
    struct _LXLexicon *_dynamicLexicon;
    NSString *_invalidSingleCharCNNCode;
    CRCHPatternNetwork *_patternFST;
    NSLocale *_locale;
}

@property (nonatomic) void *characterLanguageModel;
@property (nonatomic) struct _LXLexicon *staticLexicon;
@property (nonatomic) struct _LXLexicon *dynamicLexicon;
@property (retain, nonatomic) NSString *invalidSingleCharCNNCode;
@property (retain, nonatomic) CRCHPatternNetwork *patternFST;
@property (readonly) NSCharacterSet *confusableCharacters;
@property (readonly) NSLocale *locale;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (_Bool)isLanguageCorrectionSupportedForLanguage:(id)arg1;
- (void)loadCharacterNgramModel:(id)arg1;
- (struct _LXLexicon *)newDynamicLexiconForLocale:(id)arg1 error:(id *)arg2;
- (void)adjustCaseConfusions:(id)arg1;
- (id)findBestPathsForTextResults:(id)arg1 numPathsToExtract:(unsigned long long)arg2 ngramsize:(unsigned long long)arg3;
- (_Bool)preferAllUppercase:(id)arg1;
- (_Bool)preferAllLowercase:(id)arg1;
- (id)correctTextFeature:(id)arg1 inImage:(id)arg2 withTextPieces:(id)arg3 withMaxWidthPerRegion:(double)arg4 withMedianCharSpacing:(double)arg5 withBreakpoints:(const vector_e5f6796a *)arg6 segmenter:(struct Segmenter *)arg7 options:(id)arg8 numCharCandidates:(int)arg9 downscaleSpaceRatio:(_Bool)arg10 latticePresetIdx:(int)arg11 latticeResults:(id)arg12;

@end
