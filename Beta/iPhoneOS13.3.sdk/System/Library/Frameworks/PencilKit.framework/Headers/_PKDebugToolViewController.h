/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIViewController.h>

#import <PencilKit/Swift-Protocol.h>

@class NSArray, NSString, PKTiledView, UIButton, UICollectionView, UILabel;

@interface _PKDebugToolViewController : UIViewController <Swift>

{
    PKTiledView *_tiledView;
    UICollectionView *_toolCollectionView;
    UILabel *_doNotFileBugsLabel;
    UIButton *_dismissButton;
    NSArray *_tools;
}

@property (nonatomic, readonly) UICollectionView *toolCollectionView;
@property (nonatomic, readonly) UILabel *doNotFileBugsLabel;
@property (nonatomic, readonly) UIButton *dismissButton;
@property (nonatomic, readonly) NSArray *tools;
@property (weak, nonatomic) PKTiledView *tiledView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_images;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_dismissPane;
- (void)_populateTools;
- (void)_showInkAttributesPickerFromView:(id)arg1 frame:(struct CGRect)arg2 ink:(id)arg3 shouldHideArrow:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)inkAttributesPickerDidChangeSelectedInk:(id)arg1;

@end
