/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUAlbumListViewController, PUAlbumListViewControllerSpec;

__attribute__((visibility("hidden")))
@interface PUAlbumPickerViewControllerSpec : NSObject

{
    unsigned long long _supportedInterfaceOrientations;
    PUAlbumListViewControllerSpec *_albumListViewControllerSpec;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) PUAlbumListViewControllerSpec *albumListViewControllerSpec;
@property (nonatomic, readonly) PUAlbumListViewController *newAlbumListViewController;

- (void)configureSessionInfo:(id)arg1;

@end
