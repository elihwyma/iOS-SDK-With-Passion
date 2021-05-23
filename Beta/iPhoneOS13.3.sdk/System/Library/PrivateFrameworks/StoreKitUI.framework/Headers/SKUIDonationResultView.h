/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIDonationResultView : UIView

{
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;

- (void)layoutSubviews;

@end
