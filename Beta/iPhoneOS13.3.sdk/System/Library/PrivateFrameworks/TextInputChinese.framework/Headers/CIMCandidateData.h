/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, TIInputMode;

@interface CIMCandidateData : NSObject

{
    int _sortingMethod;
    TIInputMode *_inputMode;
    NSArray *_storedCandidates;
    NSMutableDictionary *_candidateInfoCache;
}

@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic) int sortingMethod;
@property (retain, nonatomic) NSArray *storedCandidates;
@property (retain, nonatomic) NSMutableDictionary *candidateInfoCache;

+ (id)sortTitleFromSortingMethod:(int)arg1;
+ (_Bool)shouldShowZhuyinSortingMethod;

- (id)init;
- (void)clearCache;
- (void)setCandidates:(id)arg1;
- (id)initWithInputMode:(id)arg1;
- (void)addCharacter:(id)arg1 groupLabel:(id)arg2 dictionary:(id)arg3 isSecondary:(_Bool)arg4;
- (id)wordPropertyDictionaryForCandidates:(id)arg1 isSimplified:(_Bool)arg2;
- (void)sortCharactersByStrokeCount:(id)arg1 wordPropertiesDictionary:(id)arg2;
- (id)candidateGroupsFromDictionary:(id)arg1 sortedKeys:(id)arg2;
- (id)candidatesSortedByFrequency:(id)arg1;
- (id)candidatesSortedByEmoji:(id)arg1;
- (id)candidatesSortedByRadical:(id)arg1 simplified:(_Bool)arg2 collationLocale:(id)arg3;
- (id)candidatesSortedByStrokes:(id)arg1 simplified:(_Bool)arg2;
- (id)candidatesSortedByPinyinOrZhuyin:(id)arg1 simplified:(_Bool)arg2 zhuyin:(_Bool)arg3;
- (id)candidatesSortedByMethod:(int)arg1;

@end
