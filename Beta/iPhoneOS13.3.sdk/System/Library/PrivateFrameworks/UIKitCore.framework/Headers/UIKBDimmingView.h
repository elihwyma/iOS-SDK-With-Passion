/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBDimmingView : UIView

{
    UIKBTree *_keyplane;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)refreshStyleForKeyplane:(id)arg1;

@end
