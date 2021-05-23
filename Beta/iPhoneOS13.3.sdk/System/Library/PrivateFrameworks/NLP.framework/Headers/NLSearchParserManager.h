/*
 Image: /System/Library/PrivateFrameworks/NLP.framework/NLP
 */

#import <Foundation/NSObject.h>

@interface NLSearchParserManager : NSObject

{
    void *_parser;
}

+ (id)defaultManager;
+ (id)availableLanguages;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithLocale:(id)arg1 context:(id)arg2 options:(id)arg3;
- (void)enumerateAttributedParsesForQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSearchSuggestions:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateDateRangeAttributedParseForOptions:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
