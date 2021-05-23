/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface MKInfoCardLoadingView : UIView

{
    UIActivityIndicatorView *_loadingIndicator;
}

- (void)dealloc;
- (void)_layout;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)startAnimating;
- (void)stopAnimating;

@end
