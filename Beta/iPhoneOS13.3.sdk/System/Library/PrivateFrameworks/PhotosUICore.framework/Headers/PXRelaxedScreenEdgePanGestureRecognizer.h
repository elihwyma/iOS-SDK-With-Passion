/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIPanGestureRecognizer.h>

@interface PXRelaxedScreenEdgePanGestureRecognizer : UIPanGestureRecognizer

{
    struct CGPoint _initialTouchLocation;
    unsigned long long _edges;
    double _minAngleToEdge;
    unsigned long long _trackingEdge;
    struct UIEdgeInsets _edgeAllowances;
}

@property (nonatomic) unsigned long long trackingEdge;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) struct UIEdgeInsets edgeAllowances;
@property (nonatomic) double minAngleToEdge;
@property (nonatomic) double minTranslation;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)setMinimumNumberOfTouches:(unsigned long long)arg1;
- (void)setMaximumNumberOfTouches:(unsigned long long)arg1;
- (double)translationDistanceInView:(id)arg1;

@end
