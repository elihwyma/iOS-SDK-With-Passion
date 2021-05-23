/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFSettingsAlertControl.h>

@class NSArray, NSAttributedString, NSString, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface _SFSettingsAlertButton : _SFSettingsAlertControl

{
    NSString *_text;
    NSAttributedString *_attributedText;
    NSArray *_contentConstraints;
    NSArray *_componentsArrangement;
    NSString *_textStyle;
    UIImage *_image;
    UIImageView *_imageView;
    UIView *_accessoryView;
    UILabel *_textLabel;
}

@property (nonatomic, readonly) UILabel *textLabel;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *textStyle;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic, readonly) UIView *trailingView;
@property (copy, nonatomic) NSArray *componentsArrangement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)_updateTintColor;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)_arrangedSubviews;

@end
