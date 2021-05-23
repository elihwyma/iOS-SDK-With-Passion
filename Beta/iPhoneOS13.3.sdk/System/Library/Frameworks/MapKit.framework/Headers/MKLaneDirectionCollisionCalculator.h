/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface MKLaneDirectionCollisionCalculator : NSObject

{
    NSMutableDictionary *_collisionsForDirection;
    NSMutableArray *_directions;
    NSNumber *_directionWithMostCollisions;
    _Bool _hasCollisions;
}

@property (nonatomic, readonly) _Bool hasCollisions;
@property (nonatomic, readonly) _Bool hasDirectionWithMaxCollisions;
@property (nonatomic, readonly) NSArray *directions;

- (id)initWithDirections:(id)arg1;
- (void)removeNextDirectionWithCollisions;
- (void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)arg1;
- (void)_recalculateCollisions;

@end
