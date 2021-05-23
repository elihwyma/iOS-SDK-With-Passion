/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PRLexicon : NSObject

{
    NSString *_localization;
    NSString *_unigramsPath;
    const void *_lexicon;
}

+ (id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2;
+ (id)lexiconWithLexicon:(const void *)arg1;

- (void)dealloc;
- (id)description;
- (unsigned int)tokenIDForString:(id)arg1;
- (id)stringForTokenID:(unsigned int)arg1;
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)getProbabilityForTokenID:(unsigned int)arg1 probability:(double *)arg2;
- (_Bool)getProbabilityForString:(id)arg1 probability:(double *)arg2;
- (void)enumerateEntriesForString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (struct _LXLexicon *)lexicon;
- (id)initWithLexicon:(const void *)arg1;
- (id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2;
- (id)createCursor;
- (void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;

@end
