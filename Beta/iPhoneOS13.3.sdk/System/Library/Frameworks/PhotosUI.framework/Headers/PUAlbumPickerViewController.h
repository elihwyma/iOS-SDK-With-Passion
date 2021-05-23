/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSString, PHCollectionList, PUAlbumListViewController, PUAlbumPickerSessionInfo, PUAlbumPickerViewControllerSpec, UINavigationController;

__attribute__((visibility("hidden")))
@interface PUAlbumPickerViewController : UIViewController

{
    _Bool _didLoadSubviews;
    UINavigationController *_contentNavigationController;
    PHCollectionList *_collectionList;
    CDUnknownBlockType _completionHandler;
    PUAlbumPickerViewControllerSpec *_spec;
    PUAlbumPickerSessionInfo *_albumPickerSessionInfo;
    PUAlbumListViewController *__albumListViewController;
}

@property (nonatomic) _Bool didLoadSubviews;
@property (retain, nonatomic, setter=_setContentNavigationController:) UINavigationController *contentNavigationController;
@property (retain, nonatomic, setter=_setAlbumListViewController:) PUAlbumListViewController *_albumListViewController;
@property (retain, nonatomic, setter=_setSpec:) PUAlbumPickerViewControllerSpec *spec;
@property (retain, nonatomic, setter=_setSessionInfo:) PUAlbumPickerSessionInfo *albumPickerSessionInfo;
@property (retain, nonatomic) PHCollectionList *collectionList;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (id)initWithSessionInfo:(id)arg1;
- (id)initWithSpec:(id)arg1 sessionInfo:(id)arg2;
- (void)_loadSubviewsIfNeeded;

@end
