/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class MTMaterialView;

@protocol SBFolderBackgroundViewDelegate;

@interface SBFolderBackgroundView : UIView

{
    UIView *_tintView;
    MTMaterialView *_blurView;
    double _continuousCornerRadius;
    id <SBFolderBackgroundViewDelegate> _delegate;
    unsigned long long _effect;
    unsigned long long _currentEffect;
}

@property (nonatomic) unsigned long long currentEffect;
@property (weak, nonatomic) id <SBFolderBackgroundViewDelegate> delegate;
@property (nonatomic) unsigned long long effect;
@property (nonatomic, readonly) unsigned long long concreteEffect;

+ (void)warmupIfNecessary;
+ (struct CGSize)folderBackgroundSize;
+ (double)cornerRadiusToInsetContent;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_reduceTransparencyChanged;
- (void)_updateCurrentEffect;
- (void)updateTintEffectColor;
- (id)_tintViewBackgroundColorAtFullAlpha;
- (_Bool)_hasLowQualityBackground;

@end
