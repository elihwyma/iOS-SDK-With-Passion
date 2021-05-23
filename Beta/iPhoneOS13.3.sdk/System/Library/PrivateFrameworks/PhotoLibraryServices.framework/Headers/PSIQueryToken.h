/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet, NSMutableSet, NSString, PSIWordEmbeddingMatch;

@interface PSIQueryToken : NSObject

{
    _Bool _userControlledCategoriesUseWildcard;
    _Bool _usesWordEmbeddings;
    _Bool _isFullTextToken;
    _Bool _belongsToSearchText;
    NSString *_text;
    NSString *_identifier;
    NSIndexSet *_searchedCategories;
    unsigned long long _userCategory;
    unsigned long long _matchType;
    PSIQueryToken *_parentToken;
    NSString *_normalizedText;
    PSIWordEmbeddingMatch *_wordEmbeddingMatch;
    NSMutableSet *_assetIds;
    NSMutableSet *_collectionIds;
    NSDictionary *_dateAttributes;
    struct _NSRange _rangeInSearchText;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *normalizedText;
@property (copy, nonatomic, readonly) NSString *resolvedText;
@property (copy, nonatomic, readonly) NSString *wildcardResolvedText;
@property (retain, nonatomic) PSIWordEmbeddingMatch *wordEmbeddingMatch;
@property (nonatomic) _Bool isFullTextToken;
@property (nonatomic) _Bool belongsToSearchText;
@property (nonatomic) unsigned long long userCategory;
@property (copy, nonatomic) NSIndexSet *searchedCategories;
@property (nonatomic, readonly) _Bool containsMarker;
@property (retain, nonatomic) NSMutableSet *assetIds;
@property (retain, nonatomic) NSMutableSet *collectionIds;
@property (retain, nonatomic) NSDictionary *dateAttributes;
@property (nonatomic, readonly) unsigned long long matchType;
@property (nonatomic) _Bool userControlledCategoriesUseWildcard;
@property (nonatomic) _Bool usesWordEmbeddings;
@property (nonatomic) struct _NSRange rangeInSearchText;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) unsigned long long collectionCount;
@property (nonatomic, readonly) unsigned long long resultCount;
@property (retain, nonatomic) PSIQueryToken *parentToken;
@property (nonatomic, readonly) _Bool isTextSearchable;
@property (copy, nonatomic, readonly) NSString *groupMatchingText;
@property (copy, nonatomic, readonly) NSDictionary *debugDictionary;

+ (_Bool)supportsSecureCoding;
+ (id)stringForMatchType:(unsigned long long)arg1;
+ (id)personQueryTokensFromSocialGroupQueryToken:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 normalizedText:(id)arg2 identifier:(id)arg3 userCategory:(unsigned long long)arg4 searchedCategories:(id)arg5 matchType:(unsigned long long)arg6;
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 matchType:(unsigned long long)arg3;
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2;
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3 matchType:(unsigned long long)arg4;
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3;
- (id)initWithText:(id)arg1 normalizedText:(id)arg2 userCategory:(unsigned long long)arg3 matchType:(unsigned long long)arg4;
- (id)initWithText:(id)arg1 normalizedText:(id)arg2 userCategory:(unsigned long long)arg3 searchedCategories:(id)arg4 matchType:(unsigned long long)arg5;
- (void)normalizeTextWithTokenizer:(id)arg1;
- (id)tokenByWordEmbeddingWithMatch:(id)arg1;
- (void)replaceIdentifier:(id)arg1;

@end
