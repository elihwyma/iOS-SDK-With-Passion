/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface PUProgressView : UIView

{
    UIActivityIndicatorView *_spinner;
    long long _style;
}

@property (readonly) long long style;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showInView:(id)arg1 animated:(_Bool)arg2 afterDelay:(double)arg3;
- (void)hideAnimated:(_Bool)arg1;

@end
