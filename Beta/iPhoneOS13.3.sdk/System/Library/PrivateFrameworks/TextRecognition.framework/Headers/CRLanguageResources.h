/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class NSLocale;

@interface CRLanguageResources : NSObject

{
    NSLocale *_locale;
    void *_characterLanguageModel;
    const struct _LXLexicon *_staticLexicon;
    void *_wordLanguageModel;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic) void *characterLanguageModel;
@property (nonatomic) const struct _LXLexicon *staticLexicon;
@property (nonatomic) void *wordLanguageModel;

+ (id)languageResourcesForLanguageIdentifier:(id)arg1 index:(long long)arg2;
+ (_Bool)isLanguageSupported:(id)arg1;
+ (void *)createCharacterModel:(id)arg1;
+ (struct _LXLexicon *)createStaticLexicon:(id)arg1;
+ (void *)createWordLanguageModel:(id)arg1;

- (void)dealloc;
- (id)initWithLanguageIdentifier:(id)arg1;

@end
