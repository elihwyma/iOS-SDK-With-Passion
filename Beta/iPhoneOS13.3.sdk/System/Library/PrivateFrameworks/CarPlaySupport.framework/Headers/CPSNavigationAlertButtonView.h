/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPSNavigationAlertFocusButton;

@interface CPSNavigationAlertButtonView : UIView

{
    CPSNavigationAlertFocusButton *_primaryButton;
    CPSNavigationAlertFocusButton *_secondaryButton;
}

@property (retain, nonatomic) CPSNavigationAlertFocusButton *primaryButton;
@property (retain, nonatomic) CPSNavigationAlertFocusButton *secondaryButton;

- (id)initWithPrimaryAction:(id)arg1 secondaryAction:(id)arg2 progressView:(id)arg3;

@end
