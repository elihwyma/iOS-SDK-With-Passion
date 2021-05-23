/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, TVImageProxy, UILabel, _TVImageView;

@interface _TVAlertView : UIView

{
    _TVImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
    NSArray *_additionalLabelViews;
    TVImageProxy *_imageProxy;
    NSString *_title;
    NSString *_message;
    NSArray *_additionalLabels;
    struct CGSize _imageSize;
}

@property (retain, nonatomic) TVImageProxy *imageProxy;
@property (nonatomic) struct CGSize imageSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *additionalLabels;

+ (id)_newLabelWithText:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
