/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaCollection.h>

@class VUIPlistMediaDatabaseSeason;

__attribute__((visibility("hidden")))
@interface VUIPlistSeasonMediaCollection : VUIMediaCollection

{
    VUIPlistMediaDatabaseSeason *_databaseSeason;
}

@property (retain, nonatomic) VUIPlistMediaDatabaseSeason *databaseSeason;

- (id)showTitle;
- (id)seasonNumber;
- (id)showIdentifier;
- (id)playedState;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 databaseSeason:(id)arg2 requestedProperties:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)mediaItemCount;
- (id)coverArtImageIdentifier;
- (id)_valueForPropertyDescriptor:(id)arg1;

@end
