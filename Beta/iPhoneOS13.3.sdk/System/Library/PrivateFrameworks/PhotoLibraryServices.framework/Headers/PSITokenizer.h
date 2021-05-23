/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSMutableDictionary;

@interface PSITokenizer : NSObject

{
    void *_tagger;
    struct __CFStringTokenizer *_nameTokenizer;
    _Bool _localeIsGerman;
    _Bool _useCache;
    NSMutableDictionary *_cache;
    NSLocale *_locale;
}

@property (retain, nonatomic) NSLocale *locale;

+ (id)ftsTokenizerName;
+ (id)fts5StringFromString:(id)arg1 forMatchType:(unsigned long long)arg2;
+ (id)fts5StringFromString:(id)arg1 useWildcard:(_Bool)arg2;

- (void)dealloc;
- (int)registerFTS5TokenizerForDatabase:(struct sqlite3 *)arg1;
- (id)initWithLocale:(id)arg1 useCache:(_Bool)arg2;
- (id)normalizeString:(id)arg1;
- (void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(struct tokenOutput_t *)arg3;
- (void)_tokenizeString:(id)arg1 withContext:(CDStruct_d5c410e0 *)arg2;
- (void)tokenizePersonName:(id)arg1 tokenOutput:(struct tokenOutput_t *)arg2;
- (id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id *)arg3 error:(id *)arg4;

@end
