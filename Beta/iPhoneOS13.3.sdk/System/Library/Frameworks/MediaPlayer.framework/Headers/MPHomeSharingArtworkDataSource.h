/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@class HSHomeSharingLibrary;

@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource

{
    HSHomeSharingLibrary *_library;
}

@property (retain, nonatomic) HSHomeSharingLibrary *library;

- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)supportedSizesForCatalog:(id)arg1;
- (_Bool)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;

@end
