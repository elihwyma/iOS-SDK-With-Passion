/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIButton.h>

@interface ADPrerollButton : UIButton

{
    struct UIEdgeInsets _hitRectInsets;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property (nonatomic) struct UIEdgeInsets hitRectInsets;
@property (nonatomic) struct UIEdgeInsets alignmentRectInsets;

+ (id)buttonWithType:(long long)arg1;

- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;

@end
