/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UILabel, _Badge;

__attribute__((visibility("hidden")))
@interface SKUICrossFadingTabBarButton : UIControl

{
    UILabel *_selectedTitleLabel;
    UIImageView *_selectedImageView;
    UILabel *_standardTitleLabel;
    UIImageView *_standardImageView;
    _Badge *_badge;
    NSString *_title;
    UIImage *_image;
    UIImage *_selectedImage;
    double _selectionProgress;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *selectedImage;
@property (nonatomic) double selectionProgress;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)_setBadgeValue:(id)arg1;
- (void)_positionBadge;

@end
