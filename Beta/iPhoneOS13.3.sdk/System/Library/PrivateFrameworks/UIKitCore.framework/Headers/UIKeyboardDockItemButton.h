/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardDockItemButton : UIButton

{
    struct CGRect _tapActionRegion;
}

@property (nonatomic) struct CGRect tapActionRegion;

- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)rectWithSize:(struct CGSize)arg1 forContentRect:(struct CGRect)arg2;

@end
