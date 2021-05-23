/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UIControl, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIRedeemITunesPassLearnMoreView : UIView

{
    UIButton *_button;
    UILabel *_explanationLabel;
    UIImageView *_headerImageView;
}

@property (nonatomic, readonly) UIControl *button;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *explanationString;
@property (retain, nonatomic) UIImage *headerImage;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;

@end
