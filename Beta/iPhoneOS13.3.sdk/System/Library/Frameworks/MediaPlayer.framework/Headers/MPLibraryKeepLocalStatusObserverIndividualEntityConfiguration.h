/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPLibraryKeepLocalStatusObserverConfiguration.h>

@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration

{
    _Bool _collectionType;
    _Bool _hasNonPurgeableAsset;
    _Bool _storeRedownloadable;
    long long _managedStatus;
}

@property (nonatomic, getter=isCollectionType) _Bool collectionType;
@property (nonatomic) long long managedStatus;
@property (nonatomic) _Bool hasNonPurgeableAsset;
@property (nonatomic, getter=isStoreRedownloadable) _Bool storeRedownloadable;

@end
