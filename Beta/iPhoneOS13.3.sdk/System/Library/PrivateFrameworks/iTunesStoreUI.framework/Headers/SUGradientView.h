/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class SUGradient;

@interface SUGradientView : UIView

{
    struct CGGradient *_cgGradient;
    SUGradient *_gradient;
}

@property (copy, nonatomic) SUGradient *gradient;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;

@end
