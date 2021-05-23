/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierTimeWeightedPoint : NSObject

{
    int m_index;
    struct {
        struct CGPoint point;
        double time;
    } m_points[16];
}

@property (nonatomic, readonly) struct CGPoint weightedPoint;

- (void)addPoint:(struct CGPoint)arg1;
- (void)clearHistory;
- (_Bool)isPlacedCarefully;
- (struct CGPoint)diffFromLastPoint;
- (_Bool)historyCovers:(double)arg1;
- (float)distanceCoveredInInterval:(double)arg1;
- (struct CGSize)displacementInInterval:(double)arg1;
- (float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;
- (struct CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;

@end
