/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingSelectionView : UICollectionReusableView

{
    UIView *_selectedCheckmarkView;
    UIView *_unselectedCheckmarkView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;

@end
