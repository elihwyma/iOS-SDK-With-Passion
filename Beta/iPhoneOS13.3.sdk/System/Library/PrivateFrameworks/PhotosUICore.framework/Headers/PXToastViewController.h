/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class CAShapeLayer, NSString, PXToastPresentationWindow, UIImage, UIImageView, UILabel, UINotificationFeedbackGenerator, UIVisualEffectView;

@protocol PXToastViewControllerDelegate;

@interface PXToastViewController : UIViewController

{
    _Bool _shouldUseAnimatedCheckmark;
    id <PXToastViewControllerDelegate> _delegate;
    NSString *_message;
    UIImage *_image;
    PXToastPresentationWindow *_presentationWindow;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_imageView;
    UIVisualEffectView *_toastView;
    CAShapeLayer *_checkLayer;
    UINotificationFeedbackGenerator *_feedbackGenerator;
}

@property (retain, nonatomic) PXToastPresentationWindow *presentationWindow;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) _Bool shouldUseAnimatedCheckmark;
@property (retain, nonatomic) UIVisualEffectView *toastView;
@property (retain, nonatomic) CAShapeLayer *checkLayer;
@property (retain, nonatomic) UINotificationFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id <PXToastViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIImage *image;

+ (id)_primaryLabelFont;
+ (id)_secondaryLabelFont;
+ (id)_fontWithSize:(double)arg1 textStyleAttribute:(struct __CFString *)arg2;
+ (id)toastWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;
+ (id)checkmarkToastWithTitle:(id)arg1 message:(id)arg2;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)present;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;
- (id)initCheckmarkToastWithTitle:(id)arg1 message:(id)arg2;
- (void)_dismissAfterDelay:(double)arg1;
- (void)_animateCheckMark;

@end
