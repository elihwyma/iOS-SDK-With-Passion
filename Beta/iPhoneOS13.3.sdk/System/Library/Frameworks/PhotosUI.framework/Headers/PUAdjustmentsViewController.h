/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class CEKSlider, NSIndexPath, NSString, PUAdjustmentInfo, PUAdjustmentsViewFlowLayout, PUSelectionFeedbackGenerator, PXUISnappingController, UICollectionView, UIImage;

@protocol PUAdjustmentViewControllerDelegate, PUAdjustmentsViewDataSource;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsViewController : UIViewController

{
    struct CGPoint _lastOffset;
    double _previousTimeStamp;
    UIImage *_selectedItemBackgroundImage;
    UIImage *_itemBackgroundImage;
    _Bool _sliderIsScrubbing;
    PXUISnappingController *_snappingController;
    _Bool _shouldDisplayControlValues;
    _Bool _shouldDisplayMappedValues;
    _Bool _didSetupControls;
    _Bool _isAnimatingScroll;
    _Bool _didPerformHapticFeedback;
    id <PUAdjustmentsViewDataSource> _dataSource;
    id <PUAdjustmentViewControllerDelegate> _delegate;
    long long _layoutDirection;
    PUAdjustmentInfo *_selectedAdjustmentInfo;
    UICollectionView *_collectionView;
    PUAdjustmentsViewFlowLayout *_collectionViewLayout;
    CEKSlider *_slider;
    NSIndexPath *_selectedIndexPath;
    PUSelectionFeedbackGenerator *_selectionFeedbackGenerator;
    struct CGSize _controlSize;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) PUAdjustmentsViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) CEKSlider *slider;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) struct CGSize controlSize;
@property (nonatomic) _Bool didSetupControls;
@property (nonatomic) _Bool isAnimatingScroll;
@property (retain, nonatomic) PUSelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (nonatomic) _Bool didPerformHapticFeedback;
@property (weak, nonatomic) id <PUAdjustmentsViewDataSource> dataSource;
@property (weak, nonatomic) id <PUAdjustmentViewControllerDelegate> delegate;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) _Bool shouldDisplayControlValues;
@property (nonatomic) _Bool shouldDisplayMappedValues;
@property (nonatomic, readonly) PUAdjustmentInfo *selectedAdjustmentInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)preferredUserInterfaceStyle;
- (void)sliderWillBeginScrolling:(id)arg1;
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)sliderDidEndScrolling:(id)arg1;
- (void)slider:(id)arg1 willUpdateValue:(double *)arg2 withVelocity:(double)arg3;
- (void)_sliderDidEndScrolling;
- (_Bool)canToggleCell:(id)arg1;
- (void)didToggleCell:(id)arg1;
- (void)_updateViewLayout;
- (void)_updateSliderForControlAtIndexPath:(id)arg1;
- (void)_updateCollectionViewLayoutDirection:(long long)arg1;
- (void)_updateSelectedInfo;
- (void)_resetControlsAtIndexPath:(id)arg1;
- (id)_circularImageWithSize:(struct CGSize)arg1 color:(id)arg2;
- (void)_setupCellBackgroundImagesIfNeeded;
- (id)_backgroundImageForItemAtIndexPath:(id)arg1;
- (void)_updateCell:(id)arg1 withInfo:(id)arg2;
- (void)updateControls;
- (void)resetControls;
- (void)sliderValueChanged:(id)arg1;
- (void)_performFeedbackIfNeeded;

@end
