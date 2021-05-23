/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface LoadingLabel : UIView

{
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}

- (id)init;
- (id)text;
- (void)setHidden:(_Bool)arg1;
- (void)sizeToFit;
- (void)setText:(id)arg1 showingActivity:(_Bool)arg2;

@end
