/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHTokenizedTextResult.h>

@class NSArray;

@interface CHMutableTokenizedTextResult : CHTokenizedTextResult

@property (copy, nonatomic) NSArray *tokenColumns;

+ (id)refineAlternativeTokens:(id)arg1 historyTokenIDs:(id)arg2 languageModel:(void *)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)adjustColumns;
- (void)appendTokenColumns:(id)arg1;
- (void)setTranscriptionPaths:(id)arg1 scores:(id)arg2;
- (void)trimTokensToTranscriptionPathCount:(long long)arg1;
- (void)filterCandidatesWithOutOfPattern:(_Bool)arg1 duplicateTokenIDs:(_Bool)arg2;
- (id)commonStrokeSetsFromSets:(id)arg1 tokenRow:(id)arg2;
- (id)_columnStrokeSetsFromTokenRows:(id)arg1;

@end
