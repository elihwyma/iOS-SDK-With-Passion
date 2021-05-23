/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIInlineFlipContainerView : UIView

{
    UIView *_backView;
    UIView *_frontView;
}

- (void)flipToBackViewWithDuration:(double)arg1 options:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;

@end
