/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CSAttributeEvaluator : NSObject

{
    _Bool _matchOncePerTerm;
    _Bool _fuzzyMatching;
    NSString *_queryString;
    unsigned long long _attributeTokenCount;
    unsigned long long _options;
    unsigned long long _matcherCount;
    const void **_matchers;
    unsigned long long _queryTermCount;
    void *_tokenizer;
    NSMutableArray *_tokenizedQueryTerms;
    NSString *_language;
    CDUnknownBlockType _handler;
}

@property (nonatomic) unsigned long long attributeTokenCount;
@property (nonatomic) unsigned long long options;
@property (nonatomic) _Bool fuzzyMatching;
@property (nonatomic) unsigned long long matcherCount;
@property (nonatomic) const void **matchers;
@property (nonatomic) unsigned long long queryTermCount;
@property (nonatomic) void *tokenizer;
@property (retain, nonatomic) NSMutableArray *tokenizedQueryTerms;
@property (retain, nonatomic) NSString *language;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic, readonly) NSArray *queryTerms;
@property (nonatomic, readonly) NSString *queryString;
@property (nonatomic) _Bool matchOncePerTerm;

+ (void)enumerateTokensForString:(id)arg1 locale:(id)arg2 options:(unsigned long long)arg3 withHandler:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(_Bool)arg2 skipTranscriptions:(_Bool)arg3 withFuzzyHandler:(CDUnknownBlockType)arg4;
- (id)initWithQuery:(id)arg1 language:(id)arg2 fuzzyThreshold:(unsigned char)arg3 options:(unsigned long long)arg4;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(_Bool)arg2 skipTranscriptions:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;

@end
