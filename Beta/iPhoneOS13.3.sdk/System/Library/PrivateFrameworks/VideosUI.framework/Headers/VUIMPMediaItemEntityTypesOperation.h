/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class MPMediaLibrary, NSError, VUIMediaItemEntityTypesFetchResponse;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemEntityTypesOperation : VUIAsynchronousOperation

{
    VUIMediaItemEntityTypesFetchResponse *_response;
    NSError *_error;
    MPMediaLibrary *_mediaLibrary;
}

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response;
@property (copy, nonatomic) NSError *error;

- (id)init;
- (void)executionDidBegin;
- (_Bool)_mediaLibraryHasEpisodes;
- (_Bool)_mediaLibraryHasHasHomeVideos;
- (_Bool)_mediaLibraryHasMovies;
- (_Bool)_mediaLibraryHasMovieRentals;
- (_Bool)_mediaLibraryHasLocalMediaItems;
- (_Bool)_canUseCheapEntityCheckWithMediaEntityType:(id)arg1;
- (_Bool)_mediaLibraryHasMediaItemsWithQuery:(id)arg1;
- (id)initWithMPMediaLibrary:(id)arg1;

@end
