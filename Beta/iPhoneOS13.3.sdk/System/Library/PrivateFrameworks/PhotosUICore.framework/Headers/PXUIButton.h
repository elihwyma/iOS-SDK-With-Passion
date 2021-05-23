/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIButton.h>

@interface PXUIButton : UIButton

{
    _Bool _allowAnimatedHighlighting;
    struct UIEdgeInsets _hitTestOutset;
}

@property (nonatomic) struct UIEdgeInsets hitTestOutset;
@property (nonatomic) _Bool allowAnimatedHighlighting;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
