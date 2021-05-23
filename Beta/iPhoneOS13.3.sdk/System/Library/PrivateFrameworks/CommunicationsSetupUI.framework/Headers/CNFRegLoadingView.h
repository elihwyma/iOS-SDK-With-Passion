/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface CNFRegLoadingView : UIView

{
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) NSString *message;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
