/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@class MiroColorSelectionController, NSString, UICollectionView, UILabel;

@interface MiroEditorClipDebugView : UIView

{
    MiroColorSelectionController *_colorSelectionController;
    UICollectionView *_colorSwatchCollectionView;
    UILabel *_label1;
    UILabel *_label2;
    UILabel *_label3;
}

@property (retain, nonatomic) MiroColorSelectionController *colorSelectionController;
@property (weak, nonatomic) UICollectionView *colorSwatchCollectionView;
@property (weak, nonatomic) UILabel *label1;
@property (weak, nonatomic) UILabel *label2;
@property (weak, nonatomic) UILabel *label3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1 withColor:(id)arg2 overrideBorderColor:(id)arg3 emphasize:(_Bool)arg4 label:(id)arg5;
- (id)_labelTextIfSafeDominantColor:(id)arg1;
- (id)_labelTextIfSafeAccentColor:(id)arg1;
- (void)setupWithClipProvider:(id)arg1;

@end
