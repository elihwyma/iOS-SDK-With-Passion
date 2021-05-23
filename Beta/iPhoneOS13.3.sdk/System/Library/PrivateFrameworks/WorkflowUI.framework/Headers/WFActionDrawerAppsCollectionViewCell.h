/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UILabel, WFCircularImageView;

@interface WFActionDrawerAppsCollectionViewCell : UICollectionViewCell

{
    NSString *_title;
    UIImage *_appIconImage;
    WFCircularImageView *_imageView;
    UILabel *_titleLabel;
}

@property (weak, nonatomic) WFCircularImageView *imageView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) UIImage *appIconImage;

+ (struct CGSize)preferredSize;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureWithTitle:(id)arg1 appIconImage:(id)arg2;

@end
