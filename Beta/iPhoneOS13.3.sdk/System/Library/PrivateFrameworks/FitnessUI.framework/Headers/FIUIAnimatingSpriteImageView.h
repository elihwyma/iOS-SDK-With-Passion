/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class CALayer, UIImage;

@interface FIUIAnimatingSpriteImageView : UIView

{
    CALayer *_imageLayer;
    UIImage *_spriteImage;
    long long _spriteFrameCount;
    long long _spriteColumnCount;
    unsigned long long _framesPerSecond;
}

@property (retain, nonatomic) UIImage *spriteImage;
@property (nonatomic) long long spriteFrameCount;
@property (nonatomic) long long spriteColumnCount;
@property (nonatomic) unsigned long long framesPerSecond;

+ (unsigned long long)_findSpriteIndex:(struct CGPoint)arg1 centerPoints:(id)arg2;
+ (id)_createNewSpriteArray:(id)arg1 currentFrame:(unsigned long long)arg2 arraySize:(unsigned long long)arg3 interrupted:(_Bool)arg4;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)isAnimating;
- (void)startAnimating;
- (struct CGSize)_spriteFrameSize;
- (void)stopAnimatingFinishingCycle:(_Bool)arg1;
- (id)_centerPointValues;
- (void)animateOnce;

@end
