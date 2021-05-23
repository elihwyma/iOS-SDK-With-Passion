/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

__attribute__((visibility("hidden")))
@interface VideosExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource

- (id)init;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)supportedSizesForCatalog:(id)arg1;
- (_Bool)wantsBackgroundImageDecompression;

@end
