/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class MTMaterialView, UIImageView;

@protocol SBFolderControllerBackgroundViewDelegate;

@interface SBFolderControllerBackgroundView : UIView

{
    MTMaterialView *_blurView;
    UIImageView *_blurViewSnapshot;
    UIView *_tintView;
    UIView *_debugFreezingView;
    _Bool _transitionCancelled;
    _Bool _effectActive;
    _Bool _expanding;
    _Bool _frozen;
    _Bool _reduceTransparencyEnabled;
    id <SBFolderControllerBackgroundViewDelegate> _delegate;
    unsigned long long _effect;
    unsigned long long _currentEffect;
}

@property (nonatomic, getter=isReduceTransparencyEnabled) _Bool reduceTransparencyEnabled;
@property (nonatomic, readonly) unsigned long long concreteEffect;
@property (nonatomic) unsigned long long currentEffect;
@property (weak, nonatomic) id <SBFolderControllerBackgroundViewDelegate> delegate;
@property (nonatomic, getter=isTransitionCancelled) _Bool transitionCancelled;
@property (nonatomic) unsigned long long effect;
@property (nonatomic, getter=isEffectActive) _Bool effectActive;
@property (nonatomic, getter=isExpanding) _Bool expanding;
@property (nonatomic, getter=isFrozen) _Bool frozen;

+ (id)_tintColorForEffect:(unsigned long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateCurrentEffect;
- (void)_reduceTransparencyEnabledStateChanged;
- (double)minimumHomeScreenScale;
- (id)currentEffectMaterialRecipeName;
- (_Bool)_isCurrentlyExpanding;

@end
