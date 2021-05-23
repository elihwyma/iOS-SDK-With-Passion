/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPCompleteMyCollectionArtworkDataSource : MPAbstractNetworkArtworkDataSource

- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (long long)_artworkTypeForCatalog:(id)arg1;

@end
