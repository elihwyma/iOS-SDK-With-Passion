/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIButton.h>

@interface PXFlatVideoOverlayButton : UIButton

{
    long long _style;
    id _target;
    SEL _action;
    _Bool _showAsPause;
    _Bool __didConfigureForPause;
}

@property (nonatomic, setter=_setDidConfigureForPause:) _Bool _didConfigureForPause;
@property (nonatomic) _Bool showAsPause;

- (long long)style;
- (id)initWithStyle:(long long)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)_handleTap:(id)arg1;

@end
