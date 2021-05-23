/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaItem.h>

@class VUIPlistMediaDatabaseItem;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaItem : VUIMediaItem

{
    VUIPlistMediaDatabaseItem *_databaseItem;
}

@property (retain, nonatomic) VUIPlistMediaDatabaseItem *databaseItem;

- (id)isLocal;
- (id)assetType;
- (id)showTitle;
- (id)seasonNumber;
- (id)showIdentifier;
- (id)playedState;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)seasonTitle;
- (id)initWithMediaLibrary:(id)arg1 databaseItem:(id)arg2 requestedProperties:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)previewFrameImageIdentifier;
- (id)seasonIdentifier;
- (id)coverArtImageIdentifier;
- (id)_valueForPropertyDescriptor:(id)arg1;

@end
