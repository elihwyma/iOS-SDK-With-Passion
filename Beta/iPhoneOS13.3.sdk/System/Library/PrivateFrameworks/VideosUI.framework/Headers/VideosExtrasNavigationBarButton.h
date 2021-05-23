/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIButton.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface VideosExtrasNavigationBarButton : UIButton

{
    UIView *_backdropView;
    UIColor *_dodgeColor;
}

+ (id)extrasNavigationButton:(long long)arg1;
+ (id)textDodgeColor;
+ (id)textFilter;
+ (id)extrasBackButton:(long long)arg1;

- (void)layoutSubviews;

@end
