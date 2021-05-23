/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface NUActivityIndicatorLoadingView : UIView

{
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, readonly) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithActivityIndicatorStyle:(long long)arg1;
- (void)loadingViewStartAnimating;
- (void)loadingViewStopAnimating;
- (id)initWithText:(id)arg1 activityIndicatorStyle:(long long)arg2;

@end
