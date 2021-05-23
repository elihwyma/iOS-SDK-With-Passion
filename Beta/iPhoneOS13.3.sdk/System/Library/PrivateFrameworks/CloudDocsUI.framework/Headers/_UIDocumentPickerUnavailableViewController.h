/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSURL, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerUnavailableViewController : UIViewController

{
    UIImageView *_leadImageView;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UILabel *_textLabel2;
    UIButton *_button;
    NSURL *_buttonURL;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_imageToTitleConstraint;
    NSLayoutConstraint *_titleToTextConstraint;
    NSLayoutConstraint *_textToTextConstraint;
    NSLayoutConstraint *_textToButtonConstraint;
}

@property (retain, nonatomic) UIImageView *leadImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *textLabel2;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSURL *buttonURL;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageToTitleConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleToTextConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textToTextConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textToButtonConstraint;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_buttonPressed:(id)arg1;
- (void)_fontSizeDidChange:(id)arg1;
- (id)_buttonBackgroundImageForState:(unsigned long long)arg1 traits:(id)arg2;

@end
