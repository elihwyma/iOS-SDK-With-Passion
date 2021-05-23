/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface SL_OOPASpinnerTitle : UIView

{
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) NSString *title;

- (id)init;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)startAnimating;
- (void)stopAnimating;

@end
