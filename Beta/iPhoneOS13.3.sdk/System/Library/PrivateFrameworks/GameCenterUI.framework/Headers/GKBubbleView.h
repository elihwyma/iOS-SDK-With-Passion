/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface GKBubbleView : UIView

{
    double _animationScale[9];
    _Bool _animationReversed[9];
    _Bool _animating;
    _Bool _touchAnimationRunning;
    _Bool _touchAnimationCanEnd;
    long long _bubbleType;
    UIImageView *_imageView;
    UIImageView *_highlightView;
    double _moveAnimationRangeMultiplier;
    long long _numVertices;
    long long _numFaces;
    double _animationAngle;
    double _animationRadiansPerSecond;
    double _touchAnimationElapsed;
    double _touchAnimationAngle;
    double _moveAnimationAngle;
    double _moveAnimationRadiansPerSecond;
    double _moveAnimationScale;
}

@property (retain, nonatomic) UIImageView *highlightView;
@property (nonatomic) long long numVertices;
@property (nonatomic) long long numFaces;
@property (nonatomic) double animationAngle;
@property (nonatomic) double animationRadiansPerSecond;
@property (nonatomic) _Bool touchAnimationRunning;
@property (nonatomic) _Bool touchAnimationCanEnd;
@property (nonatomic) double touchAnimationElapsed;
@property (nonatomic) double touchAnimationAngle;
@property (nonatomic) double moveAnimationAngle;
@property (nonatomic) double moveAnimationRadiansPerSecond;
@property (nonatomic) double moveAnimationScale;
@property (nonatomic) _Bool animating;
@property (nonatomic) long long bubbleType;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double moveAnimationRangeMultiplier;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)update:(double)arg1;
- (void)touchBegan;
- (void)touchEnded;
- (float)randomFloatBetweenMin:(float)arg1 andMax:(float)arg2;
- (void)choosePointAnimations;
- (_Bool)randomBOOL;
- (void)chooseMoveAnimation;
- (void)setupVerticesAndFacesAnimated:(_Bool)arg1;
- (void)applyAnimationToVertices:(struct CAMeshVertex *)arg1;
- (struct CGPoint)offsetForVertexAtIndex:(long long)arg1;
- (double)animationScaleForCurrentZ;
- (void)setAnimationStateBasedOnBubble:(id)arg1;

@end
