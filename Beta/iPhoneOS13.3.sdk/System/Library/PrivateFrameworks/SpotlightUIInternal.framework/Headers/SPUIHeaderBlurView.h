/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <UIKit/UIVisualEffectView.h>

@class UIColor;

@interface SPUIHeaderBlurView : UIVisualEffectView

{
    _Bool _useInPlaceFilteredBlur;
    UIColor *_baseTintColor;
}

@property (retain) UIColor *baseTintColor;
@property (nonatomic) _Bool useInPlaceFilteredBlur;

+ (double)backgroundViewBlurAlphaForProgress:(double)arg1 isDarkBackground:(_Bool)arg2;

- (id)init;
- (void)setTintColor:(id)arg1;
- (void)updateEffect;

@end
