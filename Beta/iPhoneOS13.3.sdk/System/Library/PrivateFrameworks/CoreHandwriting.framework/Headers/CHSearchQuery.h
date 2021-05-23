/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHQuery.h>

@class NSArray, NSString;

@interface CHSearchQuery : CHQuery

{
    NSArray *_foundItems;
    NSString *_queryString;
}

@property (copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems;
@property (copy, nonatomic) NSString *queryString;

- (void)dealloc;
- (void)stop;
- (id)debugName;
- (id)initWithRecognitionSession:(id)arg1;
- (void)q_updateQueryResult;
- (id)q_foundItemsForSearchString:(id)arg1 sessionResult:(id)arg2;
- (void)_enumerateMatchesForStrokeGroupResult:(id)arg1 locales:(id)arg2 queryString:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)_findMatchingTokenPathInResult:(id)arg1 initialTokenLocation:(CDStruct_2ec95fd7)arg2 queryString:(id)arg3 fromIndex:(long long)arg4 coveredStrokeIndexes:(id)arg5 reverseMatchedTokens:(id *)arg6;
- (_Bool)_isMatchSeparatorBeforeToken:(id)arg1 atLocation:(CDStruct_2ec95fd7)arg2 inResult:(id)arg3 queryString:(id)arg4 fromIndex:(long long)arg5 matchedLength:(long long *)arg6;
- (_Bool)_isMatchStringForToken:(id)arg1 queryString:(id)arg2 fromIndex:(long long)arg3 requirePrefixMatch:(_Bool)arg4 matchedLength:(long long *)arg5;

@end
