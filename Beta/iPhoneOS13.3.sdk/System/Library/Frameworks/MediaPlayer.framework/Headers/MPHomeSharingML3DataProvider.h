/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@class HSHomeSharingLibrary, NSMutableDictionary, NSMutableSet, NSObject;

@protocol MPArtworkDataSource, OS_dispatch_queue;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3

{
    HSHomeSharingLibrary *_homeSharingLibrary;
    NSMutableDictionary *_tokenDataForDSIDs;
    NSMutableSet *_loadedContainerPIDs;
    NSMutableDictionary *_blocksForLoadingContainerPIDs;
    NSObject<OS_dispatch_queue> *_containerFillQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _databaseID;
    id <MPArtworkDataSource> _artworkDataSource;
}

@property (nonatomic, readonly) HSHomeSharingLibrary *homeSharingLibrary;
@property (nonatomic, readonly) _Bool isSupportedSharingVersion;
@property (nonatomic) unsigned int databaseID;

+ (id)homeSharingGroupID;
+ (void)beginScanningForLibraries;
+ (void)endScanningForLibraries;
+ (_Bool)isScanningForLibraries;
+ (void)_determineHomeSharingGroupIDWithCompletionHandler:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (id)name;
- (id)uniqueIdentifier;
- (void)disconnect;
- (id)artworkDataSource;
- (_Bool)requiresAuthentication;
- (id)errorResolverForItem:(id)arg1;
- (id)protectedContentSupportStorageURL;
- (_Bool)hasGeniusMixes;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (id)URLForItemDataRequest:(id)arg1;
- (id)initWithHomeSharingLibrary:(id)arg1;
- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg1;
- (void)_homeSharingGroupIDDidChangeNotification:(id)arg1;
- (void)_homeSharingLibraryDidUpdateRevisionNumber:(id)arg1;
- (void)_homeSharingLibraryDidBecomeUnavailable:(id)arg1;
- (void)setTokenData:(id)arg1 forAuthorizedDSID:(unsigned long long)arg2;
- (void)_fetchTokensForAuthorizedDSIDs;
- (id)_tokenDataForAccountID:(unsigned long long)arg1;
- (void)_fillContainerForQueryCriteria:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
