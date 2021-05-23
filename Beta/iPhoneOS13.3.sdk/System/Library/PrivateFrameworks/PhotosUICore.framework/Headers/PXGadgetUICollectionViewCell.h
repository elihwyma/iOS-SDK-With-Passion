/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface PXGadgetUICollectionViewCell : UICollectionViewCell

{
    UIView *_gadgetContentView;
}

@property (retain, nonatomic) UIView *gadgetContentView;

+ (Class)_contentViewClass;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
