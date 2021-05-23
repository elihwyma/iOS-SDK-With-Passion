/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSMutableString, NSString;

@interface AXLanguageTaggedContent : NSObject

{
    NSArray *_currentDialects;
    struct _NSRange _currentChunk;
    _Bool _predictedByTagger;
    void *_nlTagger;
    _Bool _tagged;
    NSMutableArray *_tags;
    NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;
    NSString *_userPreferredLangID;
    NSMutableOrderedSet *_predictedSecondaryLangMaps;
    NSMutableString *_contentString;
}

@property (retain, nonatomic) NSMutableString *contentString;
@property (nonatomic, getter=isTagged) _Bool tagged;
@property (retain, nonatomic) NSMutableArray *tags;
@property (retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps;
@property (retain, nonatomic) NSMutableOrderedSet *predictedSecondaryLangMaps;
@property (retain, nonatomic) NSArray *currentDialects;
@property (nonatomic, readonly) NSString *content;
@property (copy, nonatomic) NSString *userPreferredLangID;

- (void)dealloc;
- (id)description;
- (id)initWithContent:(id)arg1;
- (void)tagContent;
- (void)appendLanguageTaggedContent:(id)arg1;
- (id)primaryUnambiguousDialect;
- (id)primaryAmbiguousDialect;
- (id)ambiguousLangMaps;
- (id)unambiguousLangMaps;
- (id)_allLangIDs;
- (void)_addTag;
- (_Bool)_addLanguageTagForDateIfNecessary;
- (int)langIDforLangCode:(id)arg1;
- (CDStruct_3a8d9e70 *)_languageHintsEvenlyDistributedWithProbability:(float)arg1 excludingHints:(id)arg2;
- (id)langCodeForlangId:(int)arg1;
- (id)_overrideLanguageDetection:(id)arg1;
- (void)_manuallyProcessContentWithRange:(struct _NSRange)arg1;
- (_Bool)_addLanguageTagForCurrentChunk;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (_Bool)_isStringCombinationOfCommonAndEmoji:(id)arg1;
- (void)enumerateUnpredictedTags:(CDUnknownBlockType)arg1;
- (void)enumeratePredictedTags:(CDUnknownBlockType)arg1;
- (_Bool)langMapIsSignificant:(id)arg1;
- (id)significantAmbiguousLangMaps;
- (_Bool)hasOnlyWesternLangMaps;
- (_Bool)hasOnlyNonWesternLangMaps;
- (void)updateTagsForLocalePrefChange;

@end
