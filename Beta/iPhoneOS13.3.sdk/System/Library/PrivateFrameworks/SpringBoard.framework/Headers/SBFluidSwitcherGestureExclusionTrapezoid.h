/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBFluidSwitcherGestureExclusionTrapezoid : NSObject

{
    _Bool _allowHorizontalSwipesOutsideTrapezoid;
    double _baseHeight;
    double _trapezoidHeight;
    double _adjacentBaseXDistanceFromEdge;
    double _opposingBaseXDistanceFromEdge;
}

@property (nonatomic) double baseHeight;
@property (nonatomic) double trapezoidHeight;
@property (nonatomic) double adjacentBaseXDistanceFromEdge;
@property (nonatomic) double opposingBaseXDistanceFromEdge;
@property (nonatomic) _Bool allowHorizontalSwipesOutsideTrapezoid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exclusionTrapezoidWithBaseHeight:(double)arg1 trapezoidHeight:(double)arg2 adjacentBaseXDistanceFromEdge:(double)arg3 opposingBaseXDistanceFromEdge:(double)arg4 allowHorizontalSwipesOutsideTrapezoid:(_Bool)arg5;

- (id)debugView;
- (_Bool)shouldBeginGestureAtStartingPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 bounds:(struct CGRect)arg3;

@end
