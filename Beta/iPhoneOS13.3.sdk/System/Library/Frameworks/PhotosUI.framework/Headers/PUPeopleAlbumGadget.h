/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAlbumGadget.h>

@class PXPeopleAlbumProvider;

__attribute__((visibility("hidden")))
@interface PUPeopleAlbumGadget : PUAlbumGadget

{
    PXPeopleAlbumProvider *_albumProvider;
}

@property (retain, nonatomic) PXPeopleAlbumProvider *albumProvider;

- (void)dealloc;
- (id)title;
- (void)contentViewWillAppear;
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;
- (void)reconfigure;
- (id)albumListCellContentView;
- (void)_peopleAlbumChanged:(id)arg1;
- (void)_configureSubtitleForAlbumListCellContentView:(id)arg1;
- (void)_setSubtitleForPeopleCount:(long long)arg1 onAlbumListCellContentView:(id)arg2;

@end
