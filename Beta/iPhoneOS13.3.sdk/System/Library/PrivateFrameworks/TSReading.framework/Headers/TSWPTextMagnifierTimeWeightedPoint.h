/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPTextMagnifierTimeWeightedPoint : NSObject

{
    long long m_index;
    struct {
        struct CGPoint point;
        double time;
    } m_points[16];
}

@property (nonatomic, readonly) struct CGPoint weightedPoint;

- (void)addPoint:(struct CGPoint)arg1;
- (void)clearHistory;
- (_Bool)historyCovers:(double)arg1;
- (double)distanceCoveredInInterval:(double)arg1;
- (struct CGSize)displacementInInterval:(double)arg1;
- (double)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;
- (struct CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;

@end
