/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface MFMessageContentProgressLayer : UIView

{
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_loadingText;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
