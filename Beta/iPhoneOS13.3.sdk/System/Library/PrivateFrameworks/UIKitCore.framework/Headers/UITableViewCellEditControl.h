/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl

{
    UITableViewCell *_cell;
    UIImageView *_imageView;
    UIImageView *_shadowView;
    double _focalY;
    double _focalHeight;
    unsigned int _style:2;
    unsigned int _rotated:1;
    unsigned int _rotating:1;
    unsigned int _reserved:27;
}

@property (nonatomic, getter=isRotated) _Bool rotated;
@property (nonatomic, readonly) _Bool wantsMaskingWhileAnimatingDisabled;
@property (nonatomic, readonly) _Bool wantsImageShadow;

- (struct CGSize)defaultSize;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_imageView;
- (void)setHighlighted:(_Bool)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_updateImageView;
- (void)setSelected:(_Bool)arg1;
- (id)_shadowImage;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_dynamicUserInterfaceTraitDidChange;
- (_Bool)isRotating;
- (id)_currentImage;
- (id)_renderedImage;
- (void)setRotated:(_Bool)arg1 animated:(_Bool)arg2;
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;
- (void)_multiselectColorChanged;
- (void)_toggleRotate;
- (id)_deleteImage;
- (id)_insertImage;
- (id)_multiSelectNotSelectedImage;
- (id)_multiSelectSelectedImage;
- (void)_createImageViewIfNeccessary;
- (void)_toggleRotateAnimationDidStop;

@end
