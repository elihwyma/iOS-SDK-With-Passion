/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAlbumGadget.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUAlbumListCellContentView, PXPlacesAlbumCoverProvider;

__attribute__((visibility("hidden")))
@interface PUPlacesAlbumGadget : PUAlbumGadget <Swift>

{
    PUAlbumListCellContentView *_albumListCellContentView;
    NSString *_title;
    PXPlacesAlbumCoverProvider *_placesAlbumCoverProvider;
}

@property (nonatomic, readonly) PXPlacesAlbumCoverProvider *placesAlbumCoverProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)title;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_extendedTraitCollectionDidChange:(unsigned long long)arg1;
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;
- (id)albumListCellContentView;
- (void)placesSnapshotDidChange;
- (void)placesSnapshotCountDidChange;
- (void)_updateImageInContentView:(id)arg1 animated:(_Bool)arg2;
- (void)_updateSubtitleInContentView:(id)arg1 animated:(_Bool)arg2;

@end
