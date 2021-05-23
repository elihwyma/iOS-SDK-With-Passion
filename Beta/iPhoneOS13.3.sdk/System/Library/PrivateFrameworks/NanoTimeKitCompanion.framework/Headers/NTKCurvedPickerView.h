/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSString;

@interface NTKCurvedPickerView : UIView

{
    NSMutableDictionary *_sideViews;
    unsigned long long _activeSide;
    unsigned long long _transitioningSide;
    double _currentFraction;
    _Bool _interior;
    double _circleRadius;
    double _centerAngle;
    struct CGPoint _circleCenter;
}

@property (nonatomic, readonly) double circleRadius;
@property (nonatomic, readonly) double centerAngle;
@property (nonatomic, readonly) _Bool interior;
@property (nonatomic, readonly) struct CGPoint circleCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long numberOfSides;
@property (nonatomic, readonly) unsigned long long numberOfVisibleSides;

- (id)init;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setCircleRadius:(double)arg1 centerAngle:(double)arg2 circleCenter:(struct CGPoint)arg3 interior:(_Bool)arg4;
- (void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;
- (void)transitionToSideAtIndex:(unsigned long long)arg1;
- (id)viewForSideAtIndex:(unsigned long long)arg1;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;
- (void)_setCurrentFraction:(double)arg1;
- (double)_angleForIndex:(unsigned long long)arg1;
- (struct CGAffineTransform)_transformForAngle:(double)arg1;
- (double)_alphaForIndex:(unsigned long long)arg1;

@end
