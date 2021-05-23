/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSString, PMRoundProgressView, UIButton, UILabel;

@interface PMiOSProgressViewController : UIViewController

{
    _Bool _showCancelButton;
    unsigned long long _cancelStyle;
    UILabel *_label;
    PMRoundProgressView *_progressView;
    NSLayoutConstraint *_verticalProgressLabelSpace;
    NSLayoutConstraint *_verticalCenteredLabel;
    NSLayoutConstraint *_horizontalCenteredLabel;
    NSLayoutConstraint *_nonCompactRoundProgressCenterY;
    NSLayoutConstraint *_cancelButtonTopConstraint;
    NSLayoutConstraint *_cancelButtonLeadingConstraint;
    UIButton *_cancelButton;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) PMRoundProgressView *progressView;
@property (retain, nonatomic) NSLayoutConstraint *verticalProgressLabelSpace;
@property (retain, nonatomic) NSLayoutConstraint *verticalCenteredLabel;
@property (retain, nonatomic) NSLayoutConstraint *horizontalCenteredLabel;
@property (retain, nonatomic) NSLayoutConstraint *nonCompactRoundProgressCenterY;
@property (retain, nonatomic) NSLayoutConstraint *cancelButtonTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *cancelButtonLeadingConstraint;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) NSString *description;
@property (nonatomic) float progress;
@property (nonatomic) _Bool showCancelButton;
@property (nonatomic) unsigned long long cancelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setCancelTarget:(id)arg1 action:(SEL)arg2;
- (void)attachCancelButton;
- (void)updateLayoutWithTraitCollection:(id)arg1;

@end
