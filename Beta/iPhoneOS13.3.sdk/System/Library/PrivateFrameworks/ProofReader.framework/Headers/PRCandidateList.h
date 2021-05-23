/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PRErrorModel;

__attribute__((visibility("hidden")))
@interface PRCandidateList : NSObject

{
    NSMutableArray *_candidates;
    unsigned long long _maxCount;
    struct _NSRange _defaultReplacementRange;
    PRErrorModel *_errorModel;
    NSArray *_capitalizationDictionaryArray;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (id)candidates;
- (unsigned long long)maxCount;
- (void)addCandidate:(id)arg1;
- (_Bool)isFull;
- (struct _NSRange)defaultReplacementRange;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 errorType:(unsigned long long)arg3;
- (void)addReplacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5;
- (void)addTranspositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5;
- (id)initWithMaxCount:(unsigned long long)arg1 defaultReplacementRange:(struct _NSRange)arg2 customErrorModel:(id)arg3 capitalizationDictionaryArray:(id)arg4;
- (void)addCandidateWithString:(id)arg1 errorType:(unsigned long long)arg2;
- (void)addCandidateWithWords:(id)arg1 replacementRange:(struct _NSRange)arg2 errorType:(unsigned long long)arg3;
- (void)addCandidateWithString:(id)arg1 replacementRange:(struct _NSRange)arg2 errorType:(unsigned long long)arg3;
- (id)candidateStrings;
- (id)candidateWithString:(id)arg1;

@end
