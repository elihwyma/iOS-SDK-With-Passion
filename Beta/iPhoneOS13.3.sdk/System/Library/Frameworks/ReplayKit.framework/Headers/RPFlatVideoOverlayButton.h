/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/UIButton.h>

@interface RPFlatVideoOverlayButton : UIButton

{
    long long _style;
    id _target;
    SEL _action;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (long long)style;
- (id)initWithStyle:(long long)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)_handleTap:(id)arg1;
- (id)_normalButtonImage;
- (id)_highlightedButtonImage;
- (id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3;

@end
