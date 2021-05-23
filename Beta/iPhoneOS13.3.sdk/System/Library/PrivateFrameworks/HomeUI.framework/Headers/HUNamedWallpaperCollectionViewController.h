/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSMutableDictionary;

@protocol HUNamedWallpaperCollectionViewControllerDelegate;

@interface HUNamedWallpaperCollectionViewController : UICollectionViewController

{
    id <HUNamedWallpaperCollectionViewControllerDelegate> _delegate;
    long long _collectionType;
    NSArray *_wallpapers;
    NSMutableDictionary *_wallpaperImageCache;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (retain, nonatomic) NSArray *wallpapers;
@property (retain, nonatomic) NSMutableDictionary *wallpaperImageCache;
@property (weak, nonatomic, readonly) id <HUNamedWallpaperCollectionViewControllerDelegate> delegate;
@property (nonatomic, readonly) long long collectionType;

- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithCollectionType:(long long)arg1 horizontalInset:(double)arg2 delegate:(id)arg3;

@end
