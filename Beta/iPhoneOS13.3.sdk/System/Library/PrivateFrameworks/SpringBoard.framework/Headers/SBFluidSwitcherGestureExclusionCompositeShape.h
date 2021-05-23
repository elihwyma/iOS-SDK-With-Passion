/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SBFluidSwitcherGestureExclusionCompositeShape : NSObject

{
    _Bool _allowHorizontalSwipesInsideShapes;
    NSArray *_rects;
    double _topEdgeY;
}

@property (retain, nonatomic) NSArray *rects;
@property (nonatomic) _Bool allowHorizontalSwipesInsideShapes;
@property (nonatomic) double topEdgeY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exclusionCompositeShapeWithRects:(id)arg1 allowHorizontalSwipes:(_Bool)arg2;

- (id)debugView;
- (_Bool)shouldBeginGestureAtStartingPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 bounds:(struct CGRect)arg3;

@end
