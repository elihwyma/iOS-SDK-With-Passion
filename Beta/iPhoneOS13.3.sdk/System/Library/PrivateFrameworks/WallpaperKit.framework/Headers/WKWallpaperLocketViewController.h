/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <UIKitCore/UICollectionViewController.h>

@class UIButton, UITapGestureRecognizer;

@protocol WKWallpaperLocketViewControllerDelegate;

@interface WKWallpaperLocketViewController : UICollectionViewController

{
    id <WKWallpaperLocketViewControllerDelegate> _delegate;
    UIButton *__openSettingsButton;
    UIButton *__setWallpaperButton;
    UIButton *__doneButton;
    UITapGestureRecognizer *__tapGestureRecognizer;
}

@property (retain, nonatomic) UIButton *_openSettingsButton;
@property (retain, nonatomic) UIButton *_setWallpaperButton;
@property (retain, nonatomic) UIButton *_doneButton;
@property (retain, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer;
@property (weak, nonatomic) id <WKWallpaperLocketViewControllerDelegate> delegate;

+ (id)locketCollectionViewLayout;

- (id)init;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_configureSubviews;
- (_Bool)prefersStatusBarHidden;
- (void)handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_configureCollectionView;
- (void)_userDidTapOnView:(id)arg1;
- (void)_showButtonsAnimated;
- (void)_userDidTapOnDoneButton:(id)arg1;
- (void)_userDidTapOnSetWallpaperButton:(id)arg1;
- (void)_userDidTapOnOpenSettingsButton:(id)arg1;
- (void)_hideButtonsAnimated;

@end
