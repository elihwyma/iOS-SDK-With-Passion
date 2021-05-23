/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPURLSuffixChecker : NSObject

{
    struct {
        unsigned short _field1[27];
    } *_trie;
    unsigned int _trieNodeCount;
    unsigned long long _maxLength;
    NSMutableArray *_failedSuffixes;
}

- (void)dealloc;
- (_Bool)hasSuffix:(id)arg1;
- (_Bool)insertString:(id)arg1 intoTrieWithCache:(CDStruct_f2b84ca7 *)arg2;
- (void)addStringToFailedSuffixes:(id)arg1;
- (_Bool)hasSuffix:(id)arg1 remainingPrefix:(id *)arg2;
- (id)initWithSuffixes:(id)arg1;

@end
