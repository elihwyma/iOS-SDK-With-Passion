/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBPolygon : NSObject

{
    NSMutableArray *_mutablePoints;
    NSMutableArray *_weights;
    struct CGPoint _centroid;
    struct CGPoint _weightedCentroid;
}

@property (retain, nonatomic, getter=_points, setter=_setPoints:) NSMutableArray *mutablePoints;
@property (nonatomic, getter=_centroid, setter=_setCentroid:) struct CGPoint centroid;
@property (nonatomic, readonly, getter=_perimeter) double perimeter;
@property (retain, nonatomic, getter=_weights, setter=_setWeights:) NSMutableArray *weights;
@property (nonatomic, getter=_weightedCentroid, setter=_setWeightedCentroid:) struct CGPoint weightedCentroid;
@property (nonatomic, readonly) unsigned long long pointCount;
@property (nonatomic, readonly) double distanceOfFarthestPointFromCentroid;

+ (id)_sortPoints:(id)arg1;
+ (struct CGPoint)_pointAtIndex:(unsigned long long)arg1 ofPointArray:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)points;
- (void)_applyTransform:(struct CGAffineTransform)arg1;
- (void)_updateProperties;
- (id)initWithPoints:(id)arg1;
- (void)_translate:(struct CGPoint)arg1;
- (struct CGPoint)_pointAtIndex:(unsigned long long)arg1;
- (id)initWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2;
- (_Bool)_isLeftHanded;
- (unsigned long long)_thumbIndex;
- (void)enumeratePointsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_updateCentroid;
- (void)_updateWeights;
- (void)_updateWeightedCentroid;
- (double)_weightAtIndex:(unsigned long long)arg1;
- (double)_baseOrientation;
- (void)_flipHorizontally;
- (void)_scale:(double)arg1;
- (void)_rotate:(double)arg1;
- (double)_meanFingertipRowAngle;
- (double)_meanRadius;

@end
