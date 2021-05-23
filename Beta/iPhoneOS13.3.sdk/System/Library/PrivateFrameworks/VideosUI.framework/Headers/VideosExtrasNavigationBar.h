/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UINavigationBar.h>

@class UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface VideosExtrasNavigationBar : UINavigationBar

{
    UILabel *_titleLabel;
    UIColor *_dodgeColor;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
