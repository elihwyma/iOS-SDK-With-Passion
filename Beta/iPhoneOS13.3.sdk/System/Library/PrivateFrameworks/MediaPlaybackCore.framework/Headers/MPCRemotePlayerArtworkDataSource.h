/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPCRemotePlayerArtworkDataSource : MPAbstractNetworkArtworkDataSource

+ (id)sharedDataSource;
+ (id)bestArtworkSizes;

- (void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)supportedSizesForCatalog:(id)arg1;
- (id)_urlForCatalog:(id)arg1 size:(struct CGSize)arg2;

@end
