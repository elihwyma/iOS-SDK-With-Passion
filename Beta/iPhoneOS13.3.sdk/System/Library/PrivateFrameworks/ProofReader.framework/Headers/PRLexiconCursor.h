/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class PRLexicon;

__attribute__((visibility("hidden")))
@interface PRLexiconCursor : NSObject

{
    PRLexicon *_lexicon;
    struct _LXCursor *_cursor;
}

- (void)dealloc;
- (_Bool)isValid;
- (_Bool)hasChildren;
- (void)_advance:(id)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (double)prefixProbability;
- (void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithLexicon:(id)arg1;
- (void)advanceWithCombinedCharacterSequence:(id)arg1;
- (void)advanceWithString:(id)arg1;
- (_Bool)hasEntries;
- (double)terminationProbability;
- (void)enumerateCompletions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCompletionEntries:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
