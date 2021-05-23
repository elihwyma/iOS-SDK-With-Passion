/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class AVBackdropView;

@interface AVBackgroundView : UIView

{
    _Bool _automaticallyDrawsRoundedCorners;
    _Bool _prefersLowQualityEffects;
    _Bool _circular;
    AVBackdropView *_backdropView;
}

@property (retain, nonatomic) AVBackdropView *backdropView;
@property (nonatomic) _Bool automaticallyDrawsRoundedCorners;
@property (nonatomic) _Bool prefersLowQualityEffects;
@property (nonatomic, getter=isCircular) _Bool circular;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3;
- (void)_updateBackdropShape;
- (void)_ensureOrRemoveBackdropView;
- (_Bool)_isContainedInOverlappingBackgroundView;

@end
