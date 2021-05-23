/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface PNPWelcomeBuddyDescriptionView : UIView

{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_iconView;
    NSString *_title;
    NSString *_descriptionString;
    UIImage *_icon;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) UIImage *icon;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_updateFonts;
- (void)_configureConstraints;
- (void)_initializeUIElements;

@end
