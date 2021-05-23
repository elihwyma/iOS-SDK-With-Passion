/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableSet, NSSet;

@interface MPMediaQueryCriteria : NSObject <Swift>

{
    NSMutableSet *_filterPredicates;
    unsigned long long _entityOrder;
    long long _groupingType;
    unsigned long long _entityLimit;
    NSArray *_orderingProperties;
    NSSet *_itemPropertiesToFetch;
    NSSet *_collectionPropertiesToFetch;
    _Bool _useSections;
    _Bool _ignoreSystemFilterPredicates;
    _Bool _ignoreRestrictionsPredicates;
    _Bool _includeNonLibraryEntities;
    _Bool _includeEntitiesWithBlankNames;
    NSDictionary *_orderingDirectionMappings;
}

@property (nonatomic, readonly) _Bool specifiesPlaylistItems;
@property (nonatomic, readonly) _Bool excludesEntitiesWithBlankNames;
@property (copy, nonatomic) NSSet *filterPredicates;
@property (copy, nonatomic) NSSet *itemPropertiesToFetch;
@property (copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property (nonatomic) long long groupingType;
@property (nonatomic) unsigned long long entityLimit;
@property (nonatomic) unsigned long long entityOrder;
@property (copy, nonatomic) NSArray *orderingProperties;
@property (nonatomic) _Bool ignoreSystemFilterPredicates;
@property (nonatomic) _Bool ignoreRestrictionsPredicates;
@property (nonatomic) _Bool includeNonLibraryEntities;
@property (nonatomic) _Bool includeEntitiesWithBlankNames;
@property (copy, nonatomic) NSDictionary *orderingDirectionMappings;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addFilterPredicate:(id)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (id)predicateForProperty:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1;
- (id)ML3CollectionsQueryInLibrary:(id)arg1;
- (id)ML3OrderingTermsForMPOrderingProperties:(id)arg1 directionalityMapping:(id)arg2 entityClass:(Class)arg3;
- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingTerms:(id)arg2 nameBlankProperty:(id)arg3;
- (id)ML3OrderingTermsForGroupingType:(long long)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (void)addFilterPredicates:(id)arg1;

@end
