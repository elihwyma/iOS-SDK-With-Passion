/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaCollection.h>

@class VUIPlistMediaDatabaseShow;

__attribute__((visibility("hidden")))
@interface VUIPlistShowMediaCollection : VUIMediaCollection

{
    VUIPlistMediaDatabaseShow *_databaseShow;
}

@property (retain, nonatomic) VUIPlistMediaDatabaseShow *databaseShow;

- (id)playedState;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 databaseShow:(id)arg2 requestedProperties:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)mediaItemCount;
- (id)coverArtImageIdentifier;
- (id)_valueForPropertyDescriptor:(id)arg1;

@end
