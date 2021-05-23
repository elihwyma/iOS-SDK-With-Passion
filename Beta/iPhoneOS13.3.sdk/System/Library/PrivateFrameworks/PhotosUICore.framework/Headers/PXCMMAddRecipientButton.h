/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface PXCMMAddRecipientButton : UIButton

{
    UIView *_separatorView;
    double _separatorViewHeight;
    double _inset;
    UIColor *_separatorColor;
    struct CGSize _imageSizeToAlignWith;
}

@property (nonatomic) struct CGSize imageSizeToAlignWith;
@property (nonatomic) double inset;
@property (retain, nonatomic) UIColor *separatorColor;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_commmonPXCMMAddRecipientButtonInitialization;

@end
