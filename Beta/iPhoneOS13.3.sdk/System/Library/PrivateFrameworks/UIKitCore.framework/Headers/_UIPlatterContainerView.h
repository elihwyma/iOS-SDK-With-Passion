/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class _UIPlatterView;

__attribute__((visibility("hidden")))
@interface _UIPlatterContainerView : UIView

{
    UIView *_updatedTargetWrapper;
    _UIPlatterView *_source;
    _UIPlatterView *_target;
    _UIPlatterView *_updatedTarget;
}

@property (retain, nonatomic) _UIPlatterView *source;
@property (retain, nonatomic) _UIPlatterView *target;
@property (retain, nonatomic) _UIPlatterView *updatedTarget;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateTransforms;
- (void)applyRotation:(double)arg1;
- (void)applyTransform:(struct CGAffineTransform)arg1 withSize:(struct CGSize)arg2;

@end
