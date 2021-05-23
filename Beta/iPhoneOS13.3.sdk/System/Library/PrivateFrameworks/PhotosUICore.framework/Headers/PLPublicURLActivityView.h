/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface PLPublicURLActivityView : UIView

{
    UIActivityIndicatorView *_spinner;
    UILabel *_infoLabel;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 turningPublicURLON:(_Bool)arg2;

@end
