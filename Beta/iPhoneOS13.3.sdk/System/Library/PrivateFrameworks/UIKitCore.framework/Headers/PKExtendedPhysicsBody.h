/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <PhysicsKit/PKPhysicsBody.h>

__attribute__((visibility("hidden")))
@interface PKExtendedPhysicsBody : PKPhysicsBody

{
    long long _associations;
    double _areaFactor;
}

@property (nonatomic) double normalizedDensity;

+ (id)bodyWithEllipseInRect:(struct CGRect)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithBodies:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithRectangleOfSize:(struct CGSize)arg1;
- (void)associate;
- (_Bool)dissociate;

@end
