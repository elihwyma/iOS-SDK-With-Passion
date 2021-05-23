/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIWindow.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _SKUIClickThroughWindow : UIWindow

{
    UIView *_interactionView;
}

@property (retain, nonatomic) UIView *interactionView;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
