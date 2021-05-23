/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PRCandidate : NSObject

{
    NSArray *_candidateWords;
    struct _NSRange _replacementRange;
    double _errorScore;
    double _lmScore;
    _Bool _blacklisted;
    _Bool _hasCustomErrorScore;
}

+ (id)candidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 errorScore:(double)arg3;
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange)arg4 errorScore:(double)arg5 capitalizationDictionaryArray:(id)arg6;
+ (id)candidateWithWords:(id)arg1 replacementRange:(struct _NSRange)arg2 errorScore:(double)arg3;
+ (id)candidateWithWords:(id)arg1 replacementRange:(struct _NSRange)arg2 errorType:(unsigned long long)arg3 errorModel:(id)arg4;
+ (id)candidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 errorType:(unsigned long long)arg3 errorModel:(id)arg4;
+ (id)replacementCandidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 intendedCharacter:(unsigned short)arg3 actualCharacter:(unsigned short)arg4 errorModel:(id)arg5;
+ (id)transpositionCandidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 intendedFirstCharacter:(unsigned short)arg3 intendedSecondCharacter:(unsigned short)arg4 errorModel:(id)arg5;
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange)arg4 errorType:(unsigned long long)arg5 errorModel:(id)arg6 capitalizationDictionaryArray:(id)arg7;
+ (id)replacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange)arg4 intendedCharacter:(unsigned short)arg5 actualCharacter:(unsigned short)arg6 errorModel:(id)arg7 capitalizationDictionaryArray:(id)arg8;
+ (id)transpositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange)arg4 intendedFirstCharacter:(unsigned short)arg5 intendedSecondCharacter:(unsigned short)arg6 errorModel:(id)arg7 capitalizationDictionaryArray:(id)arg8;

- (id)string;
- (void)dealloc;
- (id)description;
- (double)score;
- (struct _NSRange)replacementRange;
- (_Bool)isBlacklisted;
- (void)setBlacklisted:(_Bool)arg1;
- (unsigned long long)numberOfWords;
- (id)candidateWords;
- (void)setLanguageModelScore:(double)arg1;
- (id)initWithCandidateWords:(id)arg1 replacementRange:(struct _NSRange)arg2 errorScore:(double)arg3;
- (id)initWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 errorScore:(double)arg3;
- (void)setCustomErrorScore:(_Bool)arg1;
- (double)errorScore;
- (double)languageModelScore;
- (void)setErrorScore:(double)arg1;
- (_Bool)hasCustomErrorScore;

@end
