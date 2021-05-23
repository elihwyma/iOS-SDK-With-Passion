/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUTableViewController.h>

@class HUNamedWallpaperCollectionViewController, NSArray, NSMutableDictionary, NSString, PHCachingImageManager;

@protocol HUWallpaperPickerViewControllerDelegate;

@interface HUWallpaperPickerViewController : HUTableViewController

{
    id <HUWallpaperPickerViewControllerDelegate> _delegate;
    long long _collectionType;
    HUNamedWallpaperCollectionViewController *_namedWallpaperController;
    NSString *_namedSectionTitle;
    PHCachingImageManager *_imageManager;
    NSMutableDictionary *_assetCollectionsToAssetFetchResults;
    NSArray *_assetCollections;
}

@property (nonatomic) long long collectionType;
@property (retain, nonatomic) HUNamedWallpaperCollectionViewController *namedWallpaperController;
@property (copy, nonatomic) NSString *namedSectionTitle;
@property (nonatomic, readonly) _Bool shouldShowPhotoLibrary;
@property (retain, nonatomic) PHCachingImageManager *imageManager;
@property (retain, nonatomic) NSMutableDictionary *assetCollectionsToAssetFetchResults;
@property (retain, nonatomic) NSArray *assetCollections;
@property (weak, nonatomic, readonly) id <HUWallpaperPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (id)identifierForSection:(unsigned long long)arg1;
- (void)contentSizeCategoryDidChange;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperEditingDidCancel:(id)arg1;
- (id)initWithCollectionType:(long long)arg1 namedSectionTitle:(id)arg2 delegate:(id)arg3;
- (void)loadAssetCollections;
- (id)currentSectionIdentifiers;
- (void)namedWallpaperController:(id)arg1 didChooseWallpaper:(id)arg2 image:(id)arg3;
- (void)photoCollectionController:(id)arg1 didChooseWallpaper:(id)arg2 image:(id)arg3;

@end
