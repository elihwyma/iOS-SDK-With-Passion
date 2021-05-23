/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIView;

@protocol PXSampleGadgetViewDelegate;

@interface PXSampleGadgetView : UICollectionViewCell

{
    UIColor *_color;
    id <PXSampleGadgetViewDelegate> _delegate;
    UIView *_colorView;
}

@property (retain, nonatomic) UIView *colorView;
@property (weak, nonatomic) id <PXSampleGadgetViewDelegate> delegate;
@property (retain, nonatomic) UIColor *color;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
