/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewController.h>

@class NSArray;

@protocol HFIconDescriptor, HUIconPickerViewControllerDelegate;

@interface HUIconPickerViewController : UICollectionViewController

{
    NSArray *_iconDescriptors;
    id <HFIconDescriptor> _selectedIconDescriptor;
    id <HUIconPickerViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) id <HFIconDescriptor> selectedIconDescriptor;
@property (nonatomic, readonly) NSArray *iconDescriptors;
@property (weak, nonatomic) id <HUIconPickerViewControllerDelegate> delegate;

+ (id)sceneIconDescriptors;

- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (id)initWithIconDescriptors:(id)arg1 selectedIconDescriptor:(id)arg2 delegate:(id)arg3;

@end
