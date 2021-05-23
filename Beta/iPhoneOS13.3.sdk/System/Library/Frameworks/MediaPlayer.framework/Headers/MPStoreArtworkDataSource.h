/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource

+ (id)sharedStoreArtworkDataSource;

- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (_Bool)wantsBackgroundImageDecompression;
- (id)_bestURLForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)_bestLookupItemArtworkForCatalog:(id)arg1 size:(struct CGSize)arg2;

@end
