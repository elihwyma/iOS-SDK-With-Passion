/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICUserIdentity, MPChangeDetails, MPModelStoreBrowseContentItemBuilder, MPModelStoreBrowseSectionBuilder, MPSectionedCollection, MPStoreItemMetadataResponse, NSArray, NSDictionary, NSSet;

@interface MPModelStoreBrowseResponseParser : NSObject

{
    MPSectionedCollection *_additionalContentIdentifiers;
    NSArray *_allAdditionalContentIdentifiersNeedingLookup;
    long long _parseOnceToken;
    MPSectionedCollection *_results;
    NSDictionary *_storePlatformDataResults;
    NSSet *_unavailableContentIdentifiers;
    ICUserIdentity *_userIdentity;
    CDStruct_d2d88407 _options;
    id _rawResponseOutput;
    MPModelStoreBrowseResponseParser *_previousParser;
    MPStoreItemMetadataResponse *_additionalStoreItemMetadataResponse;
    MPModelStoreBrowseSectionBuilder *_sectionBuilder;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPChangeDetails *_changeDetails;
}

@property (nonatomic, readonly) id rawResponseOutput;
@property (nonatomic, readonly) CDStruct_d2d88407 options;
@property (nonatomic, readonly) MPModelStoreBrowseResponseParser *previousParser;
@property (nonatomic, readonly) MPStoreItemMetadataResponse *additionalStoreItemMetadataResponse;
@property (nonatomic, readonly) MPModelStoreBrowseSectionBuilder *sectionBuilder;
@property (nonatomic, readonly) MPModelStoreBrowseContentItemBuilder *contentItemBuilder;
@property (nonatomic, readonly) MPSectionedCollection *results;
@property (nonatomic, readonly) MPChangeDetails *changeDetails;
@property (nonatomic, readonly) MPSectionedCollection *additionalContentIdentifiers;
@property (nonatomic, readonly) NSArray *allAdditionalContentIdentifiersNeedingLookup;

- (void)_parse;
- (id)initWithRawResponseOutput:(id)arg1 options:(CDStruct_d2d88407)arg2 sectionBuilder:(id)arg3 contentItemBuilder:(id)arg4 userIdentity:(id)arg5;
- (id)initWithPreviousParser:(id)arg1 additionalStoreItemMetadataResponse:(id)arg2 options:(CDStruct_d2d88407)arg3 sectionBuilder:(id)arg4 contentItemBuilder:(id)arg5 userIdentity:(id)arg6;
- (void)_parseFeaturedContentStructureModelChildren:(id)arg1;
- (_Bool)_parseFeaturedContentChild:(id)arg1 isMemberOfChartSet:(_Bool)arg2 insertingResultsToSectionedCollection:(id)arg3 atSectionIndex:(long long)arg4 additionalContentIdentifiers:(id)arg5 allAdditionalContentIdentifiersNeedingLookup:(id)arg6;
- (void)_parseSingleContentListFromPageDataDictionary:(id)arg1 isMemberOfChartSet:(_Bool)arg2;
- (void)_parseUsingAdditionalContentIdentifiersFromPreviousParser;
- (void)_populateStorePlatformDataResultsFromRawResponseOutputDictionary:(id)arg1;
- (void)_populateUnavailableContentIdentifiersFromPageDataDictionary:(id)arg1;
- (id)_storeItemMetadataForContentIdentifier:(id)arg1;
- (_Bool)_storeItemMetadataIsAvailableForContentIdentifier:(id)arg1;

@end
