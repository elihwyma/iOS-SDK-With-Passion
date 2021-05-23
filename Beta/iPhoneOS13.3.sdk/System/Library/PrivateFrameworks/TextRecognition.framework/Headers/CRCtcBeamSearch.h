/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class CRLanguageResources, NSLocale;

@interface CRCtcBeamSearch : NSObject

{
    struct _LXLexicon *_dynamicLexicon;
    NSLocale *_locale;
    CRLanguageResources *_languageResources;
}

@property (nonatomic) struct _LXLexicon *dynamicLexicon;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) CRLanguageResources *languageResources;

- (void)dealloc;
- (struct _LXLexicon *)newDynamicLexiconForLocale:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(id)arg1 languageResources:(id)arg2;
- (void)loadDynamicLexicon:(id)arg1 forLocale:(id)arg2;
- (id)kBestPathsForInput:(id)arg1 k:(unsigned long long)arg2 beamWidth:(unsigned long long)arg3 outputProbs:(id *)arg4 outputWhitespaceRanges:(id *)arg5;

@end
