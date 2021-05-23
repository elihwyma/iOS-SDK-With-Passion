/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPNavigationAlert, CPSAbridgableLabel, CPSNavigationAlertButtonView, CPSNavigationAlertProgressView, NSString, UIImageView;

@interface CPSNavigationAlertView : UIView

{
    CPNavigationAlert *_navigationAlert;
    CPSAbridgableLabel *_titleLabel;
    CPSAbridgableLabel *_subtitleLabel;
    UIImageView *_imageView;
    CPSNavigationAlertButtonView *_buttonView;
    CPSNavigationAlertProgressView *_progressView;
}

@property (retain, nonatomic) CPSAbridgableLabel *titleLabel;
@property (retain, nonatomic) CPSAbridgableLabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CPSNavigationAlertButtonView *buttonView;
@property (retain, nonatomic) CPSNavigationAlertProgressView *progressView;
@property (nonatomic, readonly) CPNavigationAlert *navigationAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (id)preferredFocusEnvironments;
- (void)startAnimating;
- (void)updateNavigationAlert:(id)arg1;
- (id)_linearFocusItems;
- (id)initWithFrame:(struct CGRect)arg1 navigationAlert:(id)arg2 templateDelegate:(id)arg3 buttonDelegate:(id)arg4;

@end
