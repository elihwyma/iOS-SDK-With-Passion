/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewController.h>

@class HFWallpaper, HUWallpaperPhotoCell, NSArray, NSIndexPath, NSMutableDictionary, NSString, UICollectionViewFlowLayout, UIDropInteraction, UIImage, UIImagePickerController;

@protocol HUWallpaperPickerInlineViewControllerDelegate;

@interface HUWallpaperPickerInlineViewController : UICollectionViewController

{
    NSArray *_namedWallpapers;
    double _preferedHeight;
    UIImage *_originalCustomImage;
    id <HUWallpaperPickerInlineViewControllerDelegate> _delegate;
    NSMutableDictionary *_imageCache;
    UIImagePickerController *_imagePicker;
    HUWallpaperPhotoCell *_customWallpaperCell;
    UICollectionViewFlowLayout *_flowLayout;
    HFWallpaper *_customWallpaper;
    UIDropInteraction *_dropInteraction;
    NSIndexPath *_selectedIndexPath;
    unsigned long long _numberOfWallpapersFittingInWidth;
    struct CGSize _imageSize;
}

@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (retain, nonatomic) UIImagePickerController *imagePicker;
@property (retain, nonatomic) HUWallpaperPhotoCell *customWallpaperCell;
@property (readonly) HFWallpaper *selectedWallpaper;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) HFWallpaper *customWallpaper;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly) unsigned long long numberOfWallpapers;
@property (nonatomic) unsigned long long numberOfWallpapersFittingInWidth;
@property (nonatomic) struct CGSize imageSize;
@property (retain, nonatomic) NSArray *namedWallpapers;
@property (nonatomic, readonly) double preferedHeight;
@property (retain, nonatomic) UIImage *originalCustomImage;
@property (weak, nonatomic) id <HUWallpaperPickerInlineViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)useWallpaperPickerCell;

- (id)init;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)setSelectedIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)updateScrolling;
- (void)configureCell:(id)arg1 image:(id)arg2 wallpaper:(id)arg3;
- (id)wallpaperForIndexPath:(id)arg1;
- (void)setSelectedWallpaper:(id)arg1 animated:(_Bool)arg2;
- (void)wallpaperPhotoCellDidPressDeleteButton:(id)arg1;
- (void)setCustomWallpaper:(id)arg1 image:(id)arg2;
- (void)setImageSizeToFitWidth:(double)arg1 forNumberOfWallpapers:(unsigned long long)arg2;

@end
