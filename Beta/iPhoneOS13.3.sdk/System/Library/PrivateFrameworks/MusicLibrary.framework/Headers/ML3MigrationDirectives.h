/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@interface ML3MigrationDirectives : NSObject

{
    _Bool _needsToRecreateIndexes;
    _Bool _needsToRecreateTriggers;
    _Bool _needsToRemoveLocationsForItemsMissingAssets;
    _Bool _needsToReloadStoreBookmarkMetadataIdentifiers;
    _Bool _needsToReloadContainerMediaTypes;
    _Bool _needsToReloadCollectionRepresentativeItems;
    _Bool _needsAnalyze;
    _Bool _needsToAutogenerateArtworkVariants;
    _Bool _needsToUpdateSortMap;
    _Bool _forceUpdateOriginals;
    int _originalUserVersion;
    int _currentUserVersion;
}

@property (nonatomic, readonly) int originalUserVersion;
@property (nonatomic) int currentUserVersion;
@property (nonatomic) _Bool needsToRecreateIndexes;
@property (nonatomic) _Bool needsToRecreateTriggers;
@property (nonatomic) _Bool needsToRemoveLocationsForItemsMissingAssets;
@property (nonatomic) _Bool needsToReloadStoreBookmarkMetadataIdentifiers;
@property (nonatomic) _Bool needsToReloadContainerMediaTypes;
@property (nonatomic) _Bool needsToReloadCollectionRepresentativeItems;
@property (nonatomic) _Bool needsAnalyze;
@property (nonatomic) _Bool needsToAutogenerateArtworkVariants;
@property (nonatomic) _Bool needsToUpdateSortMap;
@property (nonatomic) _Bool forceUpdateOriginals;

- (id)initWithOriginalUserVersion:(int)arg1;

@end
