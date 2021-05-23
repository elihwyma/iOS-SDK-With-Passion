/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, SKUIToastPresentationWindow, UIImageView, UILabel, UIVisualEffectView;

@interface SKUIToastViewController : UIViewController

{
    NSString *_titleText;
    NSString *_descriptionText;
    SKUIToastPresentationWindow *_presentationWindow;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_imageView;
    UIVisualEffectView *_toastView;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) SKUIToastPresentationWindow *presentationWindow;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIVisualEffectView *toastView;
@property (copy, nonatomic) CDUnknownBlockType completion;

+ (id)_primaryLabelFont;
+ (id)_secondaryLabelFont;
+ (id)_fontWithSize:(double)arg1 textStyleAttribute:(struct __CFString *)arg2;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)present;
- (void)viewDidLayoutSubviews;
- (id)initWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)_dismissWithDelay:(double)arg1;
- (id)initWithDialogTemplate:(id)arg1;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
