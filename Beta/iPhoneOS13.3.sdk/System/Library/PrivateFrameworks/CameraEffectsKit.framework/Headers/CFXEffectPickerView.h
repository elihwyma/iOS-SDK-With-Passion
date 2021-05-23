/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@class JTEffectPreviewManager, NSString, UIImage;

@protocol CFXEffectPickerViewDataSource, CFXEffectPickerViewDelegate;

@interface CFXEffectPickerView : UIView

{
    _Bool _continuousPreviewEnabled;
    _Bool _useCameraForContinuousPreview;
    _Bool _previewingIsWaitingForConfiguration;
    UIImage *_previewBackgroundImage;
    id <CFXEffectPickerViewDataSource> _dataSource;
    id <CFXEffectPickerViewDelegate> _delegate;
    JTEffectPreviewManager *_previewManager;
    struct CGSize _cellSize;
    struct CGSize _thumbnailSize;
}

@property (nonatomic) _Bool previewingIsWaitingForConfiguration;
@property (retain, nonatomic) JTEffectPreviewManager *previewManager;
@property (nonatomic) struct CGSize cellSize;
@property (nonatomic) struct CGSize thumbnailSize;
@property (nonatomic, getter=isContinuousPreviewEnabled) _Bool continuousPreviewEnabled;
@property (retain, nonatomic) UIImage *previewBackgroundImage;
@property (nonatomic, getter=isUsingCameraForContinuousPreview) _Bool useCameraForContinuousPreview;
@property (weak, nonatomic) id <CFXEffectPickerViewDataSource> dataSource;
@property (weak, nonatomic) id <CFXEffectPickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)contentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView;
- (void)reloadData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionViewLayout;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)startPreviewing;
- (void)stopPreviewing;
- (void)sharedInit;
- (void)configureCell:(id)arg1;
- (void)subviewsDidLoad;
- (void)updatePreviewEffectsWhenReloadComplete;
- (void)didScrollCollectionView;
- (void)applyEffectAtCellIndex:(unsigned long long)arg1;
- (id)effectPickerNibName;
- (id)effectPickerCellNibName;
- (id)effectPickerCellReuseIdentifier;
- (void)didSelectItemAtCellIndex:(unsigned long long)arg1;
- (void)orientationDidChange;
- (void)didResizeCollectionViewToSize:(struct CGSize)arg1;
- (void)collectionView:(id)arg1 didResize:(struct CGSize)arg2;
- (void)updatePreviewEffects;
- (unsigned long long)effectIndexForCellIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfCollectionViewItems;
- (void)effectDidLoadForCell:(id)arg1 effect:(id)arg2;
- (void)effectPreviewManager:(id)arg1 didUpdatePreviewsFor:(id)arg2;

@end
