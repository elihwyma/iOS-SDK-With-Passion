/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIView.h>

@class BSUIAnimationFactory;

@interface SBCrossfadeView : UIView

{
    BSUIAnimationFactory *_animationFactory;
    UIView *_startView;
    UIView *_endView;
    _Bool _translucent;
    _Bool _crossfaded;
    _Bool _allowsGroupOpacityDuringCrossfade;
    _Bool _adaptsAnimationFactoryTimingFunction;
}

@property (retain, nonatomic) BSUIAnimationFactory *animationFactory;
@property (nonatomic) _Bool allowsGroupOpacityDuringCrossfade;
@property (nonatomic) _Bool adaptsAnimationFactoryTimingFunction;

+ (id)crossfadeViewWithStartView:(id)arg1 endView:(id)arg2 translucent:(_Bool)arg3;

- (void)layoutSubviews;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)crossfadeWithCompletion:(CDUnknownBlockType)arg1;
- (id)_initWithStartView:(id)arg1 endView:(id)arg2 translucent:(_Bool)arg3;

@end
