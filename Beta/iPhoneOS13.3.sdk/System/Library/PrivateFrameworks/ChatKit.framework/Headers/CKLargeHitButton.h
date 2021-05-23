/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface CKLargeHitButton : UIButton

{
    struct UIEdgeInsets _hitTestInsets;
}

@property (nonatomic) struct UIEdgeInsets hitTestInsets;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
