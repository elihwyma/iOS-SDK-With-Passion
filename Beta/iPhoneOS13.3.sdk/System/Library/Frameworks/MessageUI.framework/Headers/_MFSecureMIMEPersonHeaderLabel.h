/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface _MFSecureMIMEPersonHeaderLabel : UIView

{
    UIImageView *_imageView;
    UILabel *_label;
}

@property (copy, nonatomic) NSString *text;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1 text:(id)arg2 textColor:(id)arg3;

@end
