/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaItem.h>

@class VUISidebandMediaItemAssetController, VUIVideoManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaItem : VUIMediaItem

{
    VUIVideoManagedObject *_videoManagedObject;
    VUISidebandMediaItemAssetController *_assetController;
}

@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObject;
@property (retain, nonatomic) VUISidebandMediaItemAssetController *assetController;

- (void)dealloc;
- (id)title;
- (id)duration;
- (id)isLocal;
- (id)storeID;
- (id)isPlayable;
- (id)addedDate;
- (id)showTitle;
- (id)releaseDate;
- (id)seasonNumber;
- (id)genreTitle;
- (id)episodeNumber;
- (id)canonicalID;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)showIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)seasonTitle;
- (id)initWithMediaLibrary:(id)arg1 videoManagedObject:(id)arg2 requestedProperties:(id)arg3;
- (id)downloadExpirationDate;
- (id)seasonIdentifier;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)arg1;

@end
