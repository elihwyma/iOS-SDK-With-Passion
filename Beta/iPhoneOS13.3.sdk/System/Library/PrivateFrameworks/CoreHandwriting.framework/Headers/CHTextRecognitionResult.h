/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSArray, NSIndexSet, NSString;

@interface CHTextRecognitionResult : CHRecognitionResult

{
    _Bool _isTextReplacement;
    NSString *_string;
    NSArray *_wordRanges;
    NSArray *_wordIDs;
    NSArray *_wordRecognitionScores;
    NSArray *_wordCombinedScores;
    NSArray *_wordStrokeSets;
    NSArray *_wordLexicalEntries;
    NSArray *_wordPatternEntries;
    NSIndexSet *_rareWordIndexes;
    NSIndexSet *_inappropriateWordIndexes;
}

@property (readonly) NSString *string;
@property (readonly) NSArray *wordRanges;
@property (readonly) NSArray *wordIDs;
@property (readonly) NSArray *wordRecognitionScores;
@property (readonly) NSArray *wordCombinedScores;
@property (readonly) NSArray *wordStrokeSets;
@property (readonly) NSArray *wordLexicalEntries;
@property (readonly) NSArray *wordPatternEntries;
@property (readonly) NSIndexSet *rareWordIndexes;
@property (readonly) NSIndexSet *inappropriateWordIndexes;
@property (readonly) _Bool isTextReplacement;

- (void)dealloc;
- (id)initWithString:(id)arg1 score:(double)arg2 wordRanges:(id)arg3 wordIDs:(id)arg4 wordRecognitionScores:(id)arg5 wordCombinedScores:(id)arg6 wordStrokeSets:(id)arg7 wordLexicalEntries:(id)arg8 wordPatternEntries:(id)arg9 rareWordIndexes:(id)arg10 inappropriateWordIndexes:(id)arg11 isTextReplacement:(_Bool)arg12;
- (id)mecabraCandidate;

@end
