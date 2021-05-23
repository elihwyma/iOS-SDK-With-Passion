/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSPredicate, NSSet, NSString;

@interface VUIMediaEntityFetchRequest : NSObject <Swift>

{
    NSSet *_mediaEntityTypes;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSSet *_properties;
    NSString *_groupingKeyPath;
    CDUnknownBlockType _groupingSortComparator;
    NSDictionary *_options;
    NSString *_identifier;
    struct _NSRange _range;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSSet *mediaEntityTypes;
@property (nonatomic, readonly) _Bool _isItemsFetch;
@property (nonatomic, readonly) _Bool _isCollectionsFetch;
@property (nonatomic, readonly) _Bool _isShowsFetch;
@property (nonatomic, readonly) _Bool _isSeasonsFetch;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (copy, nonatomic) NSSet *properties;
@property (nonatomic) struct _NSRange range;
@property (copy, nonatomic) NSString *groupingKeyPath;
@property (copy, nonatomic) CDUnknownBlockType groupingSortComparator;
@property (copy, nonatomic) NSDictionary *options;

+ (id)movieRentalsFetchRequest;
+ (id)homeVideosFetchRequest;
+ (id)showsFetchRequest;
+ (id)moviesFetchRequest;
+ (id)episodesGroupedBySeasonIdentifierFetchRequestWithShowIdentifier:(id)arg1;
+ (id)_finalizedSortDescriptorsFromSortDescriptors:(id)arg1 mediaEntityKind:(id)arg2;
+ (id)_finalizedSortDescriptorFromSortDescriptor:(id)arg1 mediaEntityKind:(id)arg2;
+ (id)mediaEntityFetchRequestWithIdentifier:(id)arg1;
+ (id)_identifierPredicateWithIdentifier:(id)arg1;
+ (id)_minimalPropertiesFetchRequestWithType:(id)arg1;
+ (id)_minimalMoviesPropertiesFetchRequest;
+ (id)_minimalMovieRentalsPropertiesFetchRequest;
+ (id)_minimalShowsPropertiesFetchRequest;
+ (id)_seasonsFetchRequestWithShowIdentifier:(id)arg1;
+ (id)_seasonsFetchRequestWithSeasonIdentifier:(id)arg1;
+ (id)_episodesFetchRequestWithSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2;
+ (id)_addedDateSortDescriptor;
+ (id)_addedToDateSortDescriptor;
+ (id)_anyHDRColorCapabilityPredicate;
+ (id)_any4KResolutionPredicate;
+ (id)_predicateWithSubpredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2;
+ (id)_isLocalPredicate;
+ (id)_isInPredicateWithAdamId:(id)arg1;
+ (id)_isEqualPredicateWithAdamId:(id)arg1;
+ (id)_includeSortIndexesOptions;
+ (id)_titleSortDescriptor;
+ (id)_showIdentifierPredicateWithIdentifier:(id)arg1;
+ (id)_seasonNumberSortDescriptor;
+ (id)_seasonIdentifierPredicateWithIdentifier:(id)arg1;
+ (id)_episodeNumberSortDescriptor;
+ (id)_resolutionPredicateWithResolution:(id)arg1;
+ (id)_HLSResolutionPredicateWithResolution:(id)arg1;
+ (id)seasonsFetchRequest;
+ (id)seasonsFetchRequestWithShowIdentifier:(id)arg1;
+ (id)seasonsFetchRequestWithSeasonIdentifier:(id)arg1;
+ (id)episodesFetchRequest;
+ (id)episodesFetchRequestWithSeasonIdentifier:(id)arg1;
+ (id)_releaseYearSortDescriptor;
+ (id)_releaseDateSortDescriptor;
+ (id)_showTitleSortDescriptor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaEntityTypes:(id)arg1;
- (void)addAdamIdPredicate:(id)arg1;
- (void)addRecentlyAddedSortDescriptorWithLimit:(unsigned long long)arg1;
- (void)addHDRColorCapabilityOr4KResolutionPredicate;
- (void)_didUpdateRequestProperties;
- (_Bool)_shouldGenerateSortIndexes;
- (id)initWithMediaEntityType:(id)arg1;
- (id)_sortIndexPropertyKeyWithMediaEntityKind:(id)arg1;
- (_Bool)_shouldGenerateGroupingSortIndexes;
- (id)_manualSortDescriptorsWithMediaEntityKind:(id)arg1 propertiesRequiredForSort:(id *)arg2;
- (void)addIsLocalPredicate;
- (void)_addPredicate:(id)arg1;
- (void)addSortIndexesOption;
- (void)addGroupingSortIndexesOption;
- (void)addHDRColorCapabilityPredicate;
- (void)add4KResolutionPredicate;
- (void)addDownloadStatePredicateForStates:(unsigned long long)arg1;
- (void)addAdamIdsPredicate:(id)arg1;

@end
