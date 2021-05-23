/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;

@interface CAMPanoramaArrowView : UIView

{
    UIImageView *_arrowHead;
    UIView *_arrowTail;
    CAShapeLayer *_arrowTailPiecesLayer;
    struct CGPath *_currentTailPiecesPath;
    struct CGRect _arrowTailRect;
    double _currentNormalizedSpeed;
    double _tailBiggestDelta;
    double _tailBigDelta;
    double _tailMediumDelta;
    double _tailSmallDelta;
}

- (void)dealloc;
- (void)reset;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateTailWithAnimationDuration:(double)arg1;
- (struct CGPath *)_newTailPiecesPathOfWidth:(double *)arg1;
- (void)animateWithNormalizedSpeed:(double)arg1 duration:(double)arg2;

@end
