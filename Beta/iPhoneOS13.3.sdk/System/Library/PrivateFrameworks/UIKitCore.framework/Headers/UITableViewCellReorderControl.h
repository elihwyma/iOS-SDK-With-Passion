/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl : UIControl

{
    UITableViewCell *_cell;
    struct CGPoint _downPoint;
    double _focalY;
    double _focalHeight;
    UIImageView *_imageView;
}

@property (nonatomic, readonly) _Bool wantsMaskingWhileAnimatingDisabled;

- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_imageView;
- (void)_updateImageView;
- (void)_dynamicUserInterfaceTraitDidChange;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)shouldTrack;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;
- (id)initWithTableViewCell:(id)arg1;
- (id)grabberImage;

@end
