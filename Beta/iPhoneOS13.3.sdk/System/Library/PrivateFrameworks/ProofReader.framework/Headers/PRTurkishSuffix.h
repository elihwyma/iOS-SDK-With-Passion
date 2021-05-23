/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PRTurkishSuffix : NSObject

{
    NSString *_pattern;
    NSString *_name;
    unsigned char _patternBuffer[16];
    unsigned char _isOptional[16];
    unsigned long long _patternBufferLength;
    int _suffixType;
    _Bool _postponesApostrophe;
}

+ (id)standardTurkishNounSuffixes;
+ (id)standardTurkishVerbSuffixes;
+ (id)standardTurkishSuffixes;
+ (void)_enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 options:(unsigned long long)arg4 depth:(unsigned long long)arg5 matchState:(int)arg6 suffixStack:(id *)arg7 suffixRangeStack:(struct _NSRange *)arg8 usingBlock:(CDUnknownBlockType)arg9;
+ (void)enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (void)enumerateSuffixMatchesForWord:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (id)description;
- (id)name;
- (id)pattern;
- (void)_fillPatternBuffer;
- (int)suffixType;
- (_Bool)postponesApostrophe;
- (id)initWithPattern:(id)arg1 name:(id)arg2 type:(int)arg3 postponesApostrophe:(_Bool)arg4;
- (unsigned long long)matchingIndexInBuffer:(char *)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 matchWithNameOnly:(_Bool *)arg4;

@end
