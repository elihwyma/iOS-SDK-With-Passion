/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel;

@interface HRImageLabel : UIView

{
    _Bool _boldText;
    UIImageView *_imageView;
    UILabel *_textLabel;
    long long _imageAlignment;
    double _imageLeadingSpacing;
    double _imageTrailingSpacing;
    UIImage *_image;
    NSString *_text;
    NSLayoutConstraint *_imageLeadingConstraint;
    NSLayoutConstraint *_imageTrailingConstraint;
    NSArray *_imageTextAlignmentConstraints;
    long long _currentUserInterfaceStyle;
    CDUnknownBlockType _userInterfaceStyleChanged;
    struct CGSize _imageSize;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize imageSize;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSLayoutConstraint *imageLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageTrailingConstraint;
@property (retain, nonatomic) NSArray *imageTextAlignmentConstraints;
@property (nonatomic) long long currentUserInterfaceStyle;
@property (copy, nonatomic) CDUnknownBlockType userInterfaceStyleChanged;
@property (nonatomic) long long imageAlignment;
@property (nonatomic) _Bool boldText;
@property (nonatomic) double imageLeadingSpacing;
@property (nonatomic) double imageTrailingSpacing;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_setUpConstraints;
- (id)_textLabelFont;
- (void)_setUpUI;
- (id)initWithImage:(id)arg1 size:(struct CGSize)arg2 text:(id)arg3 userInterfaceStyleChanged:(CDUnknownBlockType)arg4;
- (id)initWithImage:(id)arg1 size:(struct CGSize)arg2 text:(id)arg3;
- (void)_updateImageTextAlignmentConstraints;
- (void)_updateTextLabelFont;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (id)_textLabelBoldFont;
- (_Bool)_isTextTallerThanImage;
- (id)_textLabelFontStyle;
- (id)initWIthImage:(id)arg1 text:(id)arg2;

@end
