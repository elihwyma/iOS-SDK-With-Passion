/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface PURedEyeIndicatorView : UIView

{
    unsigned long long _animationType;
}

@property (nonatomic) unsigned long long animationType;

- (id)init;
- (void)didMoveToSuperview;
- (void)drawRect:(struct CGRect)arg1;
- (void)animateWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
