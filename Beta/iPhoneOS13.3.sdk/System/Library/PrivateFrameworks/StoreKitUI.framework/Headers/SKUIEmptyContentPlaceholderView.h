/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface SKUIEmptyContentPlaceholderView : UIView

{
    struct UIEdgeInsets _imageInsets;
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_signInButton;
}

@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) struct UIEdgeInsets placeholderImageInsets;
@property (copy, nonatomic) NSString *placeholderMessage;
@property (nonatomic, readonly) UILabel *placeholderMessageLabel;
@property (nonatomic) _Bool showsSignInButton;
@property (nonatomic, readonly) UIButton *signInButton;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)maskPlaceholdersInBackdropView:(id)arg1;

@end
