/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class ICUserIdentity, MPCModelStorePlaybackItemsRequest, MPMutableSectionedCollection, MPSectionedCollection, MPStoreModelGenericObjectBuilder, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject

{
    long long _currentBatchCount;
    long long _defaultLibraryPersonalizationStyle;
    NSMutableDictionary *_equivalencyMapping;
    _Bool _lastStoreIDBasedSectionWasPlaylist;
    NSArray *_orderedStoreIDs;
    NSMutableArray *_pendingOrderedStoreIDs;
    NSMutableArray *_pendingPrioritizedStoreIDs;
    NSMutableArray *_unprocessedItemIdentifiers;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
    NSMutableDictionary *_receivedStoreIDs;
    MPStoreModelGenericObjectBuilder *_resultsGenericObjectBuilder;
    NSMutableDictionary *_sectionIndexToDeletedIndexSet;
    NSMutableDictionary *_storeIDToIndexPathReference;
    long long _unknownEndpointLibraryPersonalizationStyle;
    ICUserIdentity *_userIdentity;
    _Bool _allowsExplicitContent;
    _Bool _shouldLibraryPersonalize;
    long long _batchSize;
    NSDate *_earliestExpirationDate;
    long long _storePersonalizationStyle;
    MPCModelStorePlaybackItemsRequest *_request;
}

@property (nonatomic, readonly) _Bool allowsExplicitContent;
@property (nonatomic) long long batchSize;
@property (copy, nonatomic, readonly) NSDate *earliestExpirationDate;
@property (copy, nonatomic, readonly) NSDictionary *equivalencyMapping;
@property (nonatomic, readonly) long long storePersonalizationStyle;
@property (copy, nonatomic, readonly) MPCModelStorePlaybackItemsRequest *request;
@property (nonatomic, readonly) _Bool shouldLibraryPersonalize;
@property (nonatomic, readonly) MPSectionedCollection *unpersonalizedContentDescriptors;

- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult)handleResponse:(id)arg1;
- (id)_userIdentityWithRequest:(id)arg1;
- (void)_prepareRequestInformation;
- (id)_originalIndexPathsForStoreID:(id)arg1;
- (_Bool)_shouldUsePlaylistEntriesForSectionAtIndex:(long long)arg1;
- (id)_modelObjectWithStoreItemMetadata:(id)arg1 requestModelObject:(id)arg2 shouldUsePlaylistEntries:(_Bool)arg3;
- (struct _MPCModelStorePlaybackItemEligibility)_eligibilityForItem:(id)arg1;
- (id)_indexPathAccountingForRemovalsWithOriginalIndexPath:(id)arg1;
- (void)_removeItemAtOriginalIndexPath:(id)arg1;
- (void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (long long)_appendProgressiveContentDescriptorsWithStoreItemMetadata:(id)arg1;
- (void)_addOriginalIndexPath:(id)arg1 forStoreID:(id)arg2;
- (id)initWithRequest:(id)arg1 shouldLibraryPersonalize:(_Bool)arg2;
- (id)newStoreItemMetadataRequest;

@end
