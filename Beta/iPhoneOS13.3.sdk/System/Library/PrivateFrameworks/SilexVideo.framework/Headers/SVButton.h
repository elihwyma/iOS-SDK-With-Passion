/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <UIKit/UIButton.h>

@interface SVButton : UIButton

{
    CDUnknownBlockType _touchUpInsideBlock;
    struct UIEdgeInsets _touchInsets;
}

@property (nonatomic) struct UIEdgeInsets touchInsets;
@property (copy, nonatomic, setter=onTouchUpInside:) CDUnknownBlockType touchUpInsideBlock;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_privateButtonTapped;

@end
