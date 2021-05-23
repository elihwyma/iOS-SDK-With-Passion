/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPAVItem, MPShuffleableSectionedIdentifierList, NSError, NSMutableDictionary, NSString, NSUserDefaults;

@protocol MPAVQueueControllerDelegate, MPAVQueueCoordinating;

@interface MPCQueueController : NSObject

{
    unsigned long long _stateHandle;
    NSUserDefaults *_defaults;
    _Bool _hasUserMutations;
    _Bool _allowsQueueModifications;
    MPAVItem *_currentItem;
    id <MPAVQueueControllerDelegate> _delegate;
    id <MPAVQueueCoordinating> _queueCoordinator;
    long long _repeatType;
    long long _shuffleType;
    NSString *_nextContentItemID;
    NSString *_deferredNextContentItemAnchorID;
    NSError *_restorationError;
    NSMutableDictionary *_coderVersions;
    long long _nextContentItemIDReason;
    long long _state;
    MPShuffleableSectionedIdentifierList *_identifierList;
    NSMutableDictionary *_dataSources;
}

@property (copy, nonatomic) NSString *nextContentItemID;
@property (copy, nonatomic) NSString *deferredNextContentItemAnchorID;
@property (copy, nonatomic) NSError *restorationError;
@property (retain, nonatomic) NSMutableDictionary *coderVersions;
@property (nonatomic) long long nextContentItemIDReason;
@property (nonatomic) long long state;
@property (retain, nonatomic) MPShuffleableSectionedIdentifierList *identifierList;
@property (retain, nonatomic) NSMutableDictionary *dataSources;
@property (nonatomic, readonly) _Bool containsTransportableContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) _Bool hasUserMutations;
@property (nonatomic, readonly) MPAVItem *currentItem;
@property (weak, nonatomic) id <MPAVQueueControllerDelegate> delegate;
@property (retain, nonatomic) id <MPAVQueueCoordinating> queueCoordinator;
@property (nonatomic, readonly) long long displayCount;
@property (nonatomic) long long repeatType;
@property (nonatomic) long long shuffleType;
@property (nonatomic, readonly) unsigned long long supportedInsertionPositions;
@property (nonatomic, readonly) _Bool userCanChangeShuffleAndRepeatType;
@property (nonatomic) _Bool allowsQueueModifications;

+ (_Bool)supportsSecureCoding;
+ (id)describePlayer:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)contentItemIDWithCurrentItemOffset:(long long)arg1 mode:(long long)arg2 didReachEnd:(_Bool *)arg3;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (void)jumpToContentItemID:(id)arg1;
- (void)didDequeueShuffledItemsInSectionedIdentifierList:(id)arg1;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidChangeItems:(id)arg2 inSection:(id)arg3;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidAddItems:(id)arg2 toSection:(id)arg3;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidUpdateSection:(id)arg2;
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1;
- (void)queueCoordinatorDidChangeItems:(id)arg1;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
- (void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
- (id)debugDescriptionForItem:(id)arg1 inSection:(id)arg2;
- (id)debugDescriptionForSection:(id)arg1;
- (id)segmentForCodingKey:(id)arg1;
- (long long)versionForSegment:(id)arg1;
- (void)didRestoreVersion:(long long)arg1 forSegment:(id)arg2;
- (_Bool)canSkipItem:(id)arg1;
- (id)itemForContentItemID:(id)arg1;
- (id)firstContentItemIDForItemIntersectingIdentifierSet:(id)arg1;
- (void)addPlaybackContext:(id)arg1 afterContentItemID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveContentItemID:(id)arg1 afterContentItemID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reshuffle;
- (void)removeContentItemID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)finalizeStateRestorationWithAccountManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPlaceholderItemForContentItemID:(id)arg1;
- (id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long *)arg3;
- (void)updateLocationDependentPropertiesForItem:(id)arg1;
- (id)_stateDictionaryIncludingIdentifierList:(_Bool)arg1;
- (void)_highQualityMusicStreamingOnCellularDidChange:(id)arg1;
- (void)_soundCheckEnabledChangedNotification:(id)arg1;
- (void)_addPlaybackContext:(id)arg1 atPosition:(long long)arg2 afterContentItemID:(id)arg3 sectionIdentifier:(id)arg4 actions:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(_Bool)arg3 userModification:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (long long)displayIndexForContentItemID:(id)arg1;
- (id)_itemForContentItemID:(id)arg1 allowReuse:(_Bool)arg2;
- (void)incrementVersionForSegment:(id)arg1;
- (id)_firstContentItemID;
- (void)_applyVolumeNormalizationForQueuedItems;
- (_Bool)_allDataSourcesSupportInsertionPositionLast;
- (void)resetWithIdentifier:(id)arg1;
- (id)_nextValidIdentifierPairStartingAtContentItemID:(id)arg1 wasInvalid:(_Bool *)arg2;
- (id)_itemForPair:(id)arg1;
- (id)_firstContentItemIDInSectionWithIdentifier:(id)arg1;
- (void)handlePlaybackFailureForItem:(id)arg1;
- (void)jumpToFirstContentItem;

@end
