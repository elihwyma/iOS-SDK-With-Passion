/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIScrollView.h>

@protocol NUPageViewControllerScrollViewAccessibilityDelegate;

@interface NUPageViewControllerScrollView : UIScrollView

{
    id <NUPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;
}

@property (weak, nonatomic) id <NUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;

- (_Bool)accessibilityScroll:(long long)arg1;

@end
